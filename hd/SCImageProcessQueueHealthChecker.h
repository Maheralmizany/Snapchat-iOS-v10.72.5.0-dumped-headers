//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>, SCImageProcessQueue;

@interface SCImageProcessQueueHealthChecker : NSObject
{
    SCImageProcessQueue *_queue;
    double _lastCheckTime;
    long long _failureCount;
    NSObject<OS_dispatch_semaphore> *_s;
    unsigned long long _lastRequestIdentifier;
}

- (void).cxx_destruct;
- (_Bool)run;
- (id)initWithImageProcessQueue:(id)arg1;

@end

