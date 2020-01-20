//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSMapTable, NSMutableArray;

@interface SIGLoadingIndicatorView : UIView
{
    unsigned long long _size;
    _Bool _shouldResumeAnimating;
    NSMutableArray *_arcLayers;
    CALayer *_iconLayer;
    NSMapTable *_identifierArcLayerMap;
    NSMapTable *_arcLayerConfigMap;
    _Bool _hidesWhenStopped;
    _Bool _scaleLineWidth;
}

@property(nonatomic) _Bool scaleLineWidth; // @synthesize scaleLineWidth=_scaleLineWidth;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (id)_rotateIndefinitelyAnimationWithRotationStartAngle:(double)arg1 secondsPerCycle:(double)arg2 direction:(long long)arg3 onLayer:(id)arg4;
- (id)_strokeEndAnimationWithStrokeStartPercent:(double)arg1 strokeEndPercent:(double)arg2 secondsPerCycle:(double)arg3;
- (id)_lineThicknessAnimationWithStartArcWidth:(double)arg1 endArcWidth:(double)arg2;
- (void)_stopAnimatingArcLayer:(id)arg1;
- (void)_startAnimatingCircleArcLayer:(id)arg1 startArcWidth:(double)arg2 endArcWidth:(double)arg3 strokeSecondsPerCycle:(double)arg4 strokeStartPercent:(double)arg5 strokeEndPercent:(double)arg6 secondsPerCycle:(double)arg7 rotationStartAngle:(double)arg8 rotationEndAngle:(double)arg9 direction:(long long)arg10;
- (void)_startAnimatingIconLayer:(id)arg1 withConfiguration:(id)arg2;
- (void)_startAnimatingArcLayer:(id)arg1 withConfiguration:(id)arg2;
@property(readonly, nonatomic) _Bool isAnimating;
- (double)_animationEndLineWidthForSize:(unsigned long long)arg1;
- (struct UIOffset)_edgeOffsetsForInnerArcForSize:(unsigned long long)arg1;
- (void)_removeLoadingArcWithIdentifier:(id)arg1;
- (void)_configureWithSize:(unsigned long long)arg1 color:(unsigned long long)arg2;
- (void)setTintColor:(unsigned long long)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)addLoadingArcWithIdentifier:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initBackupSpinner;
- (id)initWithColor:(unsigned long long)arg1 size:(unsigned long long)arg2;

@end

