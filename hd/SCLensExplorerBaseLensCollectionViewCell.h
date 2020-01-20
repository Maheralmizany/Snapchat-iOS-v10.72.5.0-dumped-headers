//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SCActionable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCLECollectionViewCellBehavior, SCLensExplorerLensCellViewModel, SCLensExplorerLensInfoView, SCLensFeedCellLayout, UIButton, UIImageView, UIView;

@interface SCLensExplorerBaseLensCollectionViewCell : UICollectionViewCell <SCViewModelConfigurable, SCActionable>
{
    UIButton *_debugButton;
    SCLECollectionViewCellBehavior *_cellBehavior;
    id <SCActionHandling> _actionHandler;
    SCLensExplorerLensCellViewModel *_viewModel;
    UIImageView *_lensIconImageView;
    SCLensExplorerLensInfoView *_lensInfoView;
    UIView *_roundedContainerView;
    SCLensFeedCellLayout *_layout;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(readonly, nonatomic) SCLensFeedCellLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UIView *roundedContainerView; // @synthesize roundedContainerView=_roundedContainerView;
@property(readonly, nonatomic) SCLensExplorerLensInfoView *lensInfoView; // @synthesize lensInfoView=_lensInfoView;
@property(readonly, nonatomic) UIImageView *lensIconImageView; // @synthesize lensIconImageView=_lensIconImageView;
@property(retain, nonatomic) SCLensExplorerLensCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_setupKarma;
- (void)onIconImageDownloadingFinished:(id)arg1;
- (struct CGRect)iconViewFrame;
- (id)cellBehavior;
- (void)_prepareDebugButton;
- (void)_prepareIconImageView;
- (void)_prepareLensInfo;
- (void)_prepareRoundedContainerView;
- (void)_handleDebugButtonTapAction;
- (void)_handleTapActionOnInfoView:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (void)_setupLensInfoView;
- (void)prepareForReuse;
@property(readonly, nonatomic) double roundedContainerViewCornerRadius;
- (_Bool)shouldShowBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

