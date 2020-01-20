//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Value, NSString, SGTILink;

@interface SCStoryElementMetrics : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SGTILink *additionalDetailsLink; // @dynamic additionalDetailsLink;
@property(copy, nonatomic) NSString *additionalDetailsURL; // @dynamic additionalDetailsURL;
@property(nonatomic) _Bool hasAdditionalDetailsLink; // @dynamic hasAdditionalDetailsLink;
@property(nonatomic) _Bool hasReach; // @dynamic hasReach;
@property(nonatomic) _Bool hasScreenshots; // @dynamic hasScreenshots;
@property(nonatomic) long long lastUpdateTimestampMs; // @dynamic lastUpdateTimestampMs;
@property(retain, nonatomic) GPBInt32Value *reach; // @dynamic reach;
@property(nonatomic) int screenshotCount; // @dynamic screenshotCount;
@property(retain, nonatomic) GPBInt32Value *screenshots; // @dynamic screenshots;
@property(nonatomic) int viewCount; // @dynamic viewCount;

@end

