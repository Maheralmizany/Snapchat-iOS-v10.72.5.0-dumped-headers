//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol SCSnapAdsUserInfoAdapter <NSObject>
- (NSString *)getUserAdId;
- (_Bool)getEnableAdTracking;
- (NSData *)getEncrypedUserData;
- (void)setEncrypedUserData:(NSData *)arg1;
- (NSString *)getRawUserDataV2;
- (NSString *)getRawUserData;
@end

