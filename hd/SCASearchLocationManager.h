//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCASearchLocationManager : SCAUserTrackedEvent
{
}

- (void)setVerticalAccuracyInMeters:(long long)arg1;
- (void)setPageType:(long long)arg1;
- (void)setHorizontalAccuracyInMeters:(long long)arg1;
- (void)setAgeInSeconds:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

