//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPInsightsTimeRange, NSString;

@interface IMPInsightsStory : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(nonatomic) _Bool hasTimeRange; // @dynamic hasTimeRange;
@property(nonatomic) int numSnaps; // @dynamic numSnaps;
@property(copy, nonatomic) NSString *storyId; // @dynamic storyId;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;
@property(retain, nonatomic) IMPInsightsTimeRange *timeRange; // @dynamic timeRange;
@property(nonatomic) _Bool userContributedToStory; // @dynamic userContributedToStory;

@end

