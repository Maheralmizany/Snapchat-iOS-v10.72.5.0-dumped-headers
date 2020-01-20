//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSwipeTransitionCoordinatorDataSource.h"
#import "SCSwipeTransitionCoordinatorDelegate.h"

@class NSString, SCCameraViewController, SCSwipeTransitionCoordinator, UINavigationController;

@interface SCCaptureWorkflowSwipeTransitionCoordinatorDelegate : NSObject <SCSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinatorDataSource>
{
    id <SCCameraViewContaining> _cameraViewContainer;
    SCCameraViewController *_cameraViewController;
    UINavigationController *_navigationController;
    SCSwipeTransitionCoordinator *_cameraTransitionCoordinator;
}

- (void).cxx_destruct;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;
- (id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (id)initWithCameraViewController:(id)arg1 navigationController:(id)arg2 cameraViewContainer:(id)arg3 cameraTransitionCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

