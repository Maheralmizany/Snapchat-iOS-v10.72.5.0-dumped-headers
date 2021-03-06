//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLocationListener.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface SCLocationProviderRequestWithTimeoutObserver : NSObject <SCLocationListener>
{
    id <SCLocationProvider> _locationProvider;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_locationTimerQueue;
    id <SCLocationRequest> _locationRequest;
    CDUnknownBlockType _timeoutBlock;
    id <SCObserving> _locationObservationToken;
    CDUnknownBlockType _callbackBlock;
}

- (void).cxx_destruct;
- (void)_locationListenerHelperWithLocation:(id)arg1;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)_stopObserving;
- (void)_dispatchStopObserving;
- (void)_deliverFinalCallbackAndStopObserving;
- (void)_startWithTimeout:(double)arg1 sendInitialLocation:(_Bool)arg2;
- (id)initWithLocationProvider:(id)arg1 continueInBackground:(_Bool)arg2 desiredAccuracy:(double)arg3 callbackQueue:(id)arg4 callbackBlock:(CDUnknownBlockType)arg5 trackingIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

