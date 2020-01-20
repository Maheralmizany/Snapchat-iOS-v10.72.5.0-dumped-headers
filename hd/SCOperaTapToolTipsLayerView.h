//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaToolTipsView.h"

#import "SCOperaLayerView.h"

@class NSString, SCShapeView, UILabel;

@interface SCOperaTapToolTipsLayerView : SCOperaToolTipsView <SCOperaLayerView>
{
    SCShapeView *_shapeView;
    UILabel *_leftTapLabel;
    UILabel *_rightTapLabel;
    double _tapLeftWidthRatio;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupDashedLine;
- (id)_tapLabel;
- (void)_setupLabels;
- (void)setViewWithTapLeftWidthRatio:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
