//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAOperaSnapPlaybackSession : SCAUserTrackedEvent
{
}

- (void)setViewSource:(long long)arg1;
- (void)setStoryCount:(long long)arg1;
- (void)setStalledOnStart:(_Bool)arg1;
- (void)setStalledOnExit:(_Bool)arg1;
- (void)setStallFreeSnapCount:(long long)arg1;
- (void)setStallDurationMs:(long long)arg1;
- (void)setStallCount:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setSessionDurationMs:(long long)arg1;
- (void)setOperaVersion:(long long)arg1;
- (void)setOperaSessionId:(id)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setContentType:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

