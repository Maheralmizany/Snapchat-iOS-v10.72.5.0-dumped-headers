//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCAdInteractionTimer : NSObject
{
    _Bool _isActive;
    double _mediaDurationMillis;
    double _maxDurationMillis;
    double _totalDurationMillis;
    double _startTimeStamp;
}

@property(nonatomic) double startTimeStamp; // @synthesize startTimeStamp=_startTimeStamp;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) double totalDurationMillis; // @synthesize totalDurationMillis=_totalDurationMillis;
@property(nonatomic) double maxDurationMillis; // @synthesize maxDurationMillis=_maxDurationMillis;
@property(nonatomic) double mediaDurationMillis; // @synthesize mediaDurationMillis=_mediaDurationMillis;
- (double)getTimeStamp;
- (void)_updateTotalMillis:(double)arg1;
- (void)_updateIntervalMillis:(double)arg1;
- (double)_getMaxDurationMillisWithCapAtDuration:(_Bool)arg1;
- (double)_getTotalDurationMillisWithCapAtDuration:(_Bool)arg1;
- (double)getCurrentDurationMillis;
- (double)getUncappedMaxDurationMillis;
- (double)getUncappedTotalDurationMillis;
- (double)getMaxDurationMillis;
- (double)getTotalMillis;
- (void)reset;
- (void)stop;
- (void)start;
- (id)initWithMediaDurationMillis:(double)arg1;

@end

