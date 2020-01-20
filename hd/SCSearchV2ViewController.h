//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCognacNotificationHandling.h"
#import "SCComposerViewOwner.h"
#import "SCImpalaShowProfilePresenterDelegate.h"
#import "SCPageNameLogging.h"
#import "SCSearchV2SearchViewActionHandler.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, SCComposerPeopleBlockedUserStore, SCComposerPeopleFriendStore, SCComposerPeopleFriendmojiRenderer, SCComposerPeopleSuggestedFriendStore, SCComposerStoriesStorySummaryInfoStore, SCExperimentManager, SCImpalaShowProfilePresenter, SCLazy, SCSearchV2Context, SCSearchV2SearchView, UIView, UIVisualEffectView;

@interface SCSearchV2ViewController : UIViewController <SCComposerViewOwner, SCSearchV2SearchViewActionHandler, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, SCImpalaShowProfilePresenterDelegate, SCCognacNotificationHandling, SCPageNameLogging>
{
    SCSearchV2SearchView *_searchView;
    UIVisualEffectView *_blurView;
    id <SCSearchV2ChatPresenting> _chatPresenter;
    id <SCSearchV2ProfilePresenting> _profilePresenter;
    id <SCSearchV2StoryPresenting> _storyPresenter;
    id <SCSearchV2CommercePresenting> _commercePresenter;
    id <SCSearchV2CognacPresenting><SCCognacNotificationHandling> _cognacPresenter;
    SCImpalaShowProfilePresenter *_impalaProfilePresenter;
    id <SCSearchV2ActionSheetPresenting> _actionSheetPresenter;
    id <SCCCameraPresenting> _cameraPresenter;
    id <SCCMapPresenting> _mapPresenter;
    SCLazy *_groupsDataFetcher;
    SCLazy *_groupsDataTracker;
    SCLazy *_snapchattersDataFetcher;
    id <SCSearchV2UserInfoProviding> _userInfoProvider;
    id <SCSearchV2CognacTokenProviding> _cognacTokenProvider;
    id <SCSearchV2RecentChatInteractionStoring> _recentChatInteractionStore;
    id <SCCFriendsFeedStatusHandlerProviding> _friendsFeedStatusHandlerProvider;
    SCComposerPeopleFriendStore *_friendStore;
    SCComposerPeopleSuggestedFriendStore *_suggestedFriendStore;
    SCComposerPeopleBlockedUserStore *_blockedUserStore;
    SCComposerPeopleFriendmojiRenderer *_friendmojiRenderer;
    SCComposerStoriesStorySummaryInfoStore *_storySummaryInfoStore;
    id <SCCSubscriptionStore> _subscriptionStore;
    id <SCCLensActionHandling> _lensActionHandler;
    id <SCSearchV2BusinessProfilePresenting> _businessProfilePresenter;
    id <SCSearchV2PublisherProfileProviding> _publisherProfileProvider;
    id <SCSearchV2ShowProfileProviding> _showProfileProvider;
    id <SCImageDownloading> _imageDownloader;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCCStoryPlayerPlaying> _storyPlayer;
    id <SCCStoryPlayerNativeUserStoryFetching> _nativeUserStoryFetcher;
    id <SCCStoryPlayerStorySnapViewStateProviding> _storySnapViewStateProvider;
    SCSearchV2Context *_componentContext;
    SCExperimentManager *_experimentManager;
    long long _metricsContext;
    id <SCSearchV2StudyInfoProviding> _studyInfoProvider;
    UIView *_originSearchBarView;
    id <SCSearchV2ViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchV2ViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *originSearchBarView; // @synthesize originSearchBarView=_originSearchBarView;
- (void).cxx_destruct;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (id)activeCognacAppSessionId;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
- (void)openGame:(id)arg1;
- (void)openStore:(id)arg1;
- (void)openShowProfile:(id)arg1;
- (void)openPublisherProfile:(id)arg1;
- (void)openBusinessProfile:(id)arg1;
- (void)playGroupStory:(id)arg1;
- (void)openGroupProfile:(id)arg1;
- (void)openUserProfile:(id)arg1;
- (void)openGroupChat:(id)arg1;
- (void)openChat:(id)arg1;
- (void)dismiss:(id)arg1;
- (id)composerWillCreateViewForClass:(Class)arg1 nodeId:(id)arg2;
- (id)pageViewName;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataMutator:(id)arg2 snapchattersDataTracker:(id)arg3 blockedSnapchatterFetcher:(id)arg4 groupsDataFetcher:(id)arg5 groupsDataTracker:(id)arg6 friendmojiPresenter:(id)arg7 storiesDataCoordinator:(id)arg8 userInfoProvider:(id)arg9 businessProfilePresenter:(id)arg10 publisherProfileProvider:(id)arg11 showProfileProvider:(id)arg12 storyPresenter:(id)arg13 chatPresenter:(id)arg14 profilePresenter:(id)arg15 actionSheetPresenter:(id)arg16 cameraPresenter:(id)arg17 commercePresenter:(id)arg18 cognacPresenter:(id)arg19 cognacTokenProvider:(id)arg20 imageDownloader:(id)arg21 lensActionHandler:(id)arg22 networkingClient:(id)arg23 storyPlayer:(id)arg24 mapPresenter:(id)arg25 recentChatInteractionStore:(id)arg26 nativeUserStoryFetcher:(id)arg27 friendsFeedStatusHandlerProvider:(id)arg28 experimentManager:(id)arg29 subscriptionStore:(id)arg30 metricsContext:(long long)arg31 studyInfoProvider:(id)arg32 storySnapViewStateProvider:(id)arg33;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
