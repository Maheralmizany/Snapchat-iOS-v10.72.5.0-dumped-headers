//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureDeviceMotionCapture.h"
#import "SCManagedCapturerListener.h"

@class CMAccelerometerData, CMDeviceMotion, CMGyroData, NSLock, NSString;

@interface SCFeatureDeviceMotionCaptureImpl : SCFeature <SCManagedCapturerListener, SCFeatureDeviceMotionCapture>
{
    id <SCCapturer> _capturer;
    NSString *_deviceMotionUpdatesToken;
    NSString *_rawDeviceMotionUpdatesToken;
    _Bool _shouldUseDeviceMotionCapture;
    _Bool _shouldUseRawImuCapture;
    NSLock *_deviceMotionCaptureLock;
    NSLock *_accelerometerCaptureLock;
    NSLock *_gyroscopeCaptureLock;
    CMDeviceMotion *_mostRecentDeviceMotion;
    CMGyroData *_mostRecentGyroData;
    CMAccelerometerData *_mostRecentAccelerometerData;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) CMAccelerometerData *mostRecentAccelerometerData; // @synthesize mostRecentAccelerometerData=_mostRecentAccelerometerData;
@property(retain, nonatomic) CMGyroData *mostRecentGyroData; // @synthesize mostRecentGyroData=_mostRecentGyroData;
@property(retain, nonatomic) CMDeviceMotion *mostRecentDeviceMotion; // @synthesize mostRecentDeviceMotion=_mostRecentDeviceMotion;
- (void).cxx_destruct;
- (void)_tearDownMotionUpdates;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didAppendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 sampleMetadata:(id)arg3;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (id)getMostRecentAccelerometerData;
- (id)getMostRecentGyroData;
- (id)getMostRecentDeviceMotion;
- (id)initWithCapturer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

