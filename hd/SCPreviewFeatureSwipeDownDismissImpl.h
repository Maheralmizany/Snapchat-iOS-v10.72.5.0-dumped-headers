//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureSwipeDownDismiss.h"
#import "SCPreviewFeatureSwipeDownDismissAnimatorDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCPreviewConfiguration, SCPreviewSwipeDismissLoggingParameters, SCPreviewView, UIPanGestureRecognizer, UIViewController<SCPreviewFeatureSwipeDownDismissDelegate>;

@interface SCPreviewFeatureSwipeDownDismissImpl : SCFeature <UIGestureRecognizerDelegate, SCPreviewFeatureSwipeDownDismissAnimatorDelegate, SCPreviewFeatureSwipeDownDismiss>
{
    SCPreviewConfiguration *_configuration;
    UIPanGestureRecognizer *_swipeGesture;
    id <SCPreviewFeatureSwipeDownDismissAnimating> _animator;
    SCPreviewView *_previewView;
    UIViewController<SCPreviewFeatureSwipeDownDismissDelegate> *_swipeDownDismissDelegate;
    SCPreviewSwipeDismissLoggingParameters *_loggingParameters;
}

@property(readonly, nonatomic) SCPreviewSwipeDismissLoggingParameters *loggingParameters; // @synthesize loggingParameters=_loggingParameters;
@property(nonatomic) __weak UIViewController<SCPreviewFeatureSwipeDownDismissDelegate> *swipeDownDismissDelegate; // @synthesize swipeDownDismissDelegate=_swipeDownDismissDelegate;
- (void).cxx_destruct;
- (_Bool)animatorShouldRespondToGestureCompleted:(id)arg1;
- (void)animatorWillRespondToGestureCompleted:(id)arg1;
- (void)animatorWillRespondToGestureBegan:(id)arg1;
- (void)animatorWillFinishTransition:(id)arg1 isInteractive:(_Bool)arg2;
- (void)animatorDidCancelTransition:(id)arg1;
- (void)animatorShouldStartInteractiveTransitionOnGestureBegan:(id)arg1;
- (void)animatorDismissPreviewWithSwipeDown:(id)arg1;
- (void)finishTransition;
- (void)_handleGesture:(id)arg1;
- (void)_setupGestureHandling;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setFeatureEnabled:(_Bool)arg1;
- (void)exitPreviewCancelled;
- (void)configureWithView:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

