//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCCoreCameraOpenLogger, SCFeature<SCFeatureCameraLiveDisplay>;

@protocol SCFeatureCameraLiveDisplay
- (SCFeature<SCFeatureCameraLiveDisplay> *)liveDisplayVendPointer;
- (void)logOnNextFrameReceivedWithLogger:(SCCoreCameraOpenLogger *)arg1;
- (void)captureStartedWhileCameraViewControllerIsActive;
- (void)captureStoppedWhileCameraViewControllerIsActive;
@end

