//
//  NlsRequestTTS.h
//  NlsClientSDK
//
//  Created by 刘方 on 12/19/15.
//  Copyright © 2015 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - NlsRequestTTS Class Interface
@interface NlsRequestTTS : NSObject

@property (nonatomic, copy, readonly) NSString *version;// 协议版本号
@property (nonatomic, copy, readonly) NSString *text;// 输入的文本
@property (nonatomic, copy, readonly) NSString *format;//默认normal
@property (nonatomic, copy, readonly) NSString *encode_type;//语音数据编码，取值范围pcm,wav或alaw，默认pcm
@property (nonatomic, copy, readonly) NSString *sample_rate;//采样率，取值范围8000～16000，默认16000
@property (nonatomic, assign, readonly) NSInteger speech_rate;//播放速率,取值范围-500~500，默认0
@property (nonatomic, assign, readonly) NSInteger volume;//播放音量,取值范围0～100，默认50
@property (nonatomic, assign, readonly) NSInteger nus;//取值范围0 1 2，默认1
@property (nonatomic, copy, readonly) NSString *voice;//取值范围为“xiaoyun”、“xiaogang”
@property (nonatomic, copy, readonly) NSString *refer;//输入字符串的拼音，如“文本/wen2-ben3”
@property (nonatomic, assign, readonly) NSInteger pitch_rate;//调整语调,取值范围-500~500，默认0

- (void)setTtsText:(NSString *)text;
- (void)setTtsEncodeType:(NSString *)encode_type;
- (void)setTtsSampleRate:(NSString *)sampleRate;
- (void)setTtsSpeechRate:(NSInteger)speechRate;
- (void)setTtsVolume:(NSInteger)volume;
- (void)setTtsNus:(NSInteger)nus;
- (void)setTtsVoice:(NSString *)voice;
- (void)setTtsPronRefer:(NSString *)refer;
- (void)setTtsPitchRate:(NSInteger)pitchRate;
@end
