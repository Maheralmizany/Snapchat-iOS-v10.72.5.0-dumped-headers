//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSCKFriendStoryClientEngagementFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int lastImpressionTimeInMs; // @dynamic lastImpressionTimeInMs;
@property(nonatomic) long long lastImpressionTimestampInSec; // @dynamic lastImpressionTimestampInSec;
@property(nonatomic) float lastInteractionAgeInHour; // @dynamic lastInteractionAgeInHour;
@property(nonatomic) long long lastInteractionTimestampInSec; // @dynamic lastInteractionTimestampInSec;
@property(nonatomic) int lastWatchTimeInMs; // @dynamic lastWatchTimeInMs;
@property(nonatomic) long long lastWatchTimestampInSec; // @dynamic lastWatchTimestampInSec;
@property(nonatomic) int numGroupchats; // @dynamic numGroupchats;
@property(nonatomic) int numPrivateStories; // @dynamic numPrivateStories;
@property(nonatomic) int smallestGroupchatSize; // @dynamic smallestGroupchatSize;
@property(nonatomic) int smallestPrivateStorySize; // @dynamic smallestPrivateStorySize;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

