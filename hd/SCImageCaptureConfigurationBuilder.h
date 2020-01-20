//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SCManagedCapturerState;

@interface SCImageCaptureConfigurationBuilder : NSObject
{
    NSNumber *_exposureCaptureDeadline;
    _Bool _isStabilizationDisabled;
    double _aspectRatio;
    NSString *_captureSessionID;
    _Bool _shouldCaptureFromVideo;
    double _zoomFactor;
    SCManagedCapturerState *_capturerState;
    float _fieldOfView;
    _Bool _lensInitiatedCapture;
    _Bool _isMainCamera;
}

+ (id)withImageCaptureConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)setIsMainCamera:(_Bool)arg1;
- (id)setLensInitiatedCapture:(_Bool)arg1;
- (id)setFieldOfView:(float)arg1;
- (id)setCapturerState:(id)arg1;
- (id)setZoomFactor:(double)arg1;
- (id)setShouldCaptureFromVideo:(_Bool)arg1;
- (id)setCaptureSessionID:(id)arg1;
- (id)setAspectRatio:(double)arg1;
- (id)setIsStabilizationDisabled:(_Bool)arg1;
- (id)setExposureCaptureDeadline:(id)arg1;
- (id)build;

@end
