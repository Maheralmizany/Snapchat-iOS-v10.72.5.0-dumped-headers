//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface IMPInsightsStoryInsights : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long numStories; // @dynamic numStories;
@property(retain, nonatomic) NSMutableArray *storyLifetimeInsightsArray; // @dynamic storyLifetimeInsightsArray;
@property(readonly, nonatomic) unsigned long long storyLifetimeInsightsArray_Count; // @dynamic storyLifetimeInsightsArray_Count;

@end

