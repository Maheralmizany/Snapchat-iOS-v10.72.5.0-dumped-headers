//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class WindowedFloatMetrics, WindowedIntMetrics;

@interface SCSIDXFriendStoryPosterEngagementFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNumStorySnapReplies; // @dynamic hasNumStorySnapReplies;
@property(nonatomic) _Bool hasNumStorySnapsViewed; // @dynamic hasNumStorySnapsViewed;
@property(nonatomic) _Bool hasNumStoryStoryCompletions; // @dynamic hasNumStoryStoryCompletions;
@property(nonatomic) _Bool hasNumStoryStoryLongImp; // @dynamic hasNumStoryStoryLongImp;
@property(nonatomic) _Bool hasNumStoryStoryView; // @dynamic hasNumStoryStoryView;
@property(nonatomic) _Bool hasStorySnapTimeSpent; // @dynamic hasStorySnapTimeSpent;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapReplies; // @dynamic numStorySnapReplies;
@property(retain, nonatomic) WindowedIntMetrics *numStorySnapsViewed; // @dynamic numStorySnapsViewed;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryCompletions; // @dynamic numStoryStoryCompletions;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryLongImp; // @dynamic numStoryStoryLongImp;
@property(retain, nonatomic) WindowedIntMetrics *numStoryStoryView; // @dynamic numStoryStoryView;
@property(retain, nonatomic) WindowedFloatMetrics *storySnapTimeSpent; // @dynamic storySnapTimeSpent;

@end
