//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFeatureSceneIntelligenceAnalyticsController : NSObject
{
    double _sessionStartTime;
    long long _sessionScanActions;
}

- (void)logSessionCompletion;
- (void)logScanCompletionWithStartTime:(double)arg1 source:(unsigned long long)arg2 exitType:(unsigned long long)arg3 camera:(long long)arg4;
- (void)markScanAction;
- (void)resetSession;

@end

