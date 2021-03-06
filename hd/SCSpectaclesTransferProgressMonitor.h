//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSpectaclesEventListener.h"

@class NSDate, NSString, SCSpectaclesDevice, SCWeakTimer;

@interface SCSpectaclesTransferProgressMonitor : NSObject <SCSpectaclesEventListener>
{
    SCWeakTimer *_uptimeTimer;
    NSDate *_timerStartDate;
    double _cumulativeWatchdogUptime;
    long long _failureCount;
    SCSpectaclesDevice *_device;
    id <SCSpectaclesLibraryLogger> _analyticsLogger;
}

@property(nonatomic) __weak id <SCSpectaclesLibraryLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(nonatomic) __weak SCSpectaclesDevice *device; // @synthesize device=_device;
@property(nonatomic) long long failureCount; // @synthesize failureCount=_failureCount;
@property(nonatomic) double cumulativeWatchdogUptime; // @synthesize cumulativeWatchdogUptime=_cumulativeWatchdogUptime;
@property(retain, nonatomic) NSDate *timerStartDate; // @synthesize timerStartDate=_timerStartDate;
@property(retain, nonatomic) SCWeakTimer *uptimeTimer; // @synthesize uptimeTimer=_uptimeTimer;
- (void).cxx_destruct;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 onFirmwareUpdate:(unsigned long long)arg2 progress:(float)arg3;
- (void)_uptimeWatchdogTimedOut;
- (void)_stopUptimeWatchdog;
- (void)_startUptimeWatchdog;
- (void)_kickUptimeWatchdog;
- (id)initWithDevice:(id)arg1 announcer:(id)arg2 analyticsLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

