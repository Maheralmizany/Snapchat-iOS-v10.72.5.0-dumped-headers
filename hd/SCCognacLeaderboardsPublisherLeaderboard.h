//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCognacLeaderboardsLeaderboard;

@interface SCCognacLeaderboardsPublisherLeaderboard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLeaderboard; // @dynamic hasLeaderboard;
@property(retain, nonatomic) SCCognacLeaderboardsLeaderboard *leaderboard; // @dynamic leaderboard;
@property(nonatomic) long long maxScore; // @dynamic maxScore;
@property(nonatomic) long long minScore; // @dynamic minScore;

@end
