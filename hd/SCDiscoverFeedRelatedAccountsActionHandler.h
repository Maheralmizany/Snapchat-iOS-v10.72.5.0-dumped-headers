//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventAnnouncing.h"

@class NSString, SCCreatorSettingsDataMutator, SCDiscoverFeedRelatedAccountsSubscribeStatusManager, SCEventListenerAnnouncer, SCScopedAccess, SCUserSession, UIViewController;

@interface SCDiscoverFeedRelatedAccountsActionHandler : NSObject <SCActionHandling, SCEventAnnouncing>
{
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCDiscoverFeedRelatedAccountsSubscribeStatusManager *_subscribeStatusManager;
    SCScopedAccess *_snapchattersDataMutator;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_presentingViewController;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_handleSubscribeResponseDidSubscribe:(_Bool)arg1 story:(id)arg2 storyDedupeFp:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)_sendSubscribeRequestWithStoryKey:(id)arg1 story:(id)arg2 storyDedupeFp:(unsigned long long)arg3 shouldSubscribe:(_Bool)arg4;
- (void)_handleSubscribeStoryDedupeFp:(unsigned long long)arg1 snapchatter:(id)arg2 currentSubscribeState:(unsigned long long)arg3;
- (void)_presentPublicUserProfile:(id)arg1 snapchatter:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 presentingViewController:(id)arg3 subscribeStatusManager:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

