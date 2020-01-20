//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureVerticalToolbarController.h"

@class NSString, SCDisposableObserver, SCFeatureReference;

@interface SCFeatureVerticalToolbarControllerImpl : SCFeature <SCFeatureVerticalToolbarController>
{
    SCFeatureReference *_portraitModeRef;
    SCFeatureReference *_depthCaptureModeRef;
    SCFeatureReference *_lensCarouselRef;
    SCDisposableObserver *_disposableObserver;
}

- (void).cxx_destruct;
- (void)activate;
- (id)initWithPortraitMode:(id)arg1 depthCaptureMode:(id)arg2 lensCarousel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

