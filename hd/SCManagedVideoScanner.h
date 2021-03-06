//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedDeviceCapacityAnalyzerListener.h"
#import "SCManagedVideoDataSourceListener.h"

@class NSArray, NSObject<OS_dispatch_semaphore>, NSString, SCQueuePerformer, SCSnapScanner, SCUserSession;

@interface SCManagedVideoScanner : NSObject <SCManagedVideoDataSourceListener, SCManagedDeviceCapacityAnalyzerListener>
{
    SCSnapScanner *_snapScanner;
    NSObject<OS_dispatch_semaphore> *_activeSemaphore;
    double _maxFrameDuration;
    double _maxFrameDefaultDuration;
    double _maxFramePassiveDuration;
    float _restCycleOfBusyCycle;
    double _scanStartTime;
    _Bool _active;
    _Bool _shouldEmitEvent;
    CDUnknownBlockType _completionHandler;
    double _scanTimeout;
    long long _devicePosition;
    SCQueuePerformer *_performer;
    NSArray *_codeTypes;
    NSArray *_codeTypesOld;
    CDUnknownBlockType _scanResultsHandler;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 sampleTimestamp:(CDStruct_1b6d18a9)arg3 devicePosition:(long long)arg4;
- (id)_scanCodeTypes;
- (void)_handleSnapScanResult:(id)arg1;
- (void)stopScanAsynchronously;
- (void)startScanAsynchronouslyWithScanConfiguration:(id)arg1;
- (id)initWithMaxFrameDefaultDuration:(double)arg1 maxFramePassiveDuration:(double)arg2 restCycle:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

