//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@interface StorySubscribeState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int evictionHint; // @dynamic evictionHint;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) long long stateExpireTimestampMsecs; // @dynamic stateExpireTimestampMsecs;
@property(nonatomic) long long stateTimestampMsecs; // @dynamic stateTimestampMsecs;

@end

