//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUnifiedProfileBaseEvent.h"

@interface SCAUnifiedProfileChatMediaView : SCAUnifiedProfileBaseEvent
{
}

- (void)setTimeViewedSec:(double)arg1;
- (void)setMessageType:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setLoadingTimeSec:(double)arg1;
- (void)setChatMediaOpenSource:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

