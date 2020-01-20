//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCUnifiedProfileViewLayoutConfigurable.h"
#import "UICollectionViewDelegate.h"

@class CAGradientLayer, FBKVOController, NSArray, NSString, SCUnifiedProfileHeaderView, SCUnifiedProfileViewLayoutConfiguration, UICollectionView;

@interface SCUnifiedProfileView : UIView <UICollectionViewDelegate, SCUnifiedProfileViewLayoutConfigurable>
{
    UIView *_containerView;
    UIView *_contentContainerView;
    UIView *_cornerView;
    double _prevCollectionViewHeight;
    double _fullScreenHeaderViewTopPaddingHeight;
    CAGradientLayer *_topGradient;
    FBKVOController *_observeController;
    SCUnifiedProfileViewLayoutConfiguration *_layoutConfiguration;
    SCUnifiedProfileHeaderView *_headerView;
    UICollectionView *_contentCollectionView;
    NSArray *_injectedViews;
}

@property(retain, nonatomic) NSArray *injectedViews; // @synthesize injectedViews=_injectedViews;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
@property(readonly, nonatomic) SCUnifiedProfileHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak SCUnifiedProfileViewLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
- (void).cxx_destruct;
- (void)_updateContentCollectionViewSize;
- (struct CGRect)_contentContainerViewFrame;
- (struct UIEdgeInsets)_contentCollectionViewEdgeInset;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) struct CGRect containerViewFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

