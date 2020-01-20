//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface SCTMiniWaveformView : UIView
{
    NSArray *_lines;
    struct SCTMiniWaveformAttributes _attributes;
}

- (void).cxx_destruct;
- (struct CGRect)_maxLineBounds;
- (struct CGRect)_midLineBounds;
- (struct CGRect)_minLineBounds;
- (struct CGRect)_lineBoundsFromLineHeight:(double)arg1;
- (void)_layoutLines;
- (void)_initLines;
- (void)stopAnimation;
- (void)startAnimation;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)layoutSubviews;
- (id)initWithAttributes:(struct SCTMiniWaveformAttributes)arg1;

@end

