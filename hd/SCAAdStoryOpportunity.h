//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAdStoryOpportunity : SCAUserTrackedEvent
{
}

- (void)setStoryType:(long long)arg1;
- (void)setStorySessionId:(long long)arg1;
- (void)setStdDevStoryViewTime:(double)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setReachedAdSlot:(_Bool)arg1;
- (void)setPotentialAdSlot:(long long)arg1;
- (void)setPlaybackVolume:(double)arg1;
- (void)setPlaybackAudio:(long long)arg1;
- (void)setMeanStoryViewTime:(double)arg1;
- (void)setInitialVisibleLoadingTimeMillis:(long long)arg1;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (void)setAdsnapLineItemId:(id)arg1;
- (void)setAdsnapId:(id)arg1;
- (void)setAdUnitId:(id)arg1;
- (void)setAdSkipReason:(long long)arg1;
- (void)setAdProductSourceType:(long long)arg1;
- (void)setAdId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
