//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCSUPActionableStoryKey;

@interface SCSUPHideStoryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientTsMsecs; // @dynamic clientTsMsecs;
@property(nonatomic) _Bool hasStoryKey; // @dynamic hasStoryKey;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) SCSUPActionableStoryKey *storyKey; // @dynamic storyKey;
@property(nonatomic) int toState; // @dynamic toState;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

