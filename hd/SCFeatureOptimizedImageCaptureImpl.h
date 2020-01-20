//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureOptimizedImageCapture.h"

@class NSNumber, NSString;

@interface SCFeatureOptimizedImageCaptureImpl : SCFeature <SCFeatureOptimizedImageCapture>
{
    _Bool _isOptimizationEnabled;
    _Bool _isStabilizationDisabled;
    NSNumber *_captureExposureDeadline;
}

@property(nonatomic) _Bool isStabilizationDisabled; // @synthesize isStabilizationDisabled=_isStabilizationDisabled;
@property(readonly, nonatomic) _Bool isOptimizationEnabled; // @synthesize isOptimizationEnabled=_isOptimizationEnabled;
@property(retain, nonatomic) NSNumber *captureExposureDeadline; // @synthesize captureExposureDeadline=_captureExposureDeadline;
- (void).cxx_destruct;
- (id)_unspecifiedCameraConfiguration:(id)arg1;
- (id)_backCameraConfiguration:(id)arg1;
- (id)_frontCameraConfiguration:(id)arg1;
- (id)updateCaptureConfiguration:(id)arg1;
- (id)initWithImageCapture:(id)arg1 isOptimizationEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

