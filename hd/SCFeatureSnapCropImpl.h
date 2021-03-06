//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSnapCrop.h"
#import "SCPreviewGestureResponder.h"

@class NSString, SCCropOverlayView, SCPreviewConfiguration, SCPreviewView, SCUserSession;

@interface SCFeatureSnapCropImpl : SCFeature <SCFeatureSnapCrop, SCPreviewGestureResponder>
{
    SCCropOverlayView *_overlayView;
    id <SCFeatureSnapCropDelegate> _delegate;
    id <SCCropOverlayViewListener> _listener;
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    SCPreviewView *_previewView;
}

@property(nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak id <SCCropOverlayViewListener> listener; // @synthesize listener=_listener;
@property(nonatomic) __weak id <SCFeatureSnapCropDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCCropOverlayView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (_Bool)_shouldUseAspectFillByDefault:(id)arg1 containerSize:(struct CGSize)arg2 contentScaleFactor:(double)arg3 contentAspectFitSize:(struct CGSize)arg4;
- (struct CGSize)preferredImageSizeForMediaSize:(struct CGSize)arg1 maxImageSize:(struct CGSize)arg2;
- (long long)cropAwareMediaOrientation;
- (struct CGRect)boundsForBorderOverlayView:(id)arg1;
- (_Bool)deactiveCropping;
- (_Bool)activeCroppingWithListener:(id)arg1 animated:(_Bool)arg2;
- (double)croppingAspectRatio;
- (id)currentCroppingState;
- (id)computeCroppingState:(id)arg1 containerView:(id)arg2 contentScaleFactor:(double)arg3 contentAspectFitSize:(struct CGSize)arg4 useAspectFillByDefault:(_Bool)arg5;
- (id)createIdentityCroppingState:(struct CGSize)arg1 containerView:(id)arg2 contentScaleFactor:(double)arg3;
- (id)createInitialCroppingState:(id)arg1 containerView:(id)arg2 contentScaleFactor:(double)arg3 contentAspectFitSize:(struct CGSize)arg4;
- (id)createOverlayViewWithFrame:(struct CGRect)arg1;
- (id)createCropToolBarButtonItemWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)configureWithView:(id)arg1;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 previewLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

