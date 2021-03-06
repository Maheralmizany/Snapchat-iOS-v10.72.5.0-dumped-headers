//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCFrameProcessLatencyReporter, SCPortraitModeFilterListenerAnnouncer;

@interface SCPortraitModeFilter : NSObject
{
    struct shared_ptr<OE::Segmentation::System> _oeSegmentor;
    struct shared_ptr<ShaderProcess::BokehEffect> _bokehEffect;
    struct shared_ptr<OE::FileFactory> _modelFileFactory;
    SCFrameProcessLatencyReporter *_latencyReporter;
    _Bool _lastFrameBlurred;
    SCPortraitModeFilterListenerAnnouncer *_announcer;
}

@property(readonly, nonatomic) SCPortraitModeFilterListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Mat)_bokehPortraitImageFromImageMat:(struct Mat)arg1 portraitMask:(struct Mat)arg2;
- (id)processImage:(id)arg1;
- (struct Mat)processMat:(struct Mat)arg1 alwaysBlur:(_Bool)arg2;
- (struct Mat)_matRotateAntiClockWise90:(struct Mat)arg1;
- (struct Mat)_matRotateClockWise90:(struct Mat)arg1;
- (struct MaskParams)_maskParams;
- (struct GlobalParams)_segmentationParams;
- (int)deviceClass;
- (id)initWithProcessLatencyReporter:(id)arg1;

@end

