//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAStartupCommandLatency : SCAUserTrackedEvent
{
}

- (void)setRelatedCommandId:(id)arg1;
- (void)setExecutionQueueQualityOfService:(long long)arg1;
- (void)setExecutionQueueIdentifier:(id)arg1;
- (void)setDurationUs:(long long)arg1;
- (void)setCommandId:(id)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
