//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCCameraVolumeButtonHandler;

@protocol SCFeatureVolumeButtonCaptureDelegate
- (void)volumeButtonCaptureEnded;
- (void)volumeButtonCaptureBegan;
- (_Bool)volumeButtonCaptureShouldAllowEnd:(id <SCFeatureVolumeButtonCapture>)arg1;
- (_Bool)volumeButtonCaptureShouldAllowBegin:(id <SCFeatureVolumeButtonCapture>)arg1;
- (SCCameraVolumeButtonHandler *)volumeButtonCaptureHandler:(id <SCFeatureVolumeButtonCapture>)arg1;
@end
