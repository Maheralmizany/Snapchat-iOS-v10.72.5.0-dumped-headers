//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppStartupComplete : SCAUserTrackedEvent
{
}

- (void)setZslCapture:(_Bool)arg1;
- (void)setUserAction:(id)arg1;
- (void)setStartType:(id)arg1;
- (void)setStartSubType:(id)arg1;
- (void)setSplits:(id)arg1;
- (void)setPowerMode:(id)arg1;
- (void)setMemInfo:(id)arg1;
- (void)setLatencyMillis:(long long)arg1;
- (void)setCpuInfo:(id)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCameraStartType:(long long)arg1;
- (void)setCameraSdk:(id)arg1;
- (void)setCameraDirection:(long long)arg1;
- (void)setAnalyticsVersion:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

