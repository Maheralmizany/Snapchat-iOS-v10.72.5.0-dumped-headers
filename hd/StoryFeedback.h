//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class FeedbackDimensions, FeedbackStats;

@interface StoryFeedback : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FeedbackDimensions *aggregationDimensions; // @dynamic aggregationDimensions;
@property(nonatomic) unsigned long long aggregationEndSecs; // @dynamic aggregationEndSecs;
@property(nonatomic) unsigned long long aggregationStartSecs; // @dynamic aggregationStartSecs;
@property(retain, nonatomic) FeedbackStats *aggregationStats; // @dynamic aggregationStats;
@property(nonatomic) _Bool hasAggregationDimensions; // @dynamic hasAggregationDimensions;
@property(nonatomic) _Bool hasAggregationStats; // @dynamic hasAggregationStats;

@end
