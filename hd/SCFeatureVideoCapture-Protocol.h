//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCameraPreviewEventDelegate.h"

@class SCFuture, SCVideoCaptureConfiguration;

@protocol SCFeatureVideoCapture <SCCameraPreviewEventDelegate>
@property(readonly, nonatomic) SCVideoCaptureConfiguration *captureConfiguration;
@property(readonly, nonatomic) SCFuture *videoFuture;
@property(nonatomic) __weak id <SCFeatureVideoCaptureDelegate> delegate;
@property(nonatomic) double defaultRecordingDuration;
- (SCFuture *)recordedVideo;
- (void)resetView;
- (void)abortRecording;
- (void)stopRecording;
- (void)startRecordingImmediately;
- (void)prepareForRecordingWithConfiguration:(SCVideoCaptureConfiguration *)arg1;
@end

