//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCASearchrankingResultOnScreen : SCAUserTrackedEvent
{
}

- (void)setSource:(long long)arg1;
- (void)setSearchSessionId:(id)arg1;
- (void)setSearchResultShowingReason:(long long)arg1;
- (void)setSearchResultSectionTitle:(id)arg1;
- (void)setSearchResultSection:(long long)arg1;
- (void)setSearchResultRankingId:(id)arg1;
- (void)setSearchResultIdentifier:(id)arg1;
- (void)setSearchQueryId:(long long)arg1;
- (void)setClientTimestamp:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
