//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAMapExploreStatusView : SCAUserTrackedEvent
{
}

- (void)setStatusTypeEnum:(long long)arg1;
- (void)setStatusId:(id)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setFriendUserId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

