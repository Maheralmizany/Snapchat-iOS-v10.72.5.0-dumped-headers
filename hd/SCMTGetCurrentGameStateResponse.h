//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCMTGetCurrentGameStateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool actionmojiScoresEnabled; // @dynamic actionmojiScoresEnabled;
@property(copy, nonatomic) NSString *gameId; // @dynamic gameId;
@property(nonatomic) _Bool leaderboardEnabled; // @dynamic leaderboardEnabled;
@property(nonatomic) _Bool mustAcquireInLens; // @dynamic mustAcquireInLens;
@property(nonatomic) int remainingGameDurationMs; // @dynamic remainingGameDurationMs;
@property(nonatomic) _Bool showUserScore; // @dynamic showUserScore;

@end

