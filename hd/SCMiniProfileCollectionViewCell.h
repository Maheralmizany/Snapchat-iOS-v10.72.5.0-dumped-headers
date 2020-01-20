//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CALayer, SCMiniProfileRowController, UIView;

@interface SCMiniProfileCollectionViewCell : UICollectionViewCell
{
    CALayer *_topSeparatorLayer;
    UIView *_clippingView;
    unsigned long long _rounding;
    SCMiniProfileRowController *_rowController;
}

- (void).cxx_destruct;
- (void)setRowController:(id)arg1;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)setShowsBorder:(_Bool)arg1;
- (void)setShowsTopSeparator:(_Bool)arg1;
- (void)setRounding:(unsigned long long)arg1;
- (id)topSeparatorLayer;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

