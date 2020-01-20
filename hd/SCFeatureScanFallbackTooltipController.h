//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureCameraTooltipController.h"

@class NSTimer, SCLazy, UIView;

@interface SCFeatureScanFallbackTooltipController : SCFeature <SCFeatureCameraTooltipController>
{
    UIView *_containerView;
    SCLazy *_hintView;
    NSTimer *_hintDisplayTimer;
    _Bool _visible;
    id <SCFeatureCameraUIArbitrator> _cameraTooltipArbitrator;
}

@property(nonatomic) __weak id <SCFeatureCameraUIArbitrator> cameraTooltipArbitrator; // @synthesize cameraTooltipArbitrator=_cameraTooltipArbitrator;
- (void).cxx_destruct;
- (void)_layoutTooltipView:(id)arg1;
- (void)_hideHintView;
- (void)setTooltipVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCameraUIVisible:(_Bool)arg1 animated:(_Bool)arg2 arbitrator:(id)arg3;
- (void)configureWithView:(id)arg1;

@end

