//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppDataLoss : SCAUserTrackedEvent
{
}

- (void)setRejectedEventCount:(long long)arg1;
- (void)setOverflowedP0EventCount:(long long)arg1;
- (void)setOverflowedEventCount:(long long)arg1;
- (void)setOverflowedCriticalEventCount:(long long)arg1;
- (void)setFirstFailureTs:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

