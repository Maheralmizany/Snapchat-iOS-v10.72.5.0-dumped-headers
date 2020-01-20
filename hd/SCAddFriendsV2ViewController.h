//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCActionable.h"
#import "SCAddFriendsPageEventObservableRepository.h"
#import "SCEventListener.h"
#import "SCHeaderDelegate.h"
#import "SCLeftSwipeableDismissTransitionControllerDelegate.h"
#import "SCSearchContentViewControlling.h"
#import "SCSearchQueryResultControllerDelegate.h"
#import "SCShakeToReportDelegate.h"

@class NSObject, NSString, SCAddFriendsPullToDismissHandler, SCAddFriendsQuickAddLogger, SCAddFriendsScrollAnimatorDataCoordinator, SCLazy, SCLeftSwipeableTransitionProvider, SCObservable, SCPublishSubject, SCSearchContentViewControllerContext, SCSearchQueryResultController, SCUserSession;

@interface SCAddFriendsV2ViewController : UIViewController <SCHeaderDelegate, SCLeftSwipeableDismissTransitionControllerDelegate, SCShakeToReportDelegate, SCSearchQueryResultControllerDelegate, SCSearchContentViewControlling, SCActionable, SCAddFriendsPageEventObservableRepository, SCEventListener>
{
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_userInfoProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    SCUserSession *_userSession;
    id <SCPageViewLogging> _pageViewLogger;
    id <SCCurrentPageTracker> _currentPageTracker;
    id <SCSearchQueryCoordinating> _queryCoordinator;
    id <SCSearchSectionCreating> _sectionCreator;
    SCLazy *_contentView;
    SCAddFriendsScrollAnimatorDataCoordinator *_scrollAnimatorDataCoordinator;
    SCAddFriendsPullToDismissHandler *_pullToDismissHandler;
    SCSearchQueryResultController *_queryResultController;
    SCAddFriendsQuickAddLogger *_seenAndAddEventLogger;
    long long _previousStatusBarStyle;
    double _pageSessionStartTime;
    id <SCAddFriendsWorkflowDelegate> _addFriendsWorkflowDelegate;
    SCPublishSubject *_pageEventDataObservable;
    id <SCActionHandling> _actionHandler;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    SCLeftSwipeableTransitionProvider *_transitionProvider;
    NSObject *_cameraPresenter;
}

@property(retain, nonatomic) NSObject *cameraPresenter; // @synthesize cameraPresenter=_cameraPresenter;
@property(retain, nonatomic) SCLeftSwipeableTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
@property(retain, nonatomic) SCObservable *pageEventObservable; // @synthesize pageEventObservable=_pageEventDataObservable;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)defaultProjectNameV2;
- (id)presentingViewControllerForSearchQueryResultController:(id)arg1;
- (void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
- (void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
- (void)rightButtonPressed;
- (void)initiatePageDismissInteractive:(_Bool)arg1;
- (void)searchControllerDidTapClearButton;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_dismissKeyboard;
- (void)_setupDismissKeyboardForScrollView;
- (void)_addSnapcodeSearchBarButtonPressed:(id)arg1;
- (id)_addSnapcodeSearchBarButton;
- (_Bool)viewControllerPrefersSelfDismiss;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSnapchattersDataFetcher:(id)arg1 viewedIncomingFriendsTracker:(id)arg2 userInfoProvider:(id)arg3 userSession:(id)arg4 pageViewLogger:(id)arg5 currentPageTracker:(id)arg6 queryCoordinator:(id)arg7 sectionCreator:(id)arg8 seenAndAddEventLogger:(id)arg9 addFriendsWorkflowDelegate:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
