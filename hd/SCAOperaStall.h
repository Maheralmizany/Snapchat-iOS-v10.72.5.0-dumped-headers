//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCAOperaStall : SCAMapSerializable
{
}

- (void)setType:(long long)arg1;
- (void)setElapsedTimeMs:(long long)arg1;
- (void)setDurationMs:(long long)arg1;
- (void)setBandwidthConnectionClass:(id)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

