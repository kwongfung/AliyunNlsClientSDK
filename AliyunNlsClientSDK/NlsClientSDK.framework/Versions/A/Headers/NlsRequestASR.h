//
//  NlsRequestASR.h
//  NlsClientSDK
//
//  Created by 刘方 on 12/19/15.
//  Copyright © 2015 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - NlsRequestASR Class Interface
@interface NlsRequestASR : NSObject

@property (nonatomic, copy, readonly) NSString *version;// 协议版本号
@property (nonatomic, copy) NSString *asrSC;// 输入的语音格式(编码类型),默认为opu
@property (nonatomic, copy, readonly) NSString* response_mode;// 语音识别结果返回模式，0是流式，1是非流式。
@property (nonatomic, copy) NSString* user_id;// 用户id，可选项。使用词表时必选
@property (nonatomic, copy, readonly) NSString* vocabulary_id;// 词表id，可选项。使用词表时必选
@property (nonatomic, copy, readonly) NSString* organization_id;// 组织id，可选项。使用词表时：nls-dispatch无需设置，speech-dispatch必须设置

- (void)setAsrResponseMode:(NSString *)responseMode;
- (void)setAsrUserId:(NSString *)userId;
- (void)setAsrVocabularyId:(NSString *)vocabularyId;
- (void)setAsrOrganizationId:(NSString *)organizationId;

@end

#pragma mark - NlsRequestASROUT Class Interface
@interface NlsRequestASROUT : NSObject

@property (nonatomic, copy, readonly) NSString *version;// 协议版本号
@property (nonatomic, copy) NSString *result;// 语音识别结果
@property (nonatomic, assign) BOOL fake;// 标记是否为人工填的asr

@end