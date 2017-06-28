//
//  NlsRequestProto.h
//  NlsClientSDK
//
//  Created by 刘方 on 11/17/15.
//  Copyright © 2015 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNlsRequestProtoVersion10 @"1.0"
#define kNlsRequestProtoVersion20 @"2.0";
#define kNlsRequestProtoVersion30 @"3.0";
#define kNlsRequestProtoVersion40 @"4.0";

#pragma mark - NlsRequestProto Class Interface
@interface NlsRequestProto : NSObject

@property(nonatomic,copy) NSString* app_id;
@property(nonatomic,copy) NSString* app_user_id;
@property(nonatomic,copy) NSString* app_version;
@property(nonatomic,copy) NSString* application_service_id;
@property(nonatomic,copy) NSString* application_service_version;

@property(nonatomic,copy) NSString* device_type;
@property(nonatomic,copy) NSString* device_id;
@property(nonatomic,copy) NSString* device_system_locale;
@property(nonatomic,copy) NSString* device_timezone;
@property(nonatomic,readonly) NSString* device_uuid;
@property(nonatomic,copy) NSString* device_imei;
@property(nonatomic,copy) NSString* device_mac;
@property(nonatomic,copy) NSString* device_brand;
@property(nonatomic,copy) NSString* device_model;
@property(nonatomic,copy) NSString* device_os_type;
@property(nonatomic,copy) NSString* device_os_version;
@property(nonatomic,copy) NSString* device_network_type;



@property(nonatomic,assign) BOOL debug_GDS_AllResultCode;
@property(nonatomic,copy) NSDictionary* other;

@end
