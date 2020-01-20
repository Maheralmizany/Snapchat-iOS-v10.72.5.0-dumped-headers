//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@protocol SCManagedCapturerState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool batchCaptureActive;
@property(readonly, nonatomic) _Bool lensProcessorReady;
@property(readonly, nonatomic) _Bool liveVideoStreaming;
@property(readonly, nonatomic) _Bool arSessionActive;
@property(readonly, nonatomic) _Bool lensesActive;
@property(readonly, nonatomic) _Bool torchActive;
@property(readonly, nonatomic) _Bool flashActive;
@property(readonly, nonatomic) _Bool torchSupported;
@property(readonly, nonatomic) _Bool flashSupported;
@property(readonly, nonatomic) double zoomFactor;
@property(readonly, nonatomic) long long devicePosition;
@property(readonly, nonatomic) _Bool adjustingFocus;
@property(readonly, nonatomic) _Bool adjustingExposure;
@property(readonly, nonatomic) _Bool lowLightCondition;
@property(readonly, nonatomic) _Bool isStabilizationModeActive;
@property(readonly, nonatomic) _Bool isDepthCaptureModeActive;
@property(readonly, nonatomic) _Bool isPortraitModeActive;
@property(readonly, nonatomic) _Bool isNightModeActive;
@property(readonly, nonatomic) _Bool isRunning;
@end
