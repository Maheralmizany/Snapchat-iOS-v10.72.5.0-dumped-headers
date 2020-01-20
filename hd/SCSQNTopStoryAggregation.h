//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSQNUserContext;

@interface SCSQNTopStoryAggregation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long aggregationStartTimeMsecs; // @dynamic aggregationStartTimeMsecs;
@property(nonatomic) unsigned long long aggregationWindowMsecs; // @dynamic aggregationWindowMsecs;
@property(retain, nonatomic) SCSQNUserContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(copy, nonatomic) NSString *metric; // @dynamic metric;
@property(retain, nonatomic) NSMutableArray *topStoriesArray; // @dynamic topStoriesArray;
@property(readonly, nonatomic) unsigned long long topStoriesArray_Count; // @dynamic topStoriesArray_Count;

@end
