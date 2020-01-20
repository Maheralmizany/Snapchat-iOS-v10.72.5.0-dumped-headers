//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCTraceEnabled.h"
#import "SwipeView.h"

@class NSString, SCCardBackgroundView, SCCardGradientView, SIGActivityIndicatorView, SIGPullToRefreshView, UIImageView;

@interface SCSearchCardContainerView : UIView <SCTraceEnabled, SwipeView>
{
    SIGPullToRefreshView *_v11PullToRefreshView;
    SIGActivityIndicatorView *_v11PullToRefreshActivityIndicatorView;
    UIImageView *_topDarkGradientView;
    UIView *_bottomGradientView;
    UIImageView *_tabWhiteHump;
    SCCardBackgroundView *_cardBackgroundView;
    SCCardGradientView *_cardGradientView;
    UIView *_contentView;
    double _cardBackgroundTopInset;
    double _overscrollPercentage;
    struct UIEdgeInsets _layoutInsets;
}

@property(nonatomic) double overscrollPercentage; // @synthesize overscrollPercentage=_overscrollPercentage;
@property(nonatomic) double cardBackgroundTopInset; // @synthesize cardBackgroundTopInset=_cardBackgroundTopInset;
@property(nonatomic) struct UIEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SCCardGradientView *cardGradientView; // @synthesize cardGradientView=_cardGradientView;
@property(readonly, nonatomic) SCCardBackgroundView *cardBackgroundView; // @synthesize cardBackgroundView=_cardBackgroundView;
- (void).cxx_destruct;
- (void)setTopDarkGradientViewAlpha:(double)arg1;
@property(readonly, nonatomic) SIGActivityIndicatorView *v11PullToRefreshActivityIndicatorView;
@property(readonly, nonatomic) SIGPullToRefreshView *v11PullToRefreshView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 containerViewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
