//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SCActionable.h"
#import "SCUnifiedProfileIdentityCarouselIndicatorViewDelegate.h"
#import "SCUnifiedProfileIdentitySectionBouncingAnimationControllerDelegate.h"
#import "SCUnifiedProfileViewLayoutConfigurable.h"
#import "SCViewModelConfigurable.h"
#import "SCViewportConfigurable.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCUnifiedProfileDisplayTitleView, SCUnifiedProfileIdentityCarouselIndicatorView, SCUnifiedProfileIdentitySectionBouncingAnimationController, SCUnifiedProfileViewLayoutConfiguration, UICollectionView;

@interface SCUnifiedProfileIdentityCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, SCUnifiedProfileIdentityCarouselIndicatorViewDelegate, SCUnifiedProfileIdentitySectionBouncingAnimationControllerDelegate, SCViewModelConfigurable, SCViewportConfigurable, SCActionable, SCUnifiedProfileViewLayoutConfigurable>
{
    SCUnifiedProfileDisplayTitleView *_displayTitleView;
    NSArray *_subtitleViews;
    SCUnifiedProfileIdentityCarouselIndicatorView *_indicatorView;
    SCUnifiedProfileIdentitySectionBouncingAnimationController *_animationController;
    _Bool _hasEverAppearOnScreen;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    SCUnifiedProfileViewLayoutConfiguration *_layoutConfiguration;
    UICollectionView *_itemCollectionView;
    id <SCLegacyItemDownloading> _infoFetcher;
    id <SCActionHandling> _subtitleAnimationHandler;
    SCEventListenerAnnouncer *_lifecycleAnnouncer;
    struct CGRect _viewportFrame;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak SCEventListenerAnnouncer *lifecycleAnnouncer; // @synthesize lifecycleAnnouncer=_lifecycleAnnouncer;
@property(retain, nonatomic) id <SCActionHandling> subtitleAnimationHandler; // @synthesize subtitleAnimationHandler=_subtitleAnimationHandler;
@property(nonatomic) __weak id <SCLegacyItemDownloading> infoFetcher; // @synthesize infoFetcher=_infoFetcher;
@property(readonly, nonatomic) UICollectionView *itemCollectionView; // @synthesize itemCollectionView=_itemCollectionView;
@property(nonatomic) __weak SCUnifiedProfileViewLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(nonatomic) struct CGRect viewportFrame; // @synthesize viewportFrame=_viewportFrame;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)bouncingAnimationControllerDidEndAnimation:(id)arg1;
- (void)_handleSubtitleTap:(id)arg1;
- (void)_updateSubtitleViewsWithViewModels:(id)arg1 previousSubtitleViewModels:(id)arg2;
- (void)indicatorView:(id)arg1 didSelectIndicatorAtIndex:(long long)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (struct CGRect)_itemCollectionViewFrameForItemAtIndexPath:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)viewportDidUpdateViewportFrame:(struct CGRect)arg1 dragging:(_Bool)arg2 decelerating:(_Bool)arg3;
- (void)animateContentBouncing;
- (struct CGRect)frameForDisplayTitle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

