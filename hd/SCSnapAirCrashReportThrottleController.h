//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCSnapAirCrashReportThrottleController : NSObject
{
    NSMutableDictionary *_reportRetryData;
}

- (void).cxx_destruct;
- (id)_getOrCreateNewForId:(id)arg1;
- (_Bool)_hasReachedMaxRetryForId:(id)arg1;
- (double)_computeBackoff:(long long)arg1;
- (_Bool)incrementRetryCountForId:(id)arg1 isInfiniteRetry:(_Bool)arg2;
- (void)setServerBackoffForId:(id)arg1 serverBackoff:(double)arg2;
- (long long)currentRetryCountForId:(id)arg1;
- (double)backoffForId:(id)arg1;
- (id)init;

@end

