//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAggregatedDataConsumptionMetrics : SCAUserTrackedEvent
{
}

- (void)setNumOfBytesDownloaded:(long long)arg1;
- (void)setNumOfBytesConsumed:(long long)arg1;
- (void)setMediaType:(id)arg1;
- (void)setFetchNetworkReachability:(long long)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setFetchAppState:(long long)arg1;
- (void)setFeatureType:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setDataSaverEnabled:(_Bool)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

