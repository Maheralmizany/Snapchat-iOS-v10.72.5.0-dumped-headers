//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCaptureFaceDetectionParser, SCCaptureFaceDetectorTrigger, SCCaptureResource, SCQueuePerformer;

@protocol SCCaptureFaceDetector <NSObject>
@property(readonly, nonatomic) SCCaptureFaceDetectionParser *parser;
@property(readonly, nonatomic) SCCaptureFaceDetectorTrigger *trigger;
- (void)stopDetection;
- (void)startDetection;
- (SCQueuePerformer *)detectionPerformer;
- (id)initWithCaptureResource:(SCCaptureResource *)arg1;
@end

