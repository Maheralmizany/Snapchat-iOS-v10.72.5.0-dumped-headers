//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"

@class NSMutableSet, NSString, SCCognacDataStorage, SCCognacWebProxyLoader, SCCognacWebProxyPreloaderPersistentStorage, SCExperimentManager, SCQueuePerformer;

@interface SCCognacWebProxyPreloader : NSObject <SCEventListener>
{
    SCExperimentManager *_experimentManager;
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacWebProxyLoader *_loader;
    SCCognacWebProxyPreloaderPersistentStorage *_persistentStorage;
    SCQueuePerformer *_performer;
    NSMutableSet *_openAppIds;
    _Bool _friendsFeedDidAppearOnce;
    NSString *_lastLoadedURLString;
    NSMutableSet *_runningLoadRequests;
}

- (void).cxx_destruct;
- (void)_didReceiveCognacInitiateInviteNotification:(id)arg1 payload:(id)arg2;
- (void)_chatDrawerWillBecomeActiveWithConversationId:(id)arg1;
- (void)_chatViewWillBecomeVisibleWithConversationId:(id)arg1;
- (void)_friendsFeedViewDidFullyAppearForTheFirstTime;
- (void)_appListDidUpdate;
- (void)_preloadFirstValidAppInstanceWithConversationId:(id)arg1;
- (void)_preloadFirstAppIfAccessedRecentlyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_prefetchAppsIfAccessedRecentlyWithPrefetchCount:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_preloadFirstAppIfAccessedRecently;
- (void)_preloadFirstApp;
- (void)_preloadAppWithAppId:(id)arg1;
- (void)_preloadWithURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_preloadWithURLString:(id)arg1;
- (void)_cancelRunningLoadRequests;
- (_Bool)_isActivePlayer;
- (_Bool)_shouldPreload;
- (_Bool)_isOnWifi;
- (void)_updateLastActiveDateForUserAndLastAccessDateForAppId:(id)arg1;
- (void)_updateLastSeenDateForApps;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerBackgroundPrefetchWithPrefetchCompletionHandler:(CDUnknownBlockType)arg1;
- (void)chatViewWillBecomeVisibleWithConversationId:(id)arg1;
- (void)friendsFeedViewDidFullyAppearForTheFirstTime;
- (void)didReceiveCognacNotification:(id)arg1;
- (void)didCloseAppWithAppId:(id)arg1;
- (void)didOpenAppWithAppId:(id)arg1;
- (void)dealloc;
- (id)initWithExperimentManager:(id)arg1 cognacDataStorage:(id)arg2 loader:(id)arg3 persistentStorage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
