//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCANetworkEventBase.h"

@interface SCANetworkTask : SCANetworkEventBase
{
}

- (void)setUserContext:(id)arg1;
- (void)setTimeSinceAppStart:(long long)arg1;
- (void)setTaskUserBlockingQueuingLatency:(long long)arg1;
- (void)setTaskUserBlockingNetworkLatency:(long long)arg1;
- (void)setTaskSuccess:(_Bool)arg1;
- (void)setTaskQueuingLatency:(long long)arg1;
- (void)setTaskNetworkLatency:(long long)arg1;
- (void)setTaskLatency:(long long)arg1;
- (void)setTaskErrorMsg:(id)arg1;
- (void)setTaskErrorCode:(long long)arg1;
- (void)setTaskErrorCategory:(long long)arg1;
- (void)setTaskContext:(id)arg1;
- (void)setRttEstimationStart:(long long)arg1;
- (void)setRttEstimationEnd:(long long)arg1;
- (void)setRequestURI:(id)arg1;
- (void)setReachabilityStart:(long long)arg1;
- (void)setReachabilityHasChanged:(_Bool)arg1;
- (void)setReachabilityEnd:(long long)arg1;
- (void)setPopEdgeInfo:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setBandwidthRangeClassStart:(id)arg1;
- (void)setBandwidthRangeClassEnd:(id)arg1;
- (void)setBandwidthEstimationStart:(long long)arg1;
- (void)setBandwidthEstimationEnd:(long long)arg1;
- (void)setBandwidthClassStart:(long long)arg1;
- (void)setBandwidthClassEnd:(long long)arg1;
- (void)setAppStartType:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

