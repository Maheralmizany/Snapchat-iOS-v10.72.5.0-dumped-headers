//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class FeedbackDimensions, SCCORECompositeStoryId;

@interface BibEngagementRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FeedbackDimensions *aggregationDimensions; // @dynamic aggregationDimensions;
@property(nonatomic) _Bool hasAggregationDimensions; // @dynamic hasAggregationDimensions;
@property(nonatomic) _Bool hasStoryId; // @dynamic hasStoryId;
@property(nonatomic) int origin; // @dynamic origin;
@property(retain, nonatomic) SCCORECompositeStoryId *storyId; // @dynamic storyId;
@property(nonatomic) long long timestampMsecs; // @dynamic timestampMsecs;

@end
