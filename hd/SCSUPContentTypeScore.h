//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPEngagementStats;

@interface SCSUPContentTypeScore : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int corpus; // @dynamic corpus;
@property(nonatomic) _Bool hasStats; // @dynamic hasStats;
@property(nonatomic) float score; // @dynamic score;
@property(retain, nonatomic) SCSUPEngagementStats *stats; // @dynamic stats;

@end

