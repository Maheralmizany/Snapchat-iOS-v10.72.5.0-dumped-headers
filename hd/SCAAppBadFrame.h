//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppBadFrame : SCAUserTrackedEvent
{
}

- (void)setUiEventName:(id)arg1;
- (void)setTotalFrameCount:(long long)arg1;
- (void)setTotalDroppedFrameCount:(long long)arg1;
- (void)setPrev_attribution:(id)arg1;
- (void)setPageDurationSec:(long long)arg1;
- (void)setPageDurationBucket:(long long)arg1;
- (void)setFrameBucket8:(long long)arg1;
- (void)setFrameBucket7:(long long)arg1;
- (void)setFrameBucket6:(long long)arg1;
- (void)setFrameBucket5:(long long)arg1;
- (void)setFrameBucket4:(long long)arg1;
- (void)setFrameBucket3:(long long)arg1;
- (void)setFrameBucket2:(long long)arg1;
- (void)setFrameBucket1:(long long)arg1;
- (void)setFrameBucket0:(long long)arg1;
- (void)setEventVisitNum:(long long)arg1;
- (void)setEventDurationMs:(long long)arg1;
- (void)setBadFrameThresholdMs:(long long)arg1;
- (void)setBadFrameDurationMs:(long long)arg1;
- (void)setAttribution:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

