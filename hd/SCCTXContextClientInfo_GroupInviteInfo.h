//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCOREUUID;

@interface SCCTXContextClientInfo_GroupInviteInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *encryptedGroupInviteId; // @dynamic encryptedGroupInviteId;
@property(retain, nonatomic) SCCOREUUID *groupId; // @dynamic groupId;
@property(retain, nonatomic) SCCOREUUID *groupInviteId; // @dynamic groupInviteId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasGroupInviteId; // @dynamic hasGroupInviteId;

@end

