//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCOREUUID;

@interface SCCTXContextClientInfo_PrivateStoryInviteInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInviteId; // @dynamic hasInviteId;
@property(nonatomic) _Bool hasStoryId; // @dynamic hasStoryId;
@property(retain, nonatomic) SCCOREUUID *inviteId; // @dynamic inviteId;
@property(retain, nonatomic) SCCOREUUID *storyId; // @dynamic storyId;
@property(copy, nonatomic) NSString *storyName; // @dynamic storyName;

@end

