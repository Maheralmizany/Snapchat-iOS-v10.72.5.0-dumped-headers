//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacNotificationHandling.h"
#import "SCContextOperaPlaylistPluginDelegate.h"
#import "SCDiscoverFeedActionHandling.h"
#import "SCDiscoverFeedDebugViewControllerDelegate.h"
#import "SCDiscoverFeedMomentStoryActionHandlerDelegate.h"
#import "SCDiscoverFeedUnifiedProfileActionHandlerDelegate.h"
#import "SCEventAnnouncing.h"
#import "SCEventListener.h"
#import "SCMapViewControllerDelegate.h"
#import "SCMiniProfileViewControllerDelegate.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate.h"
#import "SCOperaPresenterDelegate.h"
#import "SCSearchMomentsOperaPresenterDelegate.h"
#import "SCSearchStoriesPresenterDelegate.h"
#import "SCUpdateListener.h"

@class NSArray, NSMutableSet, NSString, SCDiscoverFeedCognacActionHandler, SCDiscoverFeedFriendStoriesReplayManager, SCDiscoverFeedLegacyStoriesPlaybackDataProvider, SCDiscoverFeedMiniProfileHandler, SCDiscoverFeedMomentStoryActionHandler, SCDiscoverFeedOperaSession, SCDiscoverFeedPrefetchHandler, SCDiscoverFeedSectionCollapseCoordinatingManager, SCDiscoverFeedSectionViewAllButtonStates, SCDiscoverFeedUnifiedProfileActionHandler, SCDynamicLayoutActionHandler, SCEventListenerAnnouncer, SCFriendsFeedOpenMiniProfileActionHandler, SCHideSuggestionUnitActionHandler, SCImpalaDiscoverShowProfileActionHandler, SCImpalaPublisherProfileActionHandler, SCLazy, SCMomentsOperaPresenter, SCNotificationOptInDataProvider, SCOpenAddFriendsActionHandler, SCOpenAddFriendsPageActionHandler, SCOpenUnifiedProfileActionHandler, SCOperaPlaylistAdPlugin, SCOperaPlaylistCameraPlugin, SCOperaPlaylistCommercePlugin, SCOperaPlaylistEditionsPlugin, SCOperaPlaylistFeaturePlugin<SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera>, SCOperaPlaylistNotificationOptInPlugin, SCOperaPresenter, SCSearchFriendProvider, SCSearchStoriesPresenter, SCSnapchattersActionHandler, SCStoriesUnarchiver, SCUserSession, UIViewController, UIViewController<SCPageNameLogging>;

@interface SCDiscoverFeedActionHandler : NSObject <SCMapViewControllerDelegate, SCSearchStoriesPresenterDelegate, SCOperaPresenterDelegate, SCDiscoverFeedDebugViewControllerDelegate, SCSearchMomentsOperaPresenterDelegate, SCContextOperaPlaylistPluginDelegate, SCUpdateListener, SCMiniProfileViewControllerDelegate, SCDiscoverFeedMomentStoryActionHandlerDelegate, SCOpenUnifiedProfileActionHandlerDelegate, SCDiscoverFeedUnifiedProfileActionHandlerDelegate, SCDiscoverFeedActionHandling, SCEventAnnouncing, SCEventListener, SCCognacNotificationHandling>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCSearchStoriesPresenter *_storyPresenter;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchFriendProvider *_friendProvider;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    SCDiscoverFeedUnifiedProfileActionHandler *_unifiedProfileHandler;
    SCDiscoverFeedCognacActionHandler *_cognacActionHandler;
    SCDynamicLayoutActionHandler *_dynamicLayoutActionHandler;
    SCOpenAddFriendsActionHandler *_openAddFriendsActionHanlder;
    SCFriendsFeedOpenMiniProfileActionHandler *_openMiniProfileActionHanlder;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
    SCHideSuggestionUnitActionHandler *_hideSuggestionUnitActionHandler;
    SCDiscoverFeedMomentStoryActionHandler *_momentStoryActionHandler;
    SCImpalaDiscoverShowProfileActionHandler *_impalaShowProfileActionHandler;
    SCImpalaPublisherProfileActionHandler *_impalaPublisherProfileActionHandler;
    SCOpenAddFriendsPageActionHandler *_openAddFriendsPageActionHandler;
    SCOperaPresenter *_operaPresenter;
    NSString *_previousOperaPresenterState;
    SCMomentsOperaPresenter *_momentsOperaPresenter;
    SCOperaPlaylistFeaturePlugin<SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera> *_storiesPlugin;
    SCOperaPlaylistEditionsPlugin *_editionsPlugin;
    SCOperaPlaylistCommercePlugin *_commercePlugin;
    SCOperaPlaylistCameraPlugin *_cameraPlugin;
    SCOperaPlaylistNotificationOptInPlugin *_notificationOptInPlugin;
    UIViewController *_presentedViewController;
    SCOperaPlaylistAdPlugin *_adPlugin;
    SCDiscoverFeedFriendStoriesReplayManager *_friendStoriesReplayManager;
    SCLazy *_friendStoriesPlaybackDataProvider;
    SCLazy *_legacyStoriesPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_discoverFeedBadgeCoordinator;
    SCStoriesUnarchiver *_storiesUnarchiver;
    SCDiscoverFeedPrefetchHandler *_discoverFeedPrefetchHandler;
    SCSnapchattersActionHandler *_addFriendsSnapchatterActionHandler;
    SCNotificationOptInDataProvider *_optInDataProvider;
    id <SCDiscoverFeedDebugInfoDataProviding> _debugInfoDataProvider;
    NSArray *_rankedFriendStoriesUserNames;
    NSMutableSet *_recommendedDedupeFp;
    SCDiscoverFeedSectionViewAllButtonStates *_sectionViewAllButtonStates;
    SCDiscoverFeedOperaSession *_discoverFeedOperaSession;
    SCDiscoverFeedSectionCollapseCoordinatingManager *_collapseManager;
    _Bool _isOperaPresenterAnimating;
    long long _pageType;
    SCDiscoverFeedLegacyStoriesPlaybackDataProvider *_discoverFeedLegacyStoriesPlaybackDataProvider;
    UIViewController<SCPageNameLogging> *_presentingViewController;
    id <SCDiscoverFeedStoryPositionProviding> _storyPositionProvider;
    id <SCDiscoverFeedOperaViewingHandling> _operaViewingHandler;
    id <SCDiscoverFeedActionHandlerDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCDiscoverFeedActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SCDiscoverFeedOperaViewingHandling> operaViewingHandler; // @synthesize operaViewingHandler=_operaViewingHandler;
@property(retain, nonatomic) id <SCDiscoverFeedStoryPositionProviding> storyPositionProvider; // @synthesize storyPositionProvider=_storyPositionProvider;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)didTapToPlayStory:(id)arg1 sectionKey:(id)arg2 baseView:(id)arg3;
- (void)_navigateToChatWithUsername:(id)arg1 deepLinkURL:(id)arg2;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToCameraWithGroupIdFromGroupActionSheet:(id)arg2;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToCameraWithSnapchatterFromFriendActionSheet:(id)arg2;
- (void)_postToMyStory;
- (void)showCameraForUsername:(id)arg1 displayName:(id)arg2 pageSource:(long long)arg3 context:(id)arg4 replyType:(long long)arg5 isMischief:(_Bool)arg6 cellViewPosition:(long long)arg7;
- (void)miniProfileViewControllerDidPressSnapButton:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (id)activeCognacAppSessionId;
- (void)contextWillDismiss:(id)arg1;
- (void)contextWillPresent:(id)arg1;
- (void)mapViewController:(id)arg1 wantsDismissalToDestination:(long long)arg2;
- (void)searchMomentsOperaPresenterDidDismissStory:(id)arg1;
- (id)momentStoryHandler:(id)arg1 willPresentMomentsStoryWithOperaPresenter:(id)arg2 sectionKey:(id)arg3;
- (void)momentStoryHandler:(id)arg1 willPresentStoryWithOperaPresenter:(id)arg2;
- (void)_updateReplayStateWithGroupModel:(id)arg1;
- (void)_fileGrapheneEventWith:(id)arg1;
- (void)_discoverFeedDataCoordinatorUpdatePlaybackSequence:(id)arg1 updatedSnapPlaybackInfos:(id)arg2 updatedPublisherPlaybackInfos:(id)arg3;
- (void)_updateDiscoverFeedStoryIntoDataStoreDiscoverFeedStoryBuilder:(id)arg1 loggingInfoBuilder:(id)arg2;
- (void)_updatePublisherStoryWithPublisherPlaybackInfo:(id)arg1 discoverEdition:(id)arg2 discoverFeedStory:(id)arg3 dataStoreDiscoverFeedStory:(id)arg4 publisherStory:(id)arg5 watchedState:(id)arg6 watchedStateError:(id)arg7 chunkIdToChunkDictionary:(id)arg8;
- (void)_updatePublisherStoryWithEdition:(id)arg1 discoverFeedStory:(id)arg2 dataStoreDiscoverFeedStory:(id)arg3 publisherStory:(id)arg4 watchedState:(id)arg5 watchedStateError:(id)arg6;
- (void)_updatePublisherStoryTileWithGroupModel:(id)arg1;
- (void)_updateSnapPlaybackInfoViewStateWithGroupModel:(id)arg1;
- (void)_fetchShowWatchedStateIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideAfterWatch:(id)arg1;
- (id)_calculateCollectionViewIndexPathWithOperaSession;
- (void)_updateDiscoverFeedOperaSessionWithLastPlayedDataModel:(id)arg1;
- (void)_operaPresenterFinishTeardown;
- (void)_handleStartToPlayFriendStoryWithStoryId:(id)arg1 firstInList:(_Bool)arg2 hasUnviewedSnaps:(_Bool)arg3;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (_Bool)isCustomPresentationForSearchStoriesPresenter:(id)arg1;
- (void)searchStoryPresenterDidFinishDismissingStory:(id)arg1;
- (id)presentingViewControllerForSearchStoriesPresenter:(id)arg1;
- (void)discoverFeedDebugViewControllerNeedsToDismiss:(id)arg1 animated:(_Bool)arg2;
- (void)_announceExpandStoriesForSection:(id)arg1;
- (void)_logExpandSectionForSection:(id)arg1;
- (void)_presentDebugViewControllerForStoryId:(id)arg1 debugHtml:(id)arg2;
- (void)_announceFriendsSectionActionWithActionIdentifier:(id)arg1 loggingInfo:(id)arg2 itemSource:(long long)arg3;
- (void)_announceFriendsSectionActionWithActionIdentifier:(id)arg1 loggingInfo:(id)arg2;
- (void)_announceActionWithIdentifier:(id)arg1 cheetahStory:(id)arg2 sectionKey:(id)arg3 interactionContext:(long long)arg4;
- (void)_presentProfileForSnapchatter:(id)arg1;
- (void)_presentMiniprofileForUsername:(id)arg1;
- (void)_startChatWithUsername:(id)arg1;
- (id)_allStoriesToDisplayWithInitialStory:(id)arg1 sectionKey:(id)arg2;
- (void)_dismissOperaPresenter;
- (void)_playNonMomentsCheetahNotificationStory:(id)arg1 withBaseView:(id)arg2 storyLoggingPlugin:(id)arg3 feedType:(id)arg4;
- (void)_playNotificationCheetahStory:(id)arg1 withBaseView:(id)arg2 feedType:(id)arg3 isInApp:(_Bool)arg4 notificationId:(id)arg5;
- (void)_playFriendStoryWithFirstStory:(id)arg1 rankedFriendSummaryData:(id)arg2 actionModel:(id)arg3 baseView:(id)arg4;
- (void)_playFriendStoryForActionModel:(id)arg1 withBaseView:(id)arg2;
- (void)_presentViewingSessionWithDataModels:(id)arg1 firstDisplayGroupDataModel:(id)arg2 playlistPlugins:(id)arg3 baseView:(id)arg4 animationStyle:(unsigned long long)arg5 updateTransitionMode:(_Bool)arg6;
- (void)_playCheetahStoriesWithBaseView:(id)arg1 initialCheetahStory:(id)arg2 sectionKey:(id)arg3 interactionContext:(long long)arg4;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_presentDebugViewController:(id)arg1;
- (void)_generateAndPresentDebugViewControllerWithDebugInfo:(id)arg1 feedType:(unsigned long long)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)resumePlayback;
- (void)pausePlayback;
- (double)timeBeforeReturningToCamera;
- (void)cancelStoryAndContentPresentation;
- (_Bool)isPresentingStoryOrContent;
- (_Bool)isPresentingStory;
- (void)updateDismissBaseView:(id)arg1;
- (id)initWithUserSession:(id)arg1 friendProvider:(id)arg2 friendStoriesReplayManager:(id)arg3 navigationDelegate:(id)arg4 startChatDelegate:(id)arg5 friendStoriesPlaybackDataProvider:(id)arg6 legacyStoriesPlaybackDataProvider:(id)arg7 storiesMediaCoordinator:(id)arg8 storiesUnarchiver:(id)arg9 discoverFeedDataCoordinator:(id)arg10 discoverFeedBadgeCoordinator:(id)arg11 sectionViewAllButtonStates:(id)arg12 collapseManager:(id)arg13 storyPositionProvider:(id)arg14 operaViewingHandler:(id)arg15 discoverFeedPrefetchHandler:(id)arg16 optInDataProvider:(id)arg17 pageType:(long long)arg18;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
