//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNotificationCenter, NSObject<OS_dispatch_semaphore>, SCQueueWithCapacity;

@interface SCUserTraceLogger : NSObject
{
    NSArray *_listeners;
    NSNotificationCenter *_notificationCenter;
    int _currentSessionTraceCount;
    NSObject<OS_dispatch_semaphore> *_tracesSemaphore;
    SCQueueWithCapacity *_traces;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_didEnterBackground:(id)arg1;
- (void)_observerBackgrounding;
- (void)logUserTraceScrollingEventWithStartingY:(double)arg1 endingY:(double)arg2 pageName:(id)arg3;
- (void)logUserTraceEvent:(id)arg1;
@property(readonly, nonatomic) NSArray *lastFiveUserTraces;
- (id)initWithNotificationCenter:(id)arg1 listeners:(id)arg2;

@end

