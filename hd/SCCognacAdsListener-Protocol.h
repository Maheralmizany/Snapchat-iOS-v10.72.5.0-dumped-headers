//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCCognacAdsListener <NSObject>
- (void)onAdErrorWithSlotId:(NSString *)arg1 requestId:(NSString *)arg2 AdRequestError:(NSString *)arg3;
- (void)onAdRateLimitedWithSlotId:(NSString *)arg1 requestId:(NSString *)arg2 rateLimitTimeLeftInSec:(double)arg3;
- (void)onAdReadyWithSlotId:(NSString *)arg1 requestId:(NSString *)arg2;
@end

