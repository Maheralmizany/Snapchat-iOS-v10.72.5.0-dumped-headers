//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAChatChatUnsave : SCAUserTrackedEvent
{
}

- (void)setUniqueMentionCount:(long long)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setRankingId:(id)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setMentionCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setGhost_correspondent_id:(id)arg1;
- (void)setFriendshipStatus:(long long)arg1;
- (void)setCorrespondentType:(long long)arg1;
- (void)setCorrespondentId:(id)arg1;
- (void)setCellViewPosition:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
