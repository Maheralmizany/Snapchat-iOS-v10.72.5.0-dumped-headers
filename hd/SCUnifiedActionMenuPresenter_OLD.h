//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionMenuPresenting.h"
#import "SCSwipeTransitionCoordinatorDataSource.h"
#import "SCSwipeTransitionCoordinatorDelegate.h"
#import "SCUnifiedActionMenuViewControllerDelegate.h"

@class NSString, SCEventListenerAnnouncer, SCSwipeTransitionCoordinator, SCUnifiedActionMenuViewController, UINavigationController, UIView, UIViewController;

@interface SCUnifiedActionMenuPresenter_OLD : NSObject <SCSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinatorDataSource, SCUnifiedActionMenuViewControllerDelegate, SCActionMenuPresenting>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCUnifiedActionMenuDataProvider> _dataProvider;
    id <SCImageDownloading> _imageDownloader;
    id <SCActionHandling> _actionHandler;
    UIViewController *_presentingViewController;
    UIView *_dimEffectTargetView;
    SCUnifiedActionMenuViewController *_menuViewController;
    UINavigationController *_navigationController;
    SCSwipeTransitionCoordinator *_menuTransitionCoordinator;
    NSString *_sourcePageType;
    id <SCUnifiedActionMenuPresenterDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCUnifiedActionMenuPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissActionMenuViewController:(id)arg1;
- (void)_didDismissActionMenu;
- (void)_setUpMenuViewControllerIfNecessary;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (id)presentingViewController;
- (id)presentedViewController;
- (void)popActionSheetView;
- (void)dismissMenuViewWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentNestedMenuView:(id)arg1;
- (void)presentMenuViewWithPresentingViewController:(id)arg1;
- (void)presentMenuViewWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithMenuViewDataProvider:(id)arg1 actionHandler:(id)arg2 imageDownloader:(id)arg3 sourcePageType:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

