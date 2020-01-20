//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPercentDrivenInteractiveTransition.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer, UIViewController;

@interface SCUnifiedProfileSwipeDownDismissInteractiveTransition : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    UIViewController *_presentingViewController;
    UIPanGestureRecognizer *_panGesture;
    _Bool _isInteractiveTransitionInProgress;
    _Bool _shouldCompleteTransition;
    id <SCUnifiedProfileSwipeDownDismissInteractiveTransitionDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedProfileSwipeDownDismissInteractiveTransitionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (long long)completionCurve;
- (void)_handleGesture:(id)arg1;
- (_Bool)isInteractiveTransitionInProgress;
- (void)recognizeGestureOnView:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

