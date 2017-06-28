//
//  NlsRequestDS.h
//  NlsClientSDK
//
//  Created by 刘方 on 12/19/15.
//  Copyright © 2015 Alibaba iDST. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - NlsRequestDS Class Interface
@interface NlsRequestDS : NSObject

@property (nonatomic, copy, readonly) NSString *type;
@property (nonatomic, copy, readonly) NSString *version;
@property (nonatomic, copy, readonly) NSDictionary *content;

- (void)setType:(NSString *)type setContent:(NSDictionary *)content;

@end

#pragma mark - NlsRequestGDS Class Interface
@interface NlsRequestGDS : NSObject

@property (nonatomic, copy, readonly) NSString *type;
@property (nonatomic, copy, readonly) NSString *version;
@property (nonatomic, copy, readonly) NSDictionary *content;

- (void)setType:(NSString *)type setContent:(NSDictionary *)content;

@end