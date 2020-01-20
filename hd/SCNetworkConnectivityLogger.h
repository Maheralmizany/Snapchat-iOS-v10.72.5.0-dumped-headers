//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNetworkConnectivityListener.h"

@class NSObject<OS_dispatch_source>, NSString, SCQueueWithCapacity;

@interface SCNetworkConnectivityLogger : NSObject <SCNetworkConnectivityListener>
{
    SCQueueWithCapacity *_connectivityLogs;
    id <SCPerforming> _loggerPerformer;
    NSString *_currentWifiSSID;
    NSObject<OS_dispatch_source> *_wifiSSIDUpdateTimer;
    double _lastNetworkStatusChangedTimeStamp;
}

+ (id)sharedInstance;
@property(readonly) double lastNetworkStatusChangedTimeStamp; // @synthesize lastNetworkStatusChangedTimeStamp=_lastNetworkStatusChangedTimeStamp;
- (void).cxx_destruct;
- (_Bool)shouldGetWifiSSID;
- (void)_stopScanWifiSSID;
- (void)_updateWifiSSID;
- (id)_createSessionTimerWithInterval:(double)arg1 queue:(id)arg2;
- (void)_startScanWifiSSID;
- (id)getCurrentWifiSSID;
- (id)connectivityChangesWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)connectivityReportWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
