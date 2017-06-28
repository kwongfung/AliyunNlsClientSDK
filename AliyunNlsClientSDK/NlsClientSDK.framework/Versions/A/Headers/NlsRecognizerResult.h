//
//  NlsRecognizerResult.h
//  NlsClientSDK
//
//  Created by Shawn Chain on 13-11-7.
//  Copyright (c) 2015年 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNlsResponseSuccess @"1";
#define kNlsResponseFail @"0";
#define kNlsResponseVersion10 @"1.0";
#define kNlsResponseVersion40 @"4.0";

#pragma mark - RecognizeResult
/**
 *  语音识别返回的结果，封装了返回值对象
 *
 */
@interface NlsRecognizerResult : NSObject

@property(nonatomic,copy) NSString* id;// 透传系统始终的uuid,服务端配置是否返回
@property(nonatomic,copy) NSString* version;// 协议版本号
@property(nonatomic,copy) NSString* status;// 服务器状态，0为失败，非零为成功
@property(nonatomic,copy) NSString* finish;// 0为未结束，非零为结束，识别是否已经结束
@property(nonatomic,assign) NSInteger status_code;// 暴露出来的状态码
@property(nonatomic,copy) NSDictionary* results; // 服务端的处理结果
@property(nonatomic,assign) BOOL bstream_attached;// 请求包的后面是不是还接着二进制语音流。

@end





