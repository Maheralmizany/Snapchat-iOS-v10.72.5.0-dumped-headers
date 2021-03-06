//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLocationManagerOperationalListener.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, SCLocationManager, SCQueuePerformer;

@interface SCGPSLogger : NSObject <SCLocationManagerOperationalListener>
{
    SCLocationManager *_locationManager;
    SCQueuePerformer *_performer;
    NSMutableSet *_activeLocationManagers;
    NSString *_startPage;
    CDUnknownBlockType _appBatterySessionIdProvider;
    NSMutableSet *_locationUpdateCallers;
    NSMutableDictionary *_locationUpdateRequestDict;
    NSDate *_foregroundTimestamp;
    double _locationUpdateTotalDurationPerSession;
    NSDate *_locationUpdateStartTime;
    _Bool _isGPSOn;
    id <SCPageViewGPSLogging> _pageViewLogger;
}

+ (id)shared;
@property _Bool isGPSOn; // @synthesize isGPSOn=_isGPSOn;
@property(nonatomic) __weak id <SCPageViewGPSLogging> pageViewLogger; // @synthesize pageViewLogger=_pageViewLogger;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 wasGrantedAuthorization:(_Bool)arg2;
- (void)locationManager:(id)arg1 observerStoppedUpdating:(id)arg2;
- (void)locationManager:(id)arg1 observerStartedUpdating:(id)arg2;
- (void)locationManager:(id)arg1 stoppedCLManager:(id)arg2;
- (void)locationManager:(id)arg1 startedCLManager:(id)arg2;
- (void)_didEnterBackgroundAtTime:(id)arg1;
- (void)_willEnterForegroundAtTime:(id)arg1;
- (void)willEnterForeground;
- (id)_gpsUsageFromAppOpenUntilTimestamp:(id)arg1 onAppBackground:(_Bool)arg2;
- (id)gpsUsageFromAppOpenUntilTimestamp:(id)arg1 onAppBackground:(_Bool)arg2;
- (void)_logLocationUpdateRequestEndForCaller:(id)arg1 stoppedByCaller:(_Bool)arg2 endTime:(id)arg3;
- (void)_logLocationUpdateEndAtTime:(id)arg1;
- (void)_locationManagerDidRequestStopUpdatingLocationWithCaller:(id)arg1 endTime:(id)arg2;
- (void)locationManagerDidRequestStopUpdatingLocationWithCaller:(id)arg1;
- (void)_locationManagerDidRequestStartUpdatingLocationWithCaller:(id)arg1 startTime:(id)arg2 appState:(long long)arg3;
- (void)locationManagerDidRequestStartUpdatingLocationWithCaller:(id)arg1;
- (void)_locationManagerDidStopUpdatingLocation:(id)arg1 endTime:(id)arg2;
- (void)_locationManagerDidStartUpdatingLocation:(id)arg1 startTime:(id)arg2;
- (void)injectAppBatterySessionIdProvider:(CDUnknownBlockType)arg1;
- (id)initWithLocationManager:(id)arg1 queuePerformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

