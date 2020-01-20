//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCognacLeaderboardViewControllerDelegate.h"
#import "SCSwipeTransitionCoordinatorDataSource.h"
#import "SCSwipeTransitionCoordinatorDelegate.h"

@class NSString, SCCognacLeaderboardViewController, SCSwipeTransitionCoordinator, UIViewController;

@interface SCCognacLeaderboardPresenter : NSObject <SCCognacLeaderboardViewControllerDelegate, SCSwipeTransitionCoordinatorDataSource, SCSwipeTransitionCoordinatorDelegate>
{
    SCSwipeTransitionCoordinator *_transitionCoordinator;
    long long _previousStatusBarStyle;
    _Bool _previousStatusBarHidden;
    id <SCCognacLeaderboardPresenterDelegate> _delegate;
    UIViewController *_presentingViewController;
    SCCognacLeaderboardViewController *_leaderboardViewController;
}

@property(readonly, nonatomic) SCCognacLeaderboardViewController *leaderboardViewController; // @synthesize leaderboardViewController=_leaderboardViewController;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCCognacLeaderboardPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_restorePreviousStatusBar;
- (void)_recordPreviousStatusBar;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isTransitioning;
- (_Bool)isPresenting;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (_Bool)transitionCoordinator:(id)arg1 transitionType:(unsigned long long)arg2 shouldAllowGesture:(id)arg3 toRecognizeSimultaneouslyWith:(id)arg4;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)leaderboardViewControllerDidFinish:(id)arg1;
- (void)leaderboardViewControllerIsDismissed:(id)arg1;
- (void)leaderboardViewControllerIsPresented:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 leaderboardViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

