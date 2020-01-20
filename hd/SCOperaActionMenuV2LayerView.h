//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCOperaLayerView.h"

@class NSArray, NSString, SCActionMenuTableView, SCOperaActionMenuHeaderView;

@interface SCOperaActionMenuV2LayerView : UIView <SCOperaLayerView>
{
    double _lastSetVisiblePercent;
    SCActionMenuTableView *_actionMenuView;
    NSArray *_menuItems;
    SCOperaActionMenuHeaderView *_header;
    UIView *_backgroundView;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SCOperaActionMenuHeaderView *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupActionMenuWithLayer:(id)arg1;
- (void)_setupBackgroundView;
- (void)_setupHeaderWithLayer:(id)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 animationDuration:(double)arg3 springDampening:(double)arg4;
- (void)setVisiblePercent:(double)arg1;
- (void)setupViewForLayer:(id)arg1 menuItems:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

