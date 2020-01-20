//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLazy, SCProfileCharmsCardTitleViewModel, SCProfileCharmsCardViewCell;

@interface SCProfileCharmsCardViewCellTitleView : UIView
{
    SCProfileCharmsCardTitleViewModel *_viewModel;
    SCLazy *_smallTitle;
    SCLazy *_largeTitle;
    SCProfileCharmsCardViewCell *_cell;
}

@property(nonatomic) __weak SCProfileCharmsCardViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)_updateLargeTitle;
- (id)_buildLargeTitle;
- (void)_updateSmallTitle;
- (id)_buildSmallTitle;
- (void)_createTitlesIfNecessary:(_Bool)arg1;
- (void)setTitleViewModel:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
