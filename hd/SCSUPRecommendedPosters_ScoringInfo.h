//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCSUPRecommendedPosters_ScoringInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float score; // @dynamic score;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *sourceScoresArray; // @dynamic sourceScoresArray;
@property(readonly, nonatomic) unsigned long long sourceScoresArray_Count; // @dynamic sourceScoresArray_Count;

@end

