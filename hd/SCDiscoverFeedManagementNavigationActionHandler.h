//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventAnnouncing.h"

@class NSString, SCDiscoverFeedOnboardingDataCoordinator, SCEventListenerAnnouncer, SCExperimentManager, SCUnifiedActionMenuPresenter;

@interface SCDiscoverFeedManagementNavigationActionHandler : NSObject <SCActionHandling, SCEventAnnouncing>
{
    id <SCImageDownloading> _imageDownloader;
    CDUnknownBlockType _presentPublicUserProfileBlock;
    CDUnknownBlockType _impalaShowProfileActionHandlerProvider;
    CDUnknownBlockType _impalaPublisherProfileActionHandlerProvider;
    CDUnknownBlockType _discoverPlayStoryActionHandlerProvider;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutator;
    CDUnknownBlockType _requestNotificationPermissionsBlock;
    CDUnknownBlockType _displayOptInNotificationPromptBlock;
    SCDiscoverFeedOnboardingDataCoordinator *_onboardingDataCoordinator;
    id <SCEventListener> _discoverFeedEventsController;
    SCExperimentManager *_experimentManager;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak SCUnifiedActionMenuPresenter *actionMenuPresenter; // @synthesize actionMenuPresenter=_actionMenuPresenter;
- (void).cxx_destruct;
- (void)_applicationWillResignActive;
- (void)_presentStoryViewHistoryView;
- (void)_presentHiddenStoriesView;
- (void)_presentInterestSelectionViewWithSender:(id)arg1 sourceView:(id)arg2;
- (void)_presentSubscriptionView;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithImageDownloader:(id)arg1 presentPublicUserProfileBlock:(CDUnknownBlockType)arg2 impalaShowProfileActionHandlerProvider:(CDUnknownBlockType)arg3 impalaPublisherProfileActionHandlerProvider:(CDUnknownBlockType)arg4 discoverPlayStoryActionHandlerProvider:(CDUnknownBlockType)arg5 discoverFeedDataMutator:(id)arg6 requestNotificationPermissionsBlock:(CDUnknownBlockType)arg7 displayOptInNotificationPromptBlock:(CDUnknownBlockType)arg8 onboardingDataCoordinator:(id)arg9 discoverFeedEventsController:(id)arg10 experimentManager:(id)arg11;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

