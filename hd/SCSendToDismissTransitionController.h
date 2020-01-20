//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPercentDrivenInteractiveTransition.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, SCLazy, UIPanGestureRecognizer;

@interface SCSendToDismissTransitionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning>
{
    SCLazy *_panGestureRecognizer;
    double _panStartingPosition;
    _Bool _isDirectionDown;
    _Bool _isInteractive;
    long long _panGestureDirection;
    id <SCSendToDismissTransitionControllerDelegate> _delegate;
    id <SCModalPresentation> _modalPresentationDelegate;
}

@property(nonatomic) __weak id <SCModalPresentation> modalPresentationDelegate; // @synthesize modalPresentationDelegate=_modalPresentationDelegate;
@property(nonatomic) __weak id <SCSendToDismissTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long panGestureDirection; // @synthesize panGestureDirection=_panGestureDirection;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
- (void).cxx_destruct;
- (void)_handlePanGesture:(id)arg1;
- (id)_createPanGestureRecognizer;
- (double)completionSpeed;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)resetPanState;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
