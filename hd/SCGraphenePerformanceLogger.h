//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCQueuePerformer;

@interface SCGraphenePerformanceLogger : NSObject
{
    id <SCGrapheneInstanceProviding> _grapheneInstanceProvider;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_uniqueIdToLogItem;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)logTimeMetricEndWithUniqueId:(id)arg1;
- (void)logHistogramWithUniqueId:(id)arg1 value:(long long)arg2;
- (void)incrementCounterWithUniqueId:(id)arg1;
- (void)updateMetricWithUniqueId:(id)arg1 dimensionNameToValue:(id)arg2;
- (void)logTimeMetricStart:(id)arg1 uniqueId:(id)arg2;
- (id)initWithGrapheneInstanceProvider:(id)arg1;

@end

