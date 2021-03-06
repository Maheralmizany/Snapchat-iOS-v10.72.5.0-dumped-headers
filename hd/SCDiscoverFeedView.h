//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCTraceEnabled.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCDiscoverFeedFloatingBadgeView, SCExperimentManager, SCGrowingButton, SCLazy, UICollectionView, UIImageView;

@interface SCDiscoverFeedView : UIView <UIGestureRecognizerDelegate, SCTraceEnabled>
{
    SCGrowingButton *_scrollToTopButton;
    SCLazy *_getStartedViewLazy;
    SCExperimentManager *_experimentManager;
    _Bool _isAnimatingFloatingBadge;
    UICollectionView *_contentCollectionView;
    UIImageView *_scrollShadowView;
    double _cardBackgroundTopInset;
    id <SCImageDownloading> _imageDownloader;
    SCDiscoverFeedFloatingBadgeView *_floatingBadgeView;
}

@property(nonatomic) _Bool isAnimatingFloatingBadge; // @synthesize isAnimatingFloatingBadge=_isAnimatingFloatingBadge;
@property(retain, nonatomic) SCDiscoverFeedFloatingBadgeView *floatingBadgeView; // @synthesize floatingBadgeView=_floatingBadgeView;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) double cardBackgroundTopInset; // @synthesize cardBackgroundTopInset=_cardBackgroundTopInset;
@property(readonly, nonatomic) UIImageView *scrollShadowView; // @synthesize scrollShadowView=_scrollShadowView;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didTap:(id)arg1;
- (void)fadeOutScrollToTopButton;
- (void)fadeInScrollToTopButton;
- (void)_scrollToTop;
- (void)_addGetStartCoverView:(id)arg1;
- (struct CGRect)getStartedViewFrame;
- (_Bool)isGetStartedOverlayActive;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithDefaultCollectionViewLayout:(id)arg1 experimentManager:(id)arg2;
- (void)_twerkBadge:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didLongPressBadge:(id)arg1;
- (void)didPanBadge:(id)arg1;
- (void)didTapBadge:(id)arg1;
- (void)fadeOutFloatingBadgeView:(_Bool)arg1;
- (void)fadeInFloatingBadgeView;
- (id)badgeView;
- (id)createBadgeView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

