//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, SCSearchNavigationTransitionContext, UIViewController;

@interface SCSearchNavigationCoordinator : NSObject
{
    NSMutableArray *_mutableNavigationInfoStack;
    _Bool _isInteractiveDismissing;
    id <SCSearchNavigationCoordinatorDelegate> _delegate;
    long long _viewControllerStatus;
    id <UIViewControllerInteractiveTransitioning> _interactiveDismissalController;
    SCSearchNavigationTransitionContext *_ongoingTransitionContext;
    SCSearchNavigationCoordinator *_parentNavigationCoordinator;
}

@property(nonatomic) __weak SCSearchNavigationCoordinator *parentNavigationCoordinator; // @synthesize parentNavigationCoordinator=_parentNavigationCoordinator;
@property(readonly, nonatomic) SCSearchNavigationTransitionContext *ongoingTransitionContext; // @synthesize ongoingTransitionContext=_ongoingTransitionContext;
@property(readonly, nonatomic) id <UIViewControllerInteractiveTransitioning> interactiveDismissalController; // @synthesize interactiveDismissalController=_interactiveDismissalController;
@property(nonatomic) _Bool isInteractiveDismissing; // @synthesize isInteractiveDismissing=_isInteractiveDismissing;
@property(nonatomic) long long viewControllerStatus; // @synthesize viewControllerStatus=_viewControllerStatus;
@property(nonatomic) __weak id <SCSearchNavigationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeNavigationInfoFromStack;
- (void)_addNavigationInfoToStack:(id)arg1;
- (void)_cleanUpTransitionWithFromNavigationInfo:(id)arg1 toNavigationInfo:(id)arg2;
- (long long)containerViewControllerStatusForTransitionContext:(id)arg1;
- (void)_transitionFromNavigationInfo:(id)arg1 toNavigationInfo:(id)arg2 isPresenting:(_Bool)arg3 animated:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) NSArray *navigationInfos;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)dismissViewControllerFromParentStackIfPossibleWithAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissContainerViewControllerAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)presentWithNavigationInfo:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
