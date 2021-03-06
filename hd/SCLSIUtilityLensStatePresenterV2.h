//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLSIUtilityLensStatePresenterV2.h"

@class NSString, NSTimer, SCFeatureSIUtilityLensNoResultTooltipController, SCFeatureSIUtilityLensPermanentTooltipController, SCFeatureSIUtilityLensScanningTooltipController, SCLSIAmazonLensView, SCLSIPhotomathLensView, SCLSIScanDataState, SCLSIShazamLensView, SCLSIUtilityLensBackgroundView, SCLSIUtilityLensState, SCLSIUtilityLensView, SCLSIUtilityLensViewModel, UIGestureRecognizer, UIView;

@interface SCLSIUtilityLensStatePresenterV2 : NSObject <SCLSIUtilityLensStatePresenterV2>
{
    UIView *_parentView;
    SCLSIUtilityLensViewModel *_viewModel;
    UIGestureRecognizer *_gestureRecognizer;
    NSTimer *_failureStateTimer;
    SCLSIScanDataState *_currentScanDataState;
    SCLSIAmazonLensView *_amazonLensView;
    SCLSIShazamLensView *_shazamLensView;
    SCLSIPhotomathLensView *_photomathLensView;
    SCLSIUtilityLensView *_lensView;
    SCLSIUtilityLensBackgroundView *_backgroundView;
    id <SCLSIUtilityLensStatePresenterV2Delegate> _delegate;
    SCLSIUtilityLensState *_lensState;
    SCFeatureSIUtilityLensPermanentTooltipController *_permanentTooltipController;
    SCFeatureSIUtilityLensScanningTooltipController *_scanningTooltipController;
    SCFeatureSIUtilityLensNoResultTooltipController *_noResultTooltipController;
    struct CGRect _boundingBoxRatiosForCurrentContext;
}

@property(readonly, nonatomic) struct CGRect boundingBoxRatiosForCurrentContext; // @synthesize boundingBoxRatiosForCurrentContext=_boundingBoxRatiosForCurrentContext;
@property(readonly, nonatomic) SCFeatureSIUtilityLensNoResultTooltipController *noResultTooltipController; // @synthesize noResultTooltipController=_noResultTooltipController;
@property(readonly, nonatomic) SCFeatureSIUtilityLensScanningTooltipController *scanningTooltipController; // @synthesize scanningTooltipController=_scanningTooltipController;
@property(readonly, nonatomic) SCFeatureSIUtilityLensPermanentTooltipController *permanentTooltipController; // @synthesize permanentTooltipController=_permanentTooltipController;
@property(readonly, copy, nonatomic) SCLSIUtilityLensState *lensState; // @synthesize lensState=_lensState;
@property(readonly, nonatomic) __weak id <SCLSIUtilityLensStatePresenterV2Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetScanState;
- (void)_invaildateFailureStateTimer;
- (void)_beginFailureStateTimer;
- (void)_hideAllTooltips;
- (void)_setTooltipsForContext:(struct NSString *)arg1;
- (id)_lensViewForContext:(struct NSString *)arg1;
- (void)handleGesture:(id)arg1;
- (void)didBeginGesture:(id)arg1;
- (void)setShazamAnimationEnabled:(_Bool)arg1;
- (_Bool)isPointInsideScanStateUI:(struct CGPoint)arg1;
- (void)hideUtilityLensUIWithBackgroundUIVisible:(_Bool)arg1;
- (void)previewScanStateUIForState:(unsigned long long)arg1 context:(struct NSString *)arg2;
- (void)showScanStateUIForDataState:(id)arg1 scanState:(unsigned long long)arg2 context:(struct NSString *)arg3;
- (void)createViewModel;
- (void)setLensState:(id)arg1;
- (id)initWithDelegate:(id)arg1 parentView:(id)arg2 permanentTooltipController:(id)arg3 scanningTooltipController:(id)arg4 noResultTooltipController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

