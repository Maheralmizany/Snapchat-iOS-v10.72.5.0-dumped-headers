//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSwipeTransitionCoordinator, UIPresentationController, UIViewController;

@protocol SCSwipeTransitionCoordinatorDataSource <NSObject>
- (UIPresentationController *)transitionCoordinator:(SCSwipeTransitionCoordinator *)arg1 presentationControllerForPresentedViewController:(UIViewController *)arg2 presentingViewController:(UIViewController *)arg3;
- (UIViewController *)presentingViewControllerWithSwipeTransitionCoordinator:(SCSwipeTransitionCoordinator *)arg1;
- (UIViewController *)presentedViewControllerWithSwipeTransitionCoordinator:(SCSwipeTransitionCoordinator *)arg1;
@end
