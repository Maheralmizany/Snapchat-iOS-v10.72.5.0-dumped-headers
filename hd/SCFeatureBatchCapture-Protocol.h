//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeatureCameraBottomUIContender.h"
#import "SCFeatureImageCaptureDelegate.h"
#import "SCFeatureVideoCaptureDelegate.h"

@class SCBatchCaptureConfiguration, SCFuture;

@protocol SCFeatureBatchCapture <SCFeatureImageCaptureDelegate, SCFeatureVideoCaptureDelegate, SCFeatureCameraBottomUIContender>
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
@property(nonatomic) __weak id <SCFeatureBatchCaptureDelegate> delegate;
- (void)setIsCapturing:(_Bool)arg1;
- (void)setLastSegmentSnappablesDataWithFuture:(SCFuture *)arg1;
- (_Bool)shouldShowPreviewButton;
- (void)prepareForRecording;
- (void)reset;
- (SCBatchCaptureConfiguration *)batchCaptureConfiguration;
@end

