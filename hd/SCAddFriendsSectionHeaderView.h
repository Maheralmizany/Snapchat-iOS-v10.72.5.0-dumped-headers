//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "SCActionable.h"
#import "SCViewModelConfigurable.h"

@class NSString, NSTimer, SCAddFriendsExpandableBadgeView, SCLazy, SCSearchActionButton, UILabel;

@interface SCAddFriendsSectionHeaderView : UICollectionReusableView <SCActionable, SCViewModelConfigurable>
{
    SCLazy *_primaryTitleLabel;
    SCLazy *_primaryActionButton;
    SCLazy *_actionButton;
    SCLazy *_badge;
    UILabel *_titleLabelView;
    SCSearchActionButton *_primaryActionButtonView;
    SCSearchActionButton *_actionButtonView;
    SCAddFriendsExpandableBadgeView *_badgeView;
    NSTimer *_badgeAnimationTimer;
    struct CGRect _primaryViewLTRFrame;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_hideBadgeWithAnimation;
- (void)_didTapPrimaryActionButton:(id)arg1;
- (void)_didTapActionButton:(id)arg1;
- (id)_newActionButtonWithAction:(SEL)arg1;
- (void)_updateActionButton:(id)arg1;
- (void)_updateBadgeFrame;
- (void)_updateBadgeView:(id)arg1;
- (void)_updatePrimaryTitleFrame;
- (void)_updatePrimaryTitle:(id)arg1;
- (void)_updatePrimaryButtonWithViewModel:(id)arg1;
- (void)_updatePrimaryViewWithViewModel:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

