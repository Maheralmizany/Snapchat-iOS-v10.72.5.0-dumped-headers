//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SCPNScanAnimationCategories, SCPNSceneIntResponse;

@protocol SCLSIServiceListener <NSObject>

@optional
- (void)lensSceneIntelligenceService:(id <SCLSIService>)arg1 didReceiveLensRecommendationResponseForRequest:(id <SCSIBackendRequest>)arg2;
- (void)lensSceneIntelligenceService:(id <SCLSIService>)arg1 receivedScanAnimationResponse:(SCPNScanAnimationCategories *)arg2;
- (void)lensSceneIntelligenceService:(id <SCLSIService>)arg1 request:(id <SCSIBackendRequest>)arg2 failedWithError:(NSError *)arg3;
- (void)lensSceneIntelligenceService:(id <SCLSIService>)arg1 request:(id <SCSIBackendRequest>)arg2 receivedResponse:(SCPNSceneIntResponse *)arg3;
- (void)lensSceneIntelligenceService:(id <SCLSIService>)arg1 willProccessRequest:(id <SCSIBackendRequest>)arg2;
@end

