//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSSMPublisherStoryWatchedState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientTimestampMsecs; // @dynamic clientTimestampMsecs;
@property(copy, nonatomic) NSString *lastWatchedSnapId; // @dynamic lastWatchedSnapId;
@property(copy, nonatomic) NSString *lastWatchedVideoId; // @dynamic lastWatchedVideoId;
@property(nonatomic) int snapProgressMsecs; // @dynamic snapProgressMsecs;
@property(nonatomic) int videoProgressMsecs; // @dynamic videoProgressMsecs;

@end

