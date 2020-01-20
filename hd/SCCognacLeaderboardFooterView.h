//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCViewModelConfigurable.h"

@class NSString, SCCognacLeaderboardEntryCell, SCShapeView;

@interface SCCognacLeaderboardFooterView : UIView <SCViewModelConfigurable>
{
    SCShapeView *_backgroundView;
    SCCognacLeaderboardEntryCell *_entryCell;
    double _transitionPercent;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (id)viewModelWithLeaderboard:(id)arg1 myLeaderboardEntry:(id)arg2 isMyLeaderboardEntryHidden:(_Bool)arg3;
- (void).cxx_destruct;
- (id)_backgroundViewPathWithTransitionPercent:(double)arg1 backgroundViewBounds:(struct CGRect)arg2;
- (struct CGRect)_backgroundViewFrameWithTransitionPercent:(double)arg1 bounds:(struct CGRect)arg2 entryCellFrame:(struct CGRect)arg3;
- (double)_backgroundViewCornerRadiusWithTransitionPercent:(double)arg1;
- (double)_backgroundViewShadowOpacityWithTransitionPercent:(double)arg1;
- (struct CGRect)_entryCellFrameWithTransitionPercent:(double)arg1 bounds:(struct CGRect)arg2 viweModel:(id)arg3;
- (void)_update;
- (void)updateWithMyLeaderboardEntryCellFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect myLeaderboardScoreRect;
@property(retain, nonatomic) id viewModel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

