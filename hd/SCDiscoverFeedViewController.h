//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCognacNotificationHandling.h"
#import "SCDataCoordinatorListener.h"
#import "SCDeepLinkableView.h"
#import "SCDiscoverFeedActionHandlerDelegate.h"
#import "SCDiscoverFeedQueryCoordinatingDelegate.h"
#import "SCDynamicLayoutPresentAnimationControllerDelegate.h"
#import "SCDynamicLayoutViewControllerDelegate.h"
#import "SCEventListener.h"
#import "SCScrollToEndDetectorDelegate.h"
#import "SCSearchCardContainerContentViewControlling.h"
#import "SCSearchContentScrollViewProviding.h"
#import "SCSearchQueryResultControllerDelegate.h"
#import "SCShakeToReportDelegate.h"
#import "SCStoriesContentViewControlling.h"
#import "SCTraceEnabled.h"
#import "SCUpdateListener.h"
#import "SwipeView.h"
#import "UICollectionViewDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class CADisplayLink, NSDate, NSMutableDictionary, NSString, SCDiscoverFeedActionHandler, SCDiscoverFeedAdPrefetchAdaptor, SCDiscoverFeedDeeplinkHandler, SCDiscoverFeedManagementActionSheetActionHandler, SCDiscoverFeedOnboardingDataCoordinator, SCDiscoverFeedPaginationController, SCDiscoverFeedPerformanceLoggerAdaptor, SCDiscoverFeedPrefetchHandler, SCDiscoverFeedSectionHeaderActionHandler, SCDiscoverFeedSectionViewAllButtonStates, SCDiscoverFeedView, SCDiscoverFeedViewControllerLoggingAdaptor, SCDiscoverTooltipManager, SCDynamicLayoutTransitionProvider, SCDynamicLayoutViewController, SCEventListenerAnnouncer, SCGCDBlockTimer, SCLazy, SCNotificationOptInDataProvider, SCPreviewTooltipBalloon, SCScrollToEndDetector, SCSearchCardContainerContentViewControllerContext, SCSearchFriendProvider, SCSearchNetworkLogger, SCSearchQueryResultController, SCStoriesUnarchiver, SCUserSession, UIScrollView, UIViewController<SCPageNameLogging>;

@interface SCDiscoverFeedViewController : UIViewController <SCDynamicLayoutPresentAnimationControllerDelegate, UICollectionViewDelegate, SCSearchQueryResultControllerDelegate, SCScrollToEndDetectorDelegate, SCDiscoverFeedActionHandlerDelegate, SCTraceEnabled, SCShakeToReportDelegate, SCUpdateListener, SCDiscoverFeedQueryCoordinatingDelegate, UIViewControllerTransitioningDelegate, SCDataCoordinatorListener, SCEventListener, SCDynamicLayoutViewControllerDelegate, SwipeView, SCDeepLinkableView, SCSearchCardContainerContentViewControlling, SCSearchContentScrollViewProviding, SCStoriesContentViewControlling, SCCognacNotificationHandling>
{
    SCLazy *_discoverFeedQueryCoordinator;
    id <SCEventListener> _discoverFeedEventsListenerReAnnouncer;
    SCDiscoverFeedActionHandler *_actionHandler;
    SCDiscoverFeedSectionHeaderActionHandler *_sectionHeaderActionHandler;
    SCDiscoverFeedDeeplinkHandler *_deeplinkHandler;
    SCDiscoverFeedPaginationController *_paginationController;
    SCScrollToEndDetector *_scrollToBottomDetector;
    _Bool _userInteractionInitiatedReloadInProgress;
    NSDate *_showedMoreViewTimestamp;
    CDUnknownBlockType _triggerReorderAfterThreshold;
    SCSearchNetworkLogger *_networkLogger;
    double _yOffsetBeforeScrolling;
    struct CGPoint _lastScrollOffset;
    double _lastScrollOffsetCapturedTime;
    _Bool _isFirstViewDidFullyAppear;
    id <SCDiscoverFeedDebugInfoDataProviding> _debugInfoDataProvider;
    SCDiscoverFeedSectionViewAllButtonStates *_sectionViewAllButtonStates;
    NSMutableDictionary *_feedViewReadyLoggingDictionary;
    CADisplayLink *_displayLink;
    SCGCDBlockTimer *_viewAllButtonStateResetThresholdTimer;
    _Bool _isContentLoaded;
    SCDiscoverTooltipManager *_discoverTooltipManager;
    SCLazy *_interestSelectionDataCoordinatorLazy;
    _Bool _loadingPersonalizedRefresh;
    _Bool _didTapNotificationToEnter;
    _Bool _shouldDismissToFirstCell;
    SCDiscoverFeedPerformanceLoggerAdaptor *_performanceLoggerAdaptor;
    SCDiscoverFeedViewControllerLoggingAdaptor *_viewControllerLoggingAdaptor;
    SCDiscoverFeedAdPrefetchAdaptor *_adPrefetchAdapter;
    CDUnknownBlockType _friendStoryFetchCompletionHandler;
    SCGCDBlockTimer *_contentLongLoadingTimer;
    _Bool _hasSetupS2DFTime;
    double _lastPTRTime;
    _Bool _isVisible;
    _Bool _isPresenting;
    SCSearchCardContainerContentViewControllerContext *_cardContainerContext;
    id <SCHovaOverscrollDelegate> _hovaOverscrollDelegate;
    id <UIScrollViewDelegate> _scrollingDelegate;
    id <SCStoriesContentViewControllingDelegate> _storiesContentViewControllerDelegate;
    long long _discoverFeedPageEntryType;
    id <NavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    UIViewController<SCPageNameLogging> *_parentController;
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchQueryResultController *_queryResultController;
    SCLazy *_snapTokenProvider;
    SCLazy *_imageDownloader;
    SCLazy *_friendStoriesPlaybackDataProvider;
    SCLazy *_storiesLegacyPlaybackDataProvider;
    SCLazy *_storiesMediaCoordinator;
    SCLazy *_friendStoriesDataCoordinator;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_discoverFeedBadgeCoordinator;
    SCLazy *_discoverFeedBadgeReadyStateManager;
    SCLazy *_sectionExtensionServices;
    SCLazy *_friendStoriesReplayManager;
    SCLazy *_collapseManager;
    SCStoriesUnarchiver *_storiesUnarchiver;
    SCLazy *_storiesDataCoordinator;
    SCSearchFriendProvider *_friendProvider;
    SCDiscoverFeedPrefetchHandler *_discoverFeedPrefetchHandler;
    SCNotificationOptInDataProvider *_optInProvider;
    SCDiscoverFeedView *_cheetahStoriesView;
    SCDynamicLayoutViewController *_dynamicLayoutViewController;
    SCDiscoverFeedActionHandler *_showsPageActionHandler;
    SCDynamicLayoutTransitionProvider *_dynamicLayoutTransitionProvider;
    SCDiscoverFeedOnboardingDataCoordinator *_managementOnboardingDataCoordinator;
    SCDiscoverFeedManagementActionSheetActionHandler *_discoverFeedManagementActionSheetActionHandler;
    SCPreviewTooltipBalloon *_discoverFeedManagementTooltip;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCPreviewTooltipBalloon *discoverFeedManagementTooltip; // @synthesize discoverFeedManagementTooltip=_discoverFeedManagementTooltip;
@property(retain, nonatomic) SCDiscoverFeedManagementActionSheetActionHandler *discoverFeedManagementActionSheetActionHandler; // @synthesize discoverFeedManagementActionSheetActionHandler=_discoverFeedManagementActionSheetActionHandler;
@property(retain, nonatomic) SCDiscoverFeedOnboardingDataCoordinator *managementOnboardingDataCoordinator; // @synthesize managementOnboardingDataCoordinator=_managementOnboardingDataCoordinator;
@property(retain, nonatomic) SCDynamicLayoutTransitionProvider *dynamicLayoutTransitionProvider; // @synthesize dynamicLayoutTransitionProvider=_dynamicLayoutTransitionProvider;
@property(retain, nonatomic) SCDiscoverFeedActionHandler *showsPageActionHandler; // @synthesize showsPageActionHandler=_showsPageActionHandler;
@property(retain, nonatomic) SCDynamicLayoutViewController *dynamicLayoutViewController; // @synthesize dynamicLayoutViewController=_dynamicLayoutViewController;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(retain, nonatomic) SCDiscoverFeedView *cheetahStoriesView; // @synthesize cheetahStoriesView=_cheetahStoriesView;
@property(retain, nonatomic) SCNotificationOptInDataProvider *optInProvider; // @synthesize optInProvider=_optInProvider;
@property(retain, nonatomic) SCDiscoverFeedPrefetchHandler *discoverFeedPrefetchHandler; // @synthesize discoverFeedPrefetchHandler=_discoverFeedPrefetchHandler;
@property(retain, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(retain, nonatomic) SCLazy *storiesDataCoordinator; // @synthesize storiesDataCoordinator=_storiesDataCoordinator;
@property(retain, nonatomic) SCStoriesUnarchiver *storiesUnarchiver; // @synthesize storiesUnarchiver=_storiesUnarchiver;
@property(retain, nonatomic) SCLazy *collapseManager; // @synthesize collapseManager=_collapseManager;
@property(retain, nonatomic) SCLazy *friendStoriesReplayManager; // @synthesize friendStoriesReplayManager=_friendStoriesReplayManager;
@property(retain, nonatomic) SCLazy *sectionExtensionServices; // @synthesize sectionExtensionServices=_sectionExtensionServices;
@property(retain, nonatomic) SCLazy *discoverFeedBadgeReadyStateManager; // @synthesize discoverFeedBadgeReadyStateManager=_discoverFeedBadgeReadyStateManager;
@property(retain, nonatomic) SCLazy *discoverFeedBadgeCoordinator; // @synthesize discoverFeedBadgeCoordinator=_discoverFeedBadgeCoordinator;
@property(retain, nonatomic) SCLazy *discoverFeedDataCoordinator; // @synthesize discoverFeedDataCoordinator=_discoverFeedDataCoordinator;
@property(retain, nonatomic) SCLazy *friendStoriesDataCoordinator; // @synthesize friendStoriesDataCoordinator=_friendStoriesDataCoordinator;
@property(retain, nonatomic) SCLazy *storiesMediaCoordinator; // @synthesize storiesMediaCoordinator=_storiesMediaCoordinator;
@property(retain, nonatomic) SCLazy *storiesLegacyPlaybackDataProvider; // @synthesize storiesLegacyPlaybackDataProvider=_storiesLegacyPlaybackDataProvider;
@property(retain, nonatomic) SCLazy *friendStoriesPlaybackDataProvider; // @synthesize friendStoriesPlaybackDataProvider=_friendStoriesPlaybackDataProvider;
@property(retain, nonatomic) SCLazy *imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(retain, nonatomic) SCLazy *snapTokenProvider; // @synthesize snapTokenProvider=_snapTokenProvider;
@property(retain, nonatomic) SCSearchQueryResultController *queryResultController; // @synthesize queryResultController=_queryResultController;
@property(retain, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak UIViewController<SCPageNameLogging> *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) long long discoverFeedPageEntryType; // @synthesize discoverFeedPageEntryType=_discoverFeedPageEntryType;
@property(nonatomic) __weak id <SCStoriesContentViewControllingDelegate> storiesContentViewControllerDelegate; // @synthesize storiesContentViewControllerDelegate=_storiesContentViewControllerDelegate;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollingDelegate; // @synthesize scrollingDelegate=_scrollingDelegate;
@property(nonatomic) __weak id <SCHovaOverscrollDelegate> hovaOverscrollDelegate; // @synthesize hovaOverscrollDelegate=_hovaOverscrollDelegate;
@property(retain, nonatomic) SCSearchCardContainerContentViewControllerContext *cardContainerContext; // @synthesize cardContainerContext=_cardContainerContext;
- (void).cxx_destruct;
- (void)_displayBadgeIfPossible:(id)arg1;
- (void)_scheduleDisplayBadge:(id)arg1;
- (void)_handleFetchedBadges:(id)arg1;
- (void)_fetchBadgeIfNecessaryWithSessionId:(id)arg1;
- (void)_prefetchPivotSwipePageIfNecessary:(id)arg1;
- (void)_hideTooltip;
- (void)_showTooltip;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (id)activeCognacAppSessionId;
- (id)_currentSections;
- (void)_scrollToStory:(id)arg1;
- (void)_resetCarouselSectionsOffset;
- (void)_sendActionModelToActionHandler:(id)arg1 fromSourceView:(id)arg2;
- (void)_handleStoryLookupSuccessResponseWithStory:(id)arg1 feedType:(int)arg2 sectionKey:(id)arg3 identifier:(id)arg4 notificationId:(id)arg5;
- (void)_lookupStory:(id)arg1 feedType:(int)arg2 sectionKey:(id)arg3 identifier:(id)arg4 cheetahStory:(id)arg5;
- (void)_handleDiscoverFeedStoryNotificationPressed:(id)arg1;
- (void)_updateChunkLoaderPrefetchedSnaps:(id)arg1;
- (void)_checkAvailableFriendStoryAndPlay:(id)arg1;
- (void)_handleDiscoverFeedFriendStoryNotificationPressed:(id)arg1;
- (void)handleNotificationPressed:(id)arg1;
- (void)_updateItemLoadedStatus;
- (void)_updateOnboardingEntryPointViewWithSubmissionStatus:(unsigned long long)arg1;
- (void)_refreshWithPersonalizedFeed;
- (void)_refreshWithPersonalizedFeed:(_Bool)arg1 isPullToRefresh:(_Bool)arg2;
- (void)_refreshIfNecessaryWithPersonalizedFeed:(_Bool)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_prefetchFirstSnapMediaForVisibleCheetahStoriesIfNeccesary;
- (void)_resumeAllVideoPlaybackIfNeccesary;
- (void)_pauseAllVideoPlaybackIfNeccesary;
- (id)defaultProjectNameV2;
@property(readonly, nonatomic) UIScrollView *contentScrollView;
- (void)_startPageView;
- (void)_handleDidStartToDisplayStoryWithIndexPath:(id)arg1;
- (void)storiesActionHandler:(id)arg1 willPlayStory:(id)arg2 currentFriendUserName:(id)arg3;
- (void)viewDidAppearWithDeepLinkInfo:(id)arg1;
- (void)_didTapPageLevelDebugButton;
- (void)resetViewAllButtonStates;
- (void)_setupViewAllButtonStatesThresholdTimer;
- (void)_clearViewAllButtonStatesThresholdTimer;
- (void)_performUpdatesForReOrder;
- (void)_setNoReOrderThresholdTimer;
- (void)_clearHovaStoryBadge;
- (void)_stopPullToRefresh;
- (void)_didFinishLoading;
- (void)_fetchHeadStories;
- (void)_fetchFreshStoriesIfNeeded;
- (void)_fetchStoriesForAllSectionsWithQuerySource:(id)arg1;
- (void)_reorderForPTRThreshold;
- (_Bool)_shouldDisablePullToRefresh;
- (void)scrollToTopWithAnimation:(_Bool)arg1;
- (void)_resetScrollStateWithAnimationIfNeededWithQuerySource:(id)arg1;
- (void)_handleScrollViewDidScrollWithScrollView:(id)arg1;
- (void)_viewReadyForQuerySource:(id)arg1 contentReadyType:(long long)arg2;
- (id)_resultContentReadyType;
- (void)_announceSectionOrder;
- (void)_handleIsVisibleIfNecessary;
- (void)_didTearDownStory;
- (void)_didDismissStory;
- (void)_didBeginToDismissStoryWithIndexPath:(id)arg1 actionHandler:(id)arg2;
- (void)_didStartToDisplayStoryWithIndexPath:(id)arg1 actionHandler:(id)arg2;
- (void)_fetchInterestSubmissionStateForOnboardingDataCoordinator:(id)arg1;
- (void)_logInfiniteLoadingEventIfNecessary;
- (void)_startContentLongLoadingTimer;
- (void)_invalidateContentLongLoadingTimer;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)searchQueryResultControllerDidSkipUpdateQueryResult:(id)arg1;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (_Bool)searchQueryResultControllerShouldReloadFreshResult:(id)arg1;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (void)discoverQueryCoordinator:(id)arg1 didReceiveServerResponseForQuery:(id)arg2;
- (void)discoverQueryCoordinator:(id)arg1 didFailForQuery:(id)arg2 error:(id)arg3 statusCodeToDisplay:(id)arg4;
- (void)scrollToEndDetector:(id)arg1 scrollViewWillReachEnd:(id)arg2;
- (void)didDismissDynamicLayoutViewController;
- (void)_updatePreferredScreenEdgesDeferringSystemGestures;
- (void)statusBarTapped;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)navigationBarButtonItems;
@property(readonly, nonatomic) _Bool isViewingStory;
- (_Bool)isLoading;
- (void)_refreshByPullToRefresh;
- (void)refreshByPullToRefresh;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)removeOldExtensionFileForCurrentUser;
- (void)_applicationDidEnterBackground;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)tabBarTriggeredWithAction:(long long)arg1;
- (void)viewDidFullyDisappear;
- (void)viewDidSwipeOut;
- (void)viewDidSwipeIn;
- (void)viewDidPartiallyDisappear;
- (void)_emitFriendStoriesListViewImpressionMetricsIfNecessary;
- (void)viewDidFullyAppear;
- (void)viewDidPartiallyAppear;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 storiesDataCoordinator:(id)arg4 friendStoriesPlaybackDataProvider:(id)arg5 storiesMediaCoordinator:(id)arg6 storiesLegacyPlaybackDataProvider:(id)arg7 storiesUnarchiver:(id)arg8 friendStoriesDataCoordinator:(id)arg9 discoverFeedDataCoordinator:(id)arg10 discoverFeedBadgeCoordinator:(id)arg11 discoverFeedBadgeReadyStateManager:(id)arg12 friendStoriesReplayManager:(id)arg13 sectionExtensionServices:(id)arg14 discoverFeedPrefetchHandler:(id)arg15 discoverFeedQueryCoordinator:(id)arg16 imageDownloader:(id)arg17 collapseManager:(id)arg18 discoverFeedEventsAnnouncer:(id)arg19 optInProvider:(id)arg20;
- (id)eventsConfiguration;
- (id)_impressionViewItemWithIdentifier:(id)arg1 frame:(struct CGRect)arg2 date:(id)arg3 itemPos:(long long)arg4 hasVideoThumbnail:(_Bool)arg5 tileAutoPlayed:(_Bool)arg6 sectionIdentifier:(id)arg7 hasReplayOverlay:(_Bool)arg8 storyLoggingInfo:(id)arg9;
- (id)_updateImpressItemForCollectionViewCell:(id)arg1 frame:(struct CGRect)arg2 indexPath:(id)arg3 itemPos:(long long)arg4 storyTileWithVideoConfigurable:(id)arg5 date:(id)arg6;
- (void)updateImpressionItems;
- (void)_presentPublicUserProfile:(id)arg1 businessProfile:(id)arg2 isSubscribed:(_Bool)arg3 isOptedInNotifications:(_Bool)arg4 isHidden:(_Bool)arg5 presentingViewController:(id)arg6;
- (id)_impalaPublisherProfileActionHandlerWithPresentingViewController:(id)arg1;
- (id)_impalaShowProfileActionHandlerWithPresentingViewController:(id)arg1;
- (id)_playStoryActionHandlerWithPresentingViewController:(id)arg1;
- (void)_initDiscoverFeedManagementActionSheetActionHandlerAndPresent:(_Bool)arg1;
- (void)removeDiscoverFeedManagementTooltip;
- (void)didTapDiscoverFeedManagementButton;
- (id)toolTipForDiscoverFeedManagement;
- (void)didSwipeToShowsPage;
- (void)setupShowsPageIfNecessary;
- (void)cancelDynamicLayoutPresentation;
- (void)finishDynamicLayoutPresentation;
- (void)initiateDynamicLayoutPresentationFromSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

