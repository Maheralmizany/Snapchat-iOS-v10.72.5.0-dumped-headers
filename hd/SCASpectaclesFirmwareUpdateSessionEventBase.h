//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@interface SCASpectaclesFirmwareUpdateSessionEventBase : SCASpectaclesTrackedEvent
{
}

- (void)setUpdateType:(long long)arg1;
- (void)setUpdateSessionId:(id)arg1;
- (void)setTargetFirmwareVersion:(id)arg1;
- (void)setDurationSec:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

