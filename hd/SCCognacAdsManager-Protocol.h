//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCognacAdRules, SCCognacAdSDKInfo, SCCognacAdWatchInfo, UIViewController<SCPageNameLogging>;

@protocol SCCognacAdsManager <NSObject>
- (void)setDelegate:(id <SCCognacAdsManagerDelegate>)arg1;
- (double)rateLimitTimeLeft;
- (void)removeListener:(id <SCCognacAdsListener>)arg1;
- (void)addListener:(id <SCCognacAdsListener>)arg1;
- (void)clearAds;
- (void)watchAdWithPresentingViewController:(UIViewController<SCPageNameLogging> *)arg1 watchInfo:(SCCognacAdWatchInfo *)arg2 deepLinkNavigationDelegate:(id <NavigationDelegate>)arg3;
- (void)initializeAdsWithRules:(SCCognacAdRules *)arg1 sdkInfo:(SCCognacAdSDKInfo *)arg2;
@end
