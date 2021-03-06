//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, SCOnDemandGeofilterMapBannerViewModel, UILabel;

@interface SCOnDemandGeofilterMapBannerView : UIView
{
    UILabel *_infoLabel;
    SCLoadingIndicatorView *_activityIndicator;
    SCOnDemandGeofilterMapBannerViewModel *_viewModel;
    UIView *_canvasViewDelegate;
}

@property(nonatomic) __weak UIView *canvasViewDelegate; // @synthesize canvasViewDelegate=_canvasViewDelegate;
- (void).cxx_destruct;
- (void)presentErrorView;
- (void)presentPricingView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)enableActivityIndicator:(_Bool)arg1;
- (void)updateWithBannerViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

