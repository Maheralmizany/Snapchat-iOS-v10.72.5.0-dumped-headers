//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryPageViewController.h"

#import "SCCloudSyncStatusListener.h"
#import "SCGalleryHeaderBarDelegate.h"
#import "SCGalleryInformationWebViewControllerDelegate.h"
#import "SCGalleryOnboardingViewControllerDelegate.h"
#import "SCGallerySelectionControllerDataSource.h"
#import "SCGallerySelectionControllerDelegate.h"
#import "SCGallerySnapchatAlbumViewControllerDelegate.h"
#import "SCGalleryTabsControllerDelegate.h"
#import "SCLagunaAppStatusListener.h"
#import "SCMergedGalleryDataSourceListener.h"
#import "SCPageNameLogging.h"
#import "SCSearchResultsViewControllerDelegate.h"
#import "SCShakeToReportDelegate.h"
#import "SCSpectaclesPairingDelegate.h"
#import "SCTraceEnabled.h"
#import "UINavigationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSDate, NSString, SCGalleryCacheStatsDebugController, SCGalleryEntryStoryThumbnailUpdateTimer, SCGalleryHeaderBar, SCGalleryIndexStatusDebugController, SCGalleryInformationWebViewController, SCGalleryOnboardingViewController, SCGalleryReturnButtonControl, SCGallerySelectionController, SCGallerySnapchatAlbumViewController, SCGalleryTabsController, SCUserSession, UIView;

@interface SCGalleryViewController : SCGalleryPageViewController <SCLagunaAppStatusListener, SCSpectaclesPairingDelegate, SCMergedGalleryDataSourceListener, SCGalleryHeaderBarDelegate, SCGalleryTabsControllerDelegate, SCGalleryOnboardingViewControllerDelegate, SCGalleryInformationWebViewControllerDelegate, SCCloudSyncStatusListener, SCGallerySnapchatAlbumViewControllerDelegate, SCTraceEnabled, SCSearchResultsViewControllerDelegate, SCShakeToReportDelegate, SCGallerySelectionControllerDataSource, SCGallerySelectionControllerDelegate, SCPageNameLogging, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    SCGalleryTabsController *_tabsController;
    SCGalleryHeaderBar *_headerBar;
    SCUserSession *_userSession;
    SCGallerySelectionController *_selectionController;
    SCGalleryOnboardingViewController *_onboardingViewController;
    SCGalleryInformationWebViewController *_informationViewController;
    SCGallerySnapchatAlbumViewController *_snapchatAlbumViewController;
    id <SCServiceObserveContext> _cloudSyncObserveContext;
    id <SCKeyServiceRequest> _makePrivateRequest;
    _Bool _viewDidAppearOnce;
    NSDate *_dismissedTimestamp;
    UIView *_contentView;
    UIView *_tabsCollectionMaskView;
    SCGalleryCacheStatsDebugController *_cacheStatsDebugController;
    SCGalleryIndexStatusDebugController *_indexStatsDebugController;
    _Bool _isShowingLowDiskAlert;
    unsigned long long _userMemoriesEntriesCount;
    double _memoriesAllTabStartLoadingTime;
    SCGalleryEntryStoryThumbnailUpdateTimer *_entryStoryThumbnailUpdateTimer;
    _Bool _hasPublicStories;
    id <SCGalleryViewControllerDelegate> _delegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCGalleryReturnButtonControl *_galleryReturnButtonControl;
}

+ (id)pageName;
@property(readonly, nonatomic) _Bool hasPublicStories; // @synthesize hasPublicStories=_hasPublicStories;
@property(retain, nonatomic) SCGalleryReturnButtonControl *galleryReturnButtonControl; // @synthesize galleryReturnButtonControl=_galleryReturnButtonControl;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate; // @synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate;
@property(nonatomic) __weak id <SCGalleryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectionController:(id)arg1 shouldScrollToGalleryEntry:(id)arg2;
- (void)selectionControllerDidExitSelectionMode:(id)arg1;
- (void)selectionControllerDidEnterSelectionMode:(id)arg1;
- (id)selectedGallerySnaps;
- (id)selectedGalleryItems;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (id)sc_swipeTransitionBlurEffect;
- (id)sc_swipeTransitionGradientColors;
- (_Bool)isFocused;
- (_Bool)lagunaTabVisible;
- (void)_smartlyScrollToRelevantTab;
- (void)scrollToFeaturedTab;
- (unsigned long long)_tabTypeForFeaturedTab;
- (void)scrollToLagunaTab;
- (unsigned long long)_tabTypeForSpectaclesTab;
- (void)_alertAndExitMemoriesOnOutOfDiskSpaceIfNeeded;
- (void)_dismissOnboardingViewController;
- (void)_presentOnboardingViewController;
- (void)_showEligibleOnboarding;
- (id)defaultProjectNameV2;
- (void)searchResultsViewController:(id)arg1 didOverscrollWithOffset:(double)arg2;
- (void)searchResultsViewController:(id)arg1 didCancelWithDismissActionType:(long long)arg2;
- (void)_showSearchView:(id)arg1 animated:(_Bool)arg2;
- (void)_showNewUserAutoSaveStoriesAlertViewIfNeeded;
- (void)_handleTripleTap:(id)arg1;
- (void)_presentInformationViewControllerWithURLString:(id)arg1;
- (void)_resetViewPort;
- (void)_scrollToTopAnimated:(_Bool)arg1;
- (void)_dismissSendViewControllerIfPresented;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_applicationWillEnterBackground:(id)arg1;
- (_Bool)_shouldReinstallGalleryCoreData;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)galleryInformationWebViewControllerDidPressBack:(id)arg1;
- (void)galleryOnboardingViewControllerDidPressUrl:(id)arg1;
- (void)galleryOnboardingViewControllerDidPressStart:(id)arg1;
- (void)galleryOnboardingViewControllerDidPressBack:(id)arg1;
- (void)galleryTabsControllerDidDismissOpera:(id)arg1;
- (void)galleryTabsControllerDidPresentOpera:(id)arg1;
- (void)galleryTabsControllerDidEndEditing:(id)arg1;
- (void)galleryTabsControllerDidBeginEditing:(id)arg1;
- (void)galleryTabsControllerDidChangeSelectedGalleryItems:(id)arg1;
- (void)galleryTabsController:(id)arg1 didChangeFocusedTabSelectableContentCount:(unsigned long long)arg2;
- (void)galleryTabsControllerWillChangeFocusedTab:(id)arg1 withSelectableContentCount:(unsigned long long)arg2;
- (void)galleryTabsController:(id)arg1 requestsAddToStorySelectModeForItem:(id)arg2;
- (void)galleryTabsController:(id)arg1 requestsSelectMode:(_Bool)arg2;
- (void)SCGallerySnapchatAlbumViewControllerDidPressBack:(id)arg1;
- (void)galleryHeaderBarDidPressDismissButton:(id)arg1;
- (_Bool)galleryHasPublicStories:(id)arg1;
- (id)containerViewForTooltipsInGalleryHeaderBar:(id)arg1;
- (void)galleryHeaderBarDidPressSpectaclesButton:(id)arg1;
- (void)galleryHeaderBarDidPressSelectBackButton:(id)arg1;
- (void)galleryHeaderBarDidPressSelectButton:(id)arg1;
- (void)galleryHeaderBarDidPressQuestionButton:(id)arg1;
- (void)galleryHeaderBarDidPressSearchButton:(id)arg1 searchView:(id)arg2;
- (void)galleryHeaderBarDidPressProfileButton:(id)arg1;
- (void)_updateHeaderBarVisibility:(double)arg1;
- (void)_willEnterForeground;
- (void)viewDidDisappearFromViewController:(id)arg1;
- (void)viewWillDisappearFromViewController:(id)arg1;
- (void)viewDidAppearFromViewController:(id)arg1;
- (void)viewWillAppearFromViewController:(id)arg1;
- (void)_updateAvailableEntries:(id)arg1 failedEntries:(id)arg2;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)cloudSync:(id)arg1 didChangeProgress:(float)arg2;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)_initialCloudSyncCompleted;
- (void)_updateTabsCollectionMask;
- (void)_updateSyncStatus;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)statusBarTapped;
- (_Bool)shouldDisplayStatusBar;
- (void)viewDidLayoutSubviews;
- (id)pageViewName;
- (void)viewDidLoad;
- (void)loadView;
- (void)_applicationWillChangeStatusBarFrame;
- (void)_updateViewHeight;
- (id)initWithUserSession:(id)arg1;
- (void)statusCoordinatorNeedsToPair:(id)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(id)arg1;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)showMemoriesWithSpectaclesPairingSessionInfo:(id)arg1;
- (void)warmupSpectaclesOnboardingWithPairingSessionInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

