//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, SCQueuePerformer;

@interface SCDiscoverFeedPerformanceLogger : NSObject
{
    SCQueuePerformer *_performer;
    double _logStartTime;
    double _lastStepTimeStamp;
    long long _sourceType;
    long long _ghostLogState;
    NSMutableDictionary *_stepNameToMillisecs;
    NSMutableArray *_loggerWarnings;
    _Bool _hasLoggedSwipeInDiscoverFeedViewReadyLatency;
    NSMutableSet *_loggedViewReadyType;
    NSMutableSet *_loggedGhostToDFViewReadyType;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)logDiscoverFeedViewReady:(double)arg1 sourcePage:(long long)arg2 viewReadyType:(long long)arg3 cacheLoaded:(_Bool)arg4 contentReadyType:(long long)arg5;
- (void)_logDebugWarningInfo:(id)arg1;
- (void)_didEnterBackground;
- (void)_didLogoutNotification;
- (void)_reset;
- (void)logEndGhostToDiscoverFeedWithTimeSpentWaiting:(double)arg1 contentReadyType:(long long)arg2;
- (void)logStep:(id)arg1;
- (void)logStartGhostToDiscoverFeedWithSourceType:(long long)arg1;
- (id)initPrivate;

@end

