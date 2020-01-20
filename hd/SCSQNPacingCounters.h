//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSQNMetrics;

@interface SCSQNPacingCounters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLatestFifteenMinutes; // @dynamic hasLatestFifteenMinutes;
@property(nonatomic) _Bool hasLatestFifteenMinutesExplr; // @dynamic hasLatestFifteenMinutesExplr;
@property(nonatomic) _Bool hasLatestFifteenMinutesExplrNonDedup; // @dynamic hasLatestFifteenMinutesExplrNonDedup;
@property(nonatomic) _Bool hasLatestFifteenMinutesNonDedup; // @dynamic hasLatestFifteenMinutesNonDedup;
@property(nonatomic) _Bool hasTotal; // @dynamic hasTotal;
@property(nonatomic) _Bool hasTotalExplr; // @dynamic hasTotalExplr;
@property(nonatomic) _Bool hasTotalExplrNonDedup; // @dynamic hasTotalExplrNonDedup;
@property(nonatomic) _Bool hasTotalNonDedup; // @dynamic hasTotalNonDedup;
@property(retain, nonatomic) SCSQNMetrics *latestFifteenMinutes; // @dynamic latestFifteenMinutes;
@property(retain, nonatomic) SCSQNMetrics *latestFifteenMinutesExplr; // @dynamic latestFifteenMinutesExplr;
@property(retain, nonatomic) SCSQNMetrics *latestFifteenMinutesExplrNonDedup; // @dynamic latestFifteenMinutesExplrNonDedup;
@property(retain, nonatomic) SCSQNMetrics *latestFifteenMinutesNonDedup; // @dynamic latestFifteenMinutesNonDedup;
@property(retain, nonatomic) SCSQNMetrics *total; // @dynamic total;
@property(retain, nonatomic) SCSQNMetrics *totalExplr; // @dynamic totalExplr;
@property(retain, nonatomic) SCSQNMetrics *totalExplrNonDedup; // @dynamic totalExplrNonDedup;
@property(retain, nonatomic) SCSQNMetrics *totalNonDedup; // @dynamic totalNonDedup;

@end

