//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCASendToLatency : SCAUserTrackedEvent
{
}

- (void)setViewModelReadySections:(id)arg1;
- (void)setUserLastSelectionMillis:(long long)arg1;
- (void)setUserFirstSelectionMillis:(long long)arg1;
- (void)setUserFirstInteractionMillis:(long long)arg1;
- (void)setStartType:(id)arg1;
- (void)setSplits:(id)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setSendToSessionId:(id)arg1;
- (void)setSendToLatencySessionId:(id)arg1;
- (void)setSeenSections:(id)arg1;
- (void)setRenderedSections:(id)arg1;
- (void)setLastVisibleCellRenderedMillis:(long long)arg1;
- (void)setFailureType:(long long)arg1;
- (void)setFailedSections:(id)arg1;
- (void)setDataReadySections:(id)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setAvailableSections:(id)arg1;
- (void)setAnalyticsVersion:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

