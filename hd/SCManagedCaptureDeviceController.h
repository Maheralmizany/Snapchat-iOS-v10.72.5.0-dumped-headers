//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, SCQueuePerformer;

@interface SCManagedCaptureDeviceController : NSObject
{
    NSMapTable *_focusHandlers;
    NSMapTable *_exposureHandlers;
    SCQueuePerformer *_performerThisClassShouldRunOn;
}

- (void).cxx_destruct;
- (void)setDeviceConnectedToCaptureSession:(_Bool)arg1 device:(id)arg2;
- (id)_exposureHandlersForDevice:(id)arg1;
- (id)_focusHandlersForDevice:(id)arg1;
- (void)setDeviceRecording:(_Bool)arg1 device:(id)arg2;
- (void)setExposurePointOfInterestForDevice:(id)arg1 pointOfInterest:(struct CGPoint)arg2 fromUser:(_Bool)arg3;
- (void)setContinuousAutofocusForDevice:(id)arg1;
- (void)setAutofocusPointOfInterest:(struct CGPoint)arg1 device:(id)arg2;
- (id)initWithCaptureResource:(id)arg1;

@end

