//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString;

@interface SCSearchScrollViewDismissalGestureController : NSObject <UIGestureRecognizerDelegate>
{
    double _targetOffsetY;
    id <SCSearchScrollViewDismissalGestureControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSearchScrollViewDismissalGestureControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_finishAnimation:(id)arg1 didDismiss:(_Bool)arg2;
- (void)_applyTranslationForView:(id)arg1 translation:(struct CGPoint)arg2;
- (void)_resetOrDismissWithView:(id)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleGesture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
