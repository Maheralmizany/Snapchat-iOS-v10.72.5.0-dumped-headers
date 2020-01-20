//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureOverlayComposition.h"

@class SCPreviewConfiguration;

@interface SCPreviewFeatureOverlayCompositionImpl : SCFeature <SCPreviewFeatureOverlayComposition>
{
    SCPreviewConfiguration *_configuration;
    id <SCPreviewResources> _resourceProvider;
    id <SCPreviewFeatureOverlayCompositionDelegate> _delegate;
}

@property(nonatomic) __weak id <SCPreviewFeatureOverlayCompositionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_trackingObjectContainerView;
- (id)_geofilterPngDataIfOnlyDrawnFilterAndFitsScreen:(struct CGSize)arg1;
- (void)watermarkOverlayAsynchronouslyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)allVideoTrackedImagesWithCroppingAspectRatio:(double)arg1;
- (void)getOverlayForVideoShouldGenerateThumbnail:(_Bool)arg1 croppingAspectRatio:(double)arg2 callbackQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)getOverlayAndVideoTrackedImagesWithCroppingAspectRatio:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getScreenshotAndOverlaysAsynchronouslyWithCallbackQueue:(id)arg1 croppingAspectRatio:(double)arg2 maxOutputShortSideLength:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)watermarkedScreenshotAsynchronouslyWithCallbackQueue:(id)arg1 croppingAspectRatio:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getScreenshotAsynchronouslyWithCallbackQueue:(id)arg1 croppingAspectRatio:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getScreenshotAsynchronouslyWithRequest:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2;

@end
