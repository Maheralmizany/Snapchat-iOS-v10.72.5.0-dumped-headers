//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCASnapAccessTokenFetch : SCAUserTrackedEvent
{
}

- (void)setScope:(id)arg1;
- (void)setGetMode:(id)arg1;
- (void)setFetchLatencyMs:(long long)arg1;
- (void)setCacheHit:(_Bool)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

