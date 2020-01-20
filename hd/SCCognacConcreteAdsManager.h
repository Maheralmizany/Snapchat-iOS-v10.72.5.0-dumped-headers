//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacAdsManager.h"
#import "SCOperaPresenterDelegate.h"

@class NSString, NSTimer, SCCognacAdDataSource, SCCognacAdRules, SCCognacAdSDKInfo, SCCognacAdsListenerAnnouncer, SCOperaPresenter, SCQueueWithCapacity, SCUserSession;

@interface SCCognacConcreteAdsManager : NSObject <SCOperaPresenterDelegate, SCCognacAdsManager>
{
    SCUserSession *_userSession;
    SCCognacAdDataSource *_adDataSource;
    SCOperaPresenter *_operaPresenter;
    id <SCCognacAdsManagerDelegate> _delegate;
    SCCognacAdsListenerAnnouncer *_announcer;
    SCQueueWithCapacity *_watchTimestampQueue;
    SCCognacAdRules *_rules;
    SCCognacAdSDKInfo *_sdkInfo;
    NSTimer *_rateLimitTimer;
    NSTimer *_retryRequestTimer;
    long long _retryRequestCount;
    NSString *_sesssionId;
}

- (void).cxx_destruct;
- (_Bool)_passRateLimitWithPassBlock:(CDUnknownBlockType)arg1;
- (double)rateLimitTimeLeft;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)_showDebugMessage:(id)arg1;
- (void)_requestAd;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clearAds;
- (void)watchAdWithPresentingViewController:(id)arg1 watchInfo:(id)arg2 deepLinkNavigationDelegate:(id)arg3;
- (void)initializeAdsWithRules:(id)arg1 sdkInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

