//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPActionableStoryKey;

@interface SCSUPBatchSubscribeStoryRequest_Request : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStoryKey; // @dynamic hasStoryKey;
@property(retain, nonatomic) SCSUPActionableStoryKey *storyKey; // @dynamic storyKey;
@property(nonatomic) int toState; // @dynamic toState;

@end
