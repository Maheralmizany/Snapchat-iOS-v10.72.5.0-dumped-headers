//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCABitmojiFetchRequests : SCAUserTrackedEvent
{
}

- (void)setSource:(id)arg1;
- (void)setRequestCount:(long long)arg1;
- (void)setFullLatencyMinMs:(long long)arg1;
- (void)setFullLatencyMaxMs:(long long)arg1;
- (void)setFullLatencyAvgMs:(long long)arg1;
- (void)setFetchLatencyMinMs:(long long)arg1;
- (void)setFetchLatencyMaxMs:(long long)arg1;
- (void)setFetchLatencyAvgMs:(long long)arg1;
- (void)setFailureCount:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

