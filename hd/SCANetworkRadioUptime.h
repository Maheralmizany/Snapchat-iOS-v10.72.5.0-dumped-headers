//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCANetworkRadioUptime : SCAMapSerializable
{
}

- (void)setNetworkWifiWakeupCount:(long long)arg1;
- (void)setNetworkWifiActiveTimeSec:(long long)arg1;
- (void)setNetworkWakeupAttributionMap:(id)arg1;
- (void)setNetworkMobileWakeupCount:(long long)arg1;
- (void)setNetworkMobileLowTimeSec:(long long)arg1;
- (void)setNetworkMobileHighTimeSec:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
