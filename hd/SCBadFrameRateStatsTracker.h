//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SCBadFrameRateStatsTracker : NSObject
{
    double _totalBadFrameDurationMs;
    NSMutableArray *_frameDurationBuckets;
    double _lastFrameTime;
    long long _frameCount;
    _Bool _started;
    _Bool _paused;
}

- (void).cxx_destruct;
- (void)_setBadFrameBucket:(double)arg1;
- (double)totalBadFrameDurationMs;
- (long long)totalFrameCount;
- (id)frameDurationBuckets;
- (void)reset;
- (void)pauseDisplay;
- (void)processFrameTime:(double)arg1;
- (id)init;

@end

