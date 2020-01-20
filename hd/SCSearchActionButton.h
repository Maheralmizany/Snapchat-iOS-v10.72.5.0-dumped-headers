//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "SCViewModelConfigurable.h"

@class NSString, SCActionModel, SCLoadingIndicatorView, SCShapeView, UIImageView, UILabel;

@interface SCSearchActionButton : UIControl <SCViewModelConfigurable>
{
    double _imageTitlePadding;
    SCShapeView *_backgroundView;
    SCShapeView *_overlayView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    long long _imageStyle;
    SCActionModel *_actionModel;
    _Bool _shouldShowLoadingAfterTap;
    struct UIEdgeInsets _contentInsets;
    struct CGSize _imageSize;
    SCLoadingIndicatorView *_loadingIndicatorView;
    id _viewModel;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(readonly, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_initImageViewIfNeeded;
- (void)_initTitleLabelIfNeeded;
- (void)_initOverlayViewIfNeeded;
- (void)_initBackgroundViewIfNeeded;
- (void)_initializeViewsWithViewModel:(id)arg1;
- (void)_updateColorWithModel:(id)arg1;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)_setLoading:(_Bool)arg1;
- (void)_updateWithViewModel;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

