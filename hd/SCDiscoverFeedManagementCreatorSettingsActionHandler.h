//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventAnnouncing.h"

@class NSString, SCCreatorSettingsDataMutator, SCDiscoverFeedManagementFullScreenViewDataCoordinator, SCEventListenerAnnouncer, UIViewController;

@interface SCDiscoverFeedManagementCreatorSettingsActionHandler : NSObject <SCActionHandling, SCEventAnnouncing>
{
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCDiscoverFeedManagementFullScreenViewDataCoordinator *_discoverFeedManagementDataCoordinator;
    CDUnknownBlockType _presentPublicUserProfileBlock;
    id <SCActionHandling> _impalaShowProfileActionHandler;
    id <SCActionHandling> _impalaPublisherProfileActionHandler;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutator;
    CDUnknownBlockType _requestNotificationPermissionsBlock;
    CDUnknownBlockType _displayOptInNotificationPromptBlock;
    id <SCActionHandling> _discoverPlayStoryActionHandler;
    SCEventListenerAnnouncer *_eventAnnouncer;
    UIViewController *_presentingViewController;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_logActionType:(long long)arg1 itemId:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithDiscoverFeedManagementDataCoordinator:(id)arg1 presentPublicUserProfileBlock:(CDUnknownBlockType)arg2 impalaShowProfileActionHandler:(id)arg3 impalaPublisherProfileActionHandler:(id)arg4 discoverFeedDataMutator:(id)arg5 requestNotificationPermissionsBlock:(CDUnknownBlockType)arg6 displayOptInNotificationPromptBlock:(CDUnknownBlockType)arg7 discoverPlayStoryActionHandler:(id)arg8;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

