//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAdServeRequestInfo : SCAUserTrackedEvent
{
}

- (void)setViewSource:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStorySessionId:(id)arg1;
- (void)setRequestUrl:(id)arg1;
- (void)setPublisherId:(id)arg1;
- (void)setIsFullViewAd:(_Bool)arg1;
- (void)setEditionId:(id)arg1;
- (void)setAdRequestSubmitTimestamp:(long long)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdProductSourceType:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

