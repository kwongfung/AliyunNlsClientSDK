//
//  NlsRequest.h
//  NlsClientSDK
//
//  Created by 刘方 on 11/17/15.
//  Copyright © 2015 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NlsRequestDS.h"
#import "NlsRequestTTS.h"
#import "NlsRequestASR.h"
#import "NlsRequestContext.h"
#import "NlsRequestProto.h"

#pragma mark - NlsRequestXY Class Interface
@interface NlsRequestXY : NSObject
@property (nonatomic, copy, readonly) NSString *web_session;
@end


#pragma mark - RequestSet Class Interface
@interface RequestSet : NSObject

@property(nonatomic,strong) NlsRequestXY *xy_in;// optional 自然语言处理请求参数
@property(nonatomic,strong) NlsRequestGDS *gds_in;// optional 自然语言处理请求参数
@property(nonatomic,strong) NlsRequestDS *ds_in;// optional 自然语言处理请求参数
@property(nonatomic,strong) NlsRequestTTS *tts_in;// optional 语音合成的请求参数
@property(nonatomic,strong) NlsRequestASR *asr_in;// optional 语音识别的请求参数
@property(nonatomic,strong) NlsRequestASROUT *asr_out;// optional 语音识别ASROUT的请求参数
@property(nonatomic,copy)  NSDictionary *ext_userIn;// optional 保留字段

@end

#pragma mark - NlsRequest Class Interface
@interface NlsRequest : NSObject

@property(nonatomic,copy, readonly) NSString *version;// 协议版本号
@property(nonatomic,copy, readonly) NSString *app_key;// 应用appkey
@property(nonatomic,copy, readonly) NSString *session_id;//optional, nlp服务的session id号，保留字段
@property(nonatomic,copy, readonly) NSString *id;// 自客户端创建的，透传系统始终的uuid
@property(nonatomic,assign, readonly) BOOL bstream_attached;// 请求包的后面是不是还接着二进制语音流。
@property(nonatomic,strong) RequestSet *requests;
@property(nonatomic,strong) NlsRequestContext *context;

@property(nonatomic,copy, readonly) NSString *clientIp;//optional
@property(nonatomic,copy, readonly) NSString *requestTime;

/**
 *  语音请求初始化方法。语音识别、语音合成的语音请求初始化方法。
 *
 *  @param 无
 *
 *  @return self
 */
- (instancetype)init;

/**
 *  语音请求初始化方法。自然语言处理的语音请求初始化方法。
 *
 *  @param nlsRequestProto
 *
 *  @return self
 */
- (instancetype)initWithRequestProto:(NlsRequestProto * )nlsRequestProto;



/**
 *  设置语音请求的appkey
 *
 *  @param appKey
 *
 *  @return 无
 */
- (void)setAppkey:(NSString *)appKey;

/**
 *  设置发送的请求是否需要带语音数据。若发送的是语音识别请求，则bstreamAttached为YES；若发送的是语音合成请求，则bstreamAttached为NO
 *
 *  @param bstreamAttached
 *
 *  @return 无
 */
- (void)setBstreamAttached:(BOOL)bstreamAttached;

/**
 *  设置设备ip
 *
 *  @param clientIp
 *
 *  @return 无
 */
- (void)setClientIp:(NSString *)clientIp;


/**
 *  设置语音识别ASR请求(新接口)
 *
 *  @param userId
 *
 *  @return 无
 */
- (void)setAsrRequest;

/**
 *  设置语音识别ASR请求(老接口)
 *
 *  @param userId
 *
 *  @return 无
 */
- (void)setAsrRequest:(NSString *)userId;

/**
 *  设置语音识别ASR识别结果返回模式
 *
 *  @param responseMode 语音识别结果返回模式，0是流式，1是非流式。
 *
 *  @return 无
 */
- (void)setAsrResponseMode:(NSString *)responseMode;

/**
 *  设置用户id
 *
 *  @param userId 用户id，可选项。使用词表时必选
 *
 *  @return 无
 */
- (void)setAsrUserId:(NSString *)userId;

/**
 *  设置词表id
 *
 *  @param vocabularyId 词表id，可选项。使用词表时必选
 *
 *  @return 无
 */
- (void)setAsrVocabularyId:(NSString *)vocabularyId;

/**
 *  设置组织id
 *
 *  @param organizationId 组织id，可选项。使用词表时，公有云必选
 *
 *  @return 无
 */
- (void)setAsrOrganizationId:(NSString *)organizationId;

/**
 *  设置自然语言处理NLU请求。
 *
 *  @return 无
 */
- (void)setDsRequest;

/**
 *  设置DS请求
 *
 *  @return 无
 */
- (void)setDsRequestType:(NSString *)type content:(NSDictionary *)content;

/**
 *  设置自然语言处理NLU请求。
 *
 *  @return 无
 */
- (void)setGdsRequest;

/**
 *  设置GDS请求
 *
 *  @return 无
 */
- (void)setGdsRequestType:(NSString *)type content:(NSDictionary *)content;


/**
 *  设置TTS文本
 *
 *  @param text TTS文本
 *
 *  @return 无
 */
- (void)setTtsText:(NSString *)text;

/**
 *  设置TTS语音编码格式
 *
 *  @param encode_type 语音数据编码，取值范围pcm,wav或alaw，默认pcm
 *
 *  @return 无
 */
- (void)setTtsEncodeType:(NSString *)encode_type;

/**
 *  设置TTS采样率
 *
 *  @param sampleRate 采样率，取值范围8000～16000，默认16000
 *
 *  @return 无
 */
- (void)setTtsSampleRate:(NSString *)sampleRate;

/**
 *  设置TTS语速
 *
 *  @param speechRate 播放速率,取值范围-500~500，默认0
 *
 *  @return 无
 */
- (void)setTtsSpeechRate:(NSInteger)speechRate;

/**
 *  设置TTS音量
 *
 *  @param volume 播放音量,取值范围0～100，默认50
 *
 *  @return 无
 */
- (void)setTtsVolume:(NSInteger)volume;

/**
 *  设置TTS模式
 *
 *  @param nus模式，取值范围0或1，默认1
 *
 *  @return 无
 */
- (void)setTtsNus:(NSInteger)nus;

/**
 *  设置TTS说话人
 *
 *  @param voice 取值范围为女声“xiaoyun”、男生“xiaogang”
 *
 *  @return 无
 */
- (void)setTtsVoice:(NSString *)voice;

/**
 *  设置TTS拼音
 *
 *  @param refer 
 *
 *  @return 无
 */
- (void)setTtsPronRefer:(NSString *)refer;

/**
 *  设置TTS语调
 *
 *  @param pitchRate 语调,取值范围-500~500，默认0
 *
 *  @return 无
 */
- (void)setTtsPitchRate:(NSInteger)pitchRate;

/**
 *  数加验证，未经过数据验证的语音请求均为非法请求。 其中数加验证所用的时间为Local Date
 *
 *  @param authId 数加验证的ak_id
 *
 *  @param secret 数加验证的ak_secret
 *
 *  @return 无
 */
- (void)Authorize:(NSString *)authId withSecret:(NSString *)secret;

/**
 *  数加验证，未经过数据验证的语音请求均为非法请求。
 *
 *  @param authId 数加验证的ak_id
 *
 *  @param secret 数加验证的ak_secret
 *
 *  @param  GMTDate 用户获取的网络时间，要求GMT格式，如：Wed, 05 Sep. 2012 23:00:00 GMT
 *
 *  @return 无
 */
- (void)Authorize:(NSString *)authId withSecret:(NSString *)secret withGMTDate:(NSString *)GMTDate;

/**
 *  将语音请求NlsRequest转换成JSON字符串形式。NlsRequest --> JSONString。
 *
 *  @param nlsRequest
 *
 *  @return NlsRequest的JSON字符串
 */
+ (NSString *)getJSONStringfromNlsRequest:(NlsRequest *)nlsRequest;

/**
 *  将object转换成JSONString。object --> JSONString。
 *
 *  @param obj
 *  @param options
 *  @param error
 *
 *  @return NlsRequest的JSON字符串
 */
+ (NSString *)getJSONString:(id)obj options:(NSJSONWritingOptions)options error:(NSError**)error;

/**
 *  将object转换成NSDictionary。object --> NSDictionary。
 *
 *  @param obj
 *
 *  @return NSDictionary
 */
+ (NSDictionary *)getObjectData:(id)obj;

/**
 *  设置地理位置信息
 *
 *  @param longitude 经度
 *  @param latitude 纬度
 *  @param country 国家
 *  @param provience 省
 *  @param city 市
 *  @param area 区
 *  @param street 街道
 *
 *  @return 无
 */
- (void)setLocationInfoWithLongitude:(NSString *)longitude latitude:(NSString *)latitude country:(NSString *)country provience:(NSString *)provience city:(NSString *)city area:(NSString *)area street:(NSString *)street;

/**
 *  设置ASROOUT请求
 *
 *  @param result
 *
 *  @return 无
 */
- (void)setAsrOutRequest:(NSString *)result;

/**
 *  设置XY_IN请求
 *
 *  @param web_session
 *
 *  @return 无
 */
- (void)setXyInRequest:(NSString *)web_session;

/**
 *  setRequestsExtUserInWith
 *
 *  @param strName
 *  @param strContent
 *
 *  @return 无
 */
- (void)setRequestsExtUserInWith:(NSString *)strName and:(NSDictionary *)strContent;

@end
