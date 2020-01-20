//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSMutableDictionary, NSOperationQueue, NSString, SCDisposableObserverLifecycle, SCLazy;

@interface SCMemoryPageViewReporter : NSObject <SCTraceEnabled>
{
    SCLazy *_grapheneLogger;
    SCLazy *_blizzardLogger;
    NSOperationQueue *_memoryPageViewReportQueue;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    long long _maxMemoryUsageInBytes;
    NSMutableDictionary *_reportedEventCountMap;
}

- (void).cxx_destruct;
- (void)_reset;
- (void)_reportGrapheneMetricWithFinishedPageName:(id)arg1 prevPageName:(id)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4;
- (void)_reportBlizzardMetricWithFinishedPageName:(id)arg1 prevPageName:(id)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4;
- (void)_reportMetricWithFinishedPageName:(id)arg1 prevPageName:(id)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4;
- (void)_didChangeCurrentPageEvent:(id)arg1;
- (void)_updateMemoryUsageStatus:(id)arg1;
- (void)subscribeOnMemoryUsageSnapshot:(id)arg1 currentPageEvent:(id)arg2;
- (id)initWithGrapheneLogger:(id)arg1 blizzardLogger:(id)arg2 reportQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

