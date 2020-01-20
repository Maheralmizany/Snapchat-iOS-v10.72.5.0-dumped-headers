//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SCActionable.h"
#import "SCDiscoverFeedCollectionViewCellAnimating.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCActionModel, SCGrowingButton, UILabel;

@interface SCDiscoverFeedCollapsedCollectionViewCell : UICollectionViewCell <SCActionable, SCViewModelConfigurable, SCDiscoverFeedCollectionViewCellAnimating>
{
    UILabel *_titleLabel;
    SCActionModel *_tapActionModel;
    SCGrowingButton *_watchAgainButton;
    UILabel *_watchAgainLabel;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (id)viewToAnimateOnTap:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
