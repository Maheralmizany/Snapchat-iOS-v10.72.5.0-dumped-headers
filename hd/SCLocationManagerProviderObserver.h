//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLocationObserver.h"
#import "SCObserving.h"

@class NSString, SCLocationManager;

@interface SCLocationManagerProviderObserver : NSObject <SCLocationObserver, SCObserving>
{
    SCLocationManager *_locationManager;
    id <SCLocationRequest> _locationRequest;
    _Bool _isObserving;
}

- (void).cxx_destruct;
- (void)unobserve;
- (id)locationObserverWantsToMonitorBeaconRegions;
- (_Bool)locationObserverWantsBackgroundLocationMonitoring;
- (_Bool)locationObserverWantsActiveHeadingMonitoring;
- (double)locationObserverDesiredAccuracy;
- (id)locationObserverIdentifier;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithLocationManager:(id)arg1 locationRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
