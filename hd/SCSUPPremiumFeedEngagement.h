//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPWindowedEngagementStats;

@interface SCSUPPremiumFeedEngagement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasWindowedHeroTileStats; // @dynamic hasWindowedHeroTileStats;
@property(nonatomic) _Bool hasWindowedKeepWatchingStats; // @dynamic hasWindowedKeepWatchingStats;
@property(nonatomic) _Bool hasWindowedMoreShowsStats; // @dynamic hasWindowedMoreShowsStats;
@property(nonatomic) _Bool hasWindowedMyShowsStats; // @dynamic hasWindowedMyShowsStats;
@property(nonatomic) _Bool hasWindowedTotalPremiumFeedStats; // @dynamic hasWindowedTotalPremiumFeedStats;
@property(retain, nonatomic) SCSUPWindowedEngagementStats *windowedHeroTileStats; // @dynamic windowedHeroTileStats;
@property(retain, nonatomic) SCSUPWindowedEngagementStats *windowedKeepWatchingStats; // @dynamic windowedKeepWatchingStats;
@property(retain, nonatomic) SCSUPWindowedEngagementStats *windowedMoreShowsStats; // @dynamic windowedMoreShowsStats;
@property(retain, nonatomic) SCSUPWindowedEngagementStats *windowedMyShowsStats; // @dynamic windowedMyShowsStats;
@property(retain, nonatomic) SCSUPWindowedEngagementStats *windowedTotalPremiumFeedStats; // @dynamic windowedTotalPremiumFeedStats;

@end

