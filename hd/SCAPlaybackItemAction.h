//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAPlaybackItemAction : SCAUserTrackedEvent
{
}

- (void)setViewSource:(long long)arg1;
- (void)setPlaySource:(long long)arg1;
- (void)setItemType:(long long)arg1;
- (void)setItemLoadedThreshold:(long long)arg1;
- (void)setItemLoadedCount:(long long)arg1;
- (void)setItemLoaded:(_Bool)arg1;
- (void)setItemLoadState:(long long)arg1;
- (void)setItemId:(id)arg1;
- (void)setItemGroupId:(id)arg1;
- (void)setFeatureMinorName:(long long)arg1;
- (void)setFeatureMajorName:(long long)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setConnectionClass:(long long)arg1;
- (void)setBandwidthSampleSize:(long long)arg1;
- (void)setBandwidthMedian:(double)arg1;
- (void)setBandwidthMean:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

