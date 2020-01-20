//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCStoriesRetryPolicy : NSObject <NSCopying>
{
    unsigned long long _signalsToRetry;
    long long _maxRetryCountPerSession;
    double _minTimeElapsedBetweenRetries;
}

@property(readonly, nonatomic) double minTimeElapsedBetweenRetries; // @synthesize minTimeElapsedBetweenRetries=_minTimeElapsedBetweenRetries;
@property(readonly, nonatomic) long long maxRetryCountPerSession; // @synthesize maxRetryCountPerSession=_maxRetryCountPerSession;
@property(readonly, nonatomic) unsigned long long signalsToRetry; // @synthesize signalsToRetry=_signalsToRetry;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSignalsToRetry:(unsigned long long)arg1 maxRetryCountPerSession:(long long)arg2 minTimeElapsedBetweenRetries:(double)arg3;

@end

