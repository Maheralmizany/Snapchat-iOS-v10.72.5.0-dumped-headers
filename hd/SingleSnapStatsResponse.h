//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, ViewStats;

@interface SingleSnapStatsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ViewStats *globalStats; // @dynamic globalStats;
@property(nonatomic) _Bool hasGlobalStats; // @dynamic hasGlobalStats;
@property(retain, nonatomic) NSMutableArray *sectionStatsArray; // @dynamic sectionStatsArray;
@property(readonly, nonatomic) unsigned long long sectionStatsArray_Count; // @dynamic sectionStatsArray_Count;
@property(copy, nonatomic) NSString *snapId; // @dynamic snapId;

@end

