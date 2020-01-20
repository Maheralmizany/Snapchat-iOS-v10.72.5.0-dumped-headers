//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, SCCropTransparentTouchableView, SCCroppingState, SCGrowingButton, UIImageView;

@interface SCCropOverlayView : UIView
{
    SCCropTransparentTouchableView *_touchControlView;
    SCGrowingButton *_aspectSwitchButton;
    SCGrowingButton *_rotateButton;
    SCGrowingButton *_checkmarkButton;
    UIImageView *_teachingTooltipView;
    double _aspectRatio;
    SCCroppingState *_originalCroppingState;
    SCCroppingState *_initialCroppingState;
    struct CGRect _initialTouchAreaBounds;
    CAShapeLayer *_gridLinesLayer;
    _Bool _isGridLinesHidden;
    struct CGRect _portraitAspectFitFrame;
    struct CGRect _portraitAspectFillFrame;
    struct CGRect _landscapeAspectFitFrame;
    struct CGRect _landscapeAspectFillFrame;
    double _portraitAspectFitScale;
    double _portraitAspectFillScale;
    double _landscapeAspectFitScale;
    double _landscapeAspectFillScale;
}

+ (_Bool)canSubView:(id)arg1 completelyCoverSuperView:(id)arg2;
- (void).cxx_destruct;
- (void)_updateAspectSwitchButton;
- (void)_checkmarkButtonPressed;
- (void)_rotateButtonPressed;
- (void)_aspectSwitchButtonPressed;
- (double)_computeNearestTargetRotation:(double)arg1;
- (void)_updateButtonsWithEnabled:(_Bool)arg1;
- (void)_transformTouchControlViewToTranslation:(struct CGPoint)arg1 rotation:(double)arg2 scale:(double)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_regulateSubView:(id)arg1 toFitOrFillSuperView:(id)arg2;
- (void)_applyMinimumTranslationOnSubView:(id)arg1 toCompletelyCoverSuperView:(id)arg2;
- (void)_applyMinimumScaleOnSubView:(id)arg1 toCompletelyCoverSuperView:(id)arg2;
- (struct CGRect)_computeRegularFrame:(long long)arg1;
- (void)_finishAdjustingWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)hideTeachingTooltipView;
- (void)showTeachingTooltipViewWithContentPath:(id)arg1;
- (void)scaleToAspectFillWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)adjustTransformToFillScreenWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isEligibleForReset;
- (_Bool)isInsideScreen;
- (_Bool)isFillScreen;
- (void)beginGesture:(id)arg1;
- (_Bool)containingGesture:(id)arg1;
- (id)currentTouchTarget:(id)arg1;
- (void)updateWithCroppingState:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setTranslation:(struct CGVector)arg1;
- (double)currentScale;
- (double)currentRotation;
- (struct CGVector)currentTranslation;
- (void)viewDidLayoutSubviews;
- (void)setGridHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 aspectRatio:(double)arg2 croppingState:(id)arg3;

@end

