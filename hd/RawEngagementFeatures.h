//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32UInt64Dictionary;

@interface RawEngagementFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float completionRate; // @dynamic completionRate;
@property(retain, nonatomic) GPBInt32UInt64Dictionary *entryEventCounts; // @dynamic entryEventCounts;
@property(readonly, nonatomic) unsigned long long entryEventCounts_Count; // @dynamic entryEventCounts_Count;
@property(retain, nonatomic) GPBInt32UInt64Dictionary *exitEventCounts; // @dynamic exitEventCounts;
@property(readonly, nonatomic) unsigned long long exitEventCounts_Count; // @dynamic exitEventCounts_Count;
@property(nonatomic) float favorites; // @dynamic favorites;
@property(nonatomic) float hides; // @dynamic hides;
@property(nonatomic) float impressions; // @dynamic impressions;
@property(nonatomic) float numSnapsPerWatch; // @dynamic numSnapsPerWatch;
@property(nonatomic) float sends; // @dynamic sends;
@property(nonatomic) float shares; // @dynamic shares;
@property(nonatomic) float timeSpentPerWatch; // @dynamic timeSpentPerWatch;
@property(nonatomic) float watches; // @dynamic watches;

@end

