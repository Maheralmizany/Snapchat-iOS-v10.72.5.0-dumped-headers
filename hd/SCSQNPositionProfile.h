//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSQNStoryFeedbackProfileHistory;

@interface SCSQNPositionProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long aggregationMinTimeMsecs; // @dynamic aggregationMinTimeMsecs;
@property(nonatomic) _Bool hasStoryFeedbackProfileHistory; // @dynamic hasStoryFeedbackProfileHistory;
@property(nonatomic) unsigned int position; // @dynamic position;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSMutableArray *statsArray; // @dynamic statsArray;
@property(readonly, nonatomic) unsigned long long statsArray_Count; // @dynamic statsArray_Count;
@property(retain, nonatomic) SCSQNStoryFeedbackProfileHistory *storyFeedbackProfileHistory; // @dynamic storyFeedbackProfileHistory;

@end

