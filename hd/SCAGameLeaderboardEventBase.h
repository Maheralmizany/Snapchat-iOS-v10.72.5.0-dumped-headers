//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCACognacActionEventBase.h"

@interface SCAGameLeaderboardEventBase : SCACognacActionEventBase
{
}

- (void)setLeaderboardSourceType:(long long)arg1;
- (void)setLeaderboardId:(id)arg1;
- (void)setGlobal_rank:(double)arg1;
- (void)setFriend_rank:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

