//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPinchGestureRecognizer;

@interface SCOperaRotatingLayerPinchController : NSObject <UIGestureRecognizerDelegate>
{
    double _smallestScale;
    double _largestScale;
    double _scale;
    struct CGRect _viewBounds;
    double _animationDuration;
    double _springDamping;
    _Bool _shouldPinchWhenSuppressed;
    _Bool _isSuppressingPinchState;
    id <SCOperaRotatingLayerPinchControllerDelegate> _delegate;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property(nonatomic) _Bool isSuppressingPinchState; // @synthesize isSuppressingPinchState=_isSuppressingPinchState;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(nonatomic) _Bool shouldPinchWhenSuppressed; // @synthesize shouldPinchWhenSuppressed=_shouldPinchWhenSuppressed;
@property(nonatomic) __weak id <SCOperaRotatingLayerPinchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handlePinch:(id)arg1;
- (double)_computeScaleProgress;
- (double)_adjustedVideoScaleFactor:(double)arg1;
- (void)setSuppressed:(_Bool)arg1;
- (_Bool)isInPinchedState;
- (void)setInPinchedState:(_Bool)arg1;
- (void)addPinchGestureToTarget:(id)arg1;
- (id)initWithViewBounds:(struct CGRect)arg1 animationDuration:(double)arg2 springDamping:(double)arg3 delegate:(id)arg4;
@property(readonly, nonatomic) double scale;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

