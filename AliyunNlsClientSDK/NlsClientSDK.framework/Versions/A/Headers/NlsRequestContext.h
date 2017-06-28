//
//  NlsRequestContext.h
//  NlsClientSDK
//
//  Created by 刘方 on 12/19/15.
//  Copyright © 2015 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - SdkInfo Class Interface
/**
 *  SdkInfo
 */
@interface SdkInfo : NSObject

@property (nonatomic, copy) NSString *sdk_type;
@property (nonatomic, copy) NSString *version;

@end

#pragma mark - DebugInfo Class Interface
/**
 *  DebugInfo
 */
@interface DebugInfo : NSObject

@property (nonatomic, assign) BOOL GDS_AllResultCode;

@end

#pragma mark - DeviceInfo Class Interface
/**
 *  DeviceInfo
 */
@interface DeviceInfo : NSObject

@property (nonatomic, copy) NSString *device_type;
@property (nonatomic, copy) NSString *device_id;
@property (nonatomic, copy) NSString *system_locale;
@property (nonatomic, copy) NSString *timezone;

@property (nonatomic, copy) NSString *device_uuid;
@property (nonatomic, copy) NSString *device_imei;
@property (nonatomic, copy) NSString *device_mac;
@property (nonatomic, copy) NSString *device_brand;
@property (nonatomic, copy) NSString *device_model;
@property (nonatomic, copy) NSString *os_type;
@property (nonatomic, copy) NSString *os_version;
@property (nonatomic, copy) NSString *network_type;


@end

#pragma mark - ApplicationData Class Interface
/**
 * ApplicationData
 */
@interface ApplicationData : NSObject

@property (nonatomic, copy) NSString* application_id;
@property (nonatomic, copy) NSString* user_id;
@property (nonatomic, copy) NSString* version;
@property (nonatomic, copy) NSString* service_id;
@property (nonatomic, copy) NSString* service_version;

@end

#pragma mark - GeoInfo Class Interface
/**
 *  GeoInfo 地理位置等级
 */
@interface GeoInfo : NSObject

@property (nonatomic, copy) NSString* level1;
@property (nonatomic, copy) NSString* level2;
@property (nonatomic, copy) NSString* level3;
@property (nonatomic, copy) NSString* level4;
@property (nonatomic, copy) NSString* level5;

@end

#pragma mark - LocationInfo Class Interface
/**
 *  LocationInfo 经纬度信息
 */
@interface LocationInfo : NSObject

@property (nonatomic, copy) NSString* longitude;
@property (nonatomic, copy) NSString* latitude;
@property (nonatomic, strong) GeoInfo* geo;

@end

#pragma mark - HeadersInfo Class Interface
/**
 *  shujia header
 */
@interface HeadersInfo : NSObject

@property (nonatomic, copy) NSString* accept;
@property (nonatomic, copy) NSString* content_type;
@property (nonatomic, copy) NSString* date;
@property (nonatomic, copy) NSString* Authorization;

@end

#pragma mark - AuthBody Class Interface
/**
 *  数加 AuthBody
 */
@interface AuthBody : NSObject

@property (nonatomic, strong) NSMutableArray* requests;

@end

#pragma mark - NlsRequestAuth Class Interface
/**
 *  数加 auth
 */
@interface NlsRequestAuth : NSObject

@property (nonatomic, copy, readonly) NSString* method;
@property (nonatomic, strong, readonly) AuthBody* body;
@property (nonatomic, strong) HeadersInfo* headers;

- (NSString *)stringToSign:(NSString *)authId withSecret:(NSString *)authSecret withGMTDate:(NSString *)GMTDate;
- (void)bodyAddRequest:(NSString *)str;

@end

#pragma mark - NlsRequestContext Class Interface
/**
 *  NlsRequestContext
 */
@interface NlsRequestContext : NSObject

@property (nonatomic, strong) DeviceInfo* device;// optional
@property (nonatomic, strong) ApplicationData* application;// optional
@property (nonatomic, strong) LocationInfo* location;// optional
@property (nonatomic, strong) NlsRequestAuth* auth;// optional
@property (nonatomic, strong) DebugInfo* debug;
@property (nonatomic,copy) NSDictionary *other;//  optional
@property (nonatomic, strong) SdkInfo* sdk;

@end