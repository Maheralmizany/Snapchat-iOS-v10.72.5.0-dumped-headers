//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNNetworkTypesDeprecatedRankingSignal : NSObject
{
    _Bool _wifiOnly;
    _Bool _isUserInitiated;
    long long _priority;
    double _requestTimestamp;
    long long _concurrencyControlPriority;
}

+ (id)DeprecatedRankingSignalWithWifiOnly:(_Bool)arg1 isUserInitiated:(_Bool)arg2 priority:(long long)arg3 requestTimestamp:(double)arg4 concurrencyControlPriority:(long long)arg5;
@property(readonly, nonatomic) long long concurrencyControlPriority; // @synthesize concurrencyControlPriority=_concurrencyControlPriority;
@property(readonly, nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) _Bool isUserInitiated; // @synthesize isUserInitiated=_isUserInitiated;
@property(readonly, nonatomic) _Bool wifiOnly; // @synthesize wifiOnly=_wifiOnly;
- (id)description;
- (id)initWithWifiOnly:(_Bool)arg1 isUserInitiated:(_Bool)arg2 priority:(long long)arg3 requestTimestamp:(double)arg4 concurrencyControlPriority:(long long)arg5;

@end

