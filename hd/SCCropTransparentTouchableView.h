//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCMovableView.h"
#import "SCTouchControllable.h"

@class NSString;

@interface SCCropTransparentTouchableView : UIView <SCTouchControllable, SCMovableView>
{
    _Bool _isAutoAdjusting;
    id <SCCropOverlayViewListener> _delegate;
    double _scale;
    double _rotation;
    double _minimalScale;
    double _maximalScale;
    struct CGAffineTransform _rotationTransform;
    struct CGAffineTransform _scaleTransform;
}

@property(nonatomic) struct CGAffineTransform scaleTransform; // @synthesize scaleTransform=_scaleTransform;
@property(nonatomic) struct CGAffineTransform rotationTransform; // @synthesize rotationTransform=_rotationTransform;
@property(nonatomic) _Bool isAutoAdjusting; // @synthesize isAutoAdjusting=_isAutoAdjusting;
@property(nonatomic) double maximalScale; // @synthesize maximalScale=_maximalScale;
@property(nonatomic) double minimalScale; // @synthesize minimalScale=_minimalScale;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) __weak id <SCCropOverlayViewListener> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pinch:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pan:(id)arg1;
- (void)_recomputeTransform;
@property(nonatomic) struct CGPoint translation;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

