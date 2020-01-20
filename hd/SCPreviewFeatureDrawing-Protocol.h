//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, POPAnimation, SCDrawingMetadata, SCEmojiBrushResourceProvider, SCMultiSnapDrawingCache, SCPreviewDrawingToolBarButtonItem, UIColor, UIView, UIView<SCDrawingViewCommon>;

@protocol SCPreviewFeatureDrawing
@property(readonly, nonatomic) _Bool shouldDisplayEmojiBrushOnboardingAnimation;
@property(readonly, nonatomic) NSString *emojiBrushListVersion;
@property(readonly, nonatomic) SCMultiSnapDrawingCache *multiSnapDrawingCache;
@property(readonly, nonatomic) SCDrawingMetadata *drawingMetadata;
@property(readonly, nonatomic) long long updateVersion;
@property(readonly, nonatomic) long long pointCount;
@property(readonly, nonatomic) long long strokeCount;
@property(readonly, nonatomic) _Bool hasStroke;
@property(readonly, nonatomic) SCPreviewDrawingToolBarButtonItem *toolbarButtonItem;
@property(readonly, nonatomic) SCEmojiBrushResourceProvider *emojiBrushResourceProvider;
@property(readonly, nonatomic) UIView<SCDrawingViewCommon> *drawingView;
@property(nonatomic) __weak id <SCPreviewFeatureDrawingDelegate> delegate;
- (NSString *)drawingStartPositions;
- (NSString *)drawingColorsHexString;
- (void)drawingDidChangePaletteType:(unsigned long long)arg1;
- (void)drawingV1DidChangeColor:(UIColor *)arg1;
- (void)replaceDrawingStrokeHistory:(NSArray *)arg1 forSegmentIndex:(long long)arg2;
- (void)setMultiSnapDelegate:(id <SCDrawingViewMultiSnapDelegate>)arg1;
- (void)setTooltipDidResize;
- (void)hideTooltip;
- (void)updatePinchResizeTooltipFrame;
- (void)updateForDrawItem:(_Bool)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(UIView *)arg2;
- (void)setAlpha:(double)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)addAnimation:(POPAnimation *)arg1 forKey:(NSString *)arg2;
- (void)setSwipeFilters:(id <SCFeatureSwipeFilters>)arg1;
@end
