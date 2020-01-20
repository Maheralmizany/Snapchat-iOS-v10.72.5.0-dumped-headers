//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMediaPlayerEventBase.h"

@interface SCAMediaPlayerRunningEvent : SCAMediaPlayerEventBase
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setRestartDelayMs:(long long)arg1;
- (void)setPlaybackDurationMs:(long long)arg1;
- (void)setLoopCount:(long long)arg1;
- (void)setFailureType:(long long)arg1;
- (void)setCreativeTools:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

