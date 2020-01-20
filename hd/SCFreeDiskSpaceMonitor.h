//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCService.h"

@class NSString, SCFreeDiskSpaceMonitorListenerAnnouncer, SCSentinel;

@interface SCFreeDiskSpaceMonitor : NSObject <SCService>
{
    unsigned long long _diskAvailabilityMode;
    SCFreeDiskSpaceMonitorListenerAnnouncer *_announcer;
    SCSentinel *_sentinel;
    double _lastCheckedTime;
}

+ (id)sharedInstance;
+ (id)performer;
- (void).cxx_destruct;
- (id)_nextNotifier;
- (id)dedicatedQueue;
- (void)runWithServiceTerm:(id)arg1;
- (void)_recheckFileSystemFreeDiskSpace;
- (void)_processDiskChangeNotificationUpdate;
- (void)_startMonitoring;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

