//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMTScoreRankingInfo;

@interface SCMTGetCurrentUserScoreboardResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *friendScoresArray; // @dynamic friendScoresArray;
@property(readonly, nonatomic) unsigned long long friendScoresArray_Count; // @dynamic friendScoresArray_Count;
@property(retain, nonatomic) SCMTScoreRankingInfo *globalRankingInfo; // @dynamic globalRankingInfo;
@property(nonatomic) _Bool hasGlobalRankingInfo; // @dynamic hasGlobalRankingInfo;
@property(nonatomic) int remainingGameDurationMs; // @dynamic remainingGameDurationMs;

@end
