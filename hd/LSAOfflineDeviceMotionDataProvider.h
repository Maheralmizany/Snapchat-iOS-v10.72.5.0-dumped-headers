//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSADeviceMotionDataProviderProtocol.h"

@class NSArray, NSString;

@interface LSAOfflineDeviceMotionDataProvider : NSObject <LSADeviceMotionDataProviderProtocol>
{
    NSArray *_deviceMotionData;
    NSArray *_accelerometerData;
    NSArray *_gyroData;
    _Bool _fusedDeviceMotionDataAvailable;
    vector_92a8733f _processedSamples;
    _Bool _requiresCompassAlignment;
    CDStruct_1b6d18a9 _firstCameraCaptureTimestamp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_convertRawMotionToLSADeviceMotionSamples:(CDUnknownBlockType)arg1;
- (void)_convertDeviceMotionToLSASamples:(CDUnknownBlockType)arg1;
- (id)deviceMotion;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdatesWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRawIMUData:(id)arg1 gyroData:(id)arg2 firstCameraCaptureTimestamp:(CDStruct_1b6d18a9)arg3;
- (id)initWithDeviceMotionData:(id)arg1 firstCameraCaptureTimestamp:(CDStruct_1b6d18a9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

