//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCSentinel;

@interface SCGalleryLagunaStorySnapCellProgressView : UIView
{
    struct CGSize _previousBoundsSize;
    SCSentinel *_sentinel;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_activeColor;
- (id)_inactiveColor;
- (id)shapeLayer;
- (_Bool)_isAnimating;
- (void)_finish;
- (void)_pause;
- (void)_start;
- (void)reset;
- (void)updateProgress:(double)arg1 animated:(_Bool)arg2;
- (void)performAnimation:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

