//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCPUUID;

@interface SCCPCharmsOwner : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCCPUUID *friendUserId; // @dynamic friendUserId;
@property(retain, nonatomic) SCCPUUID *groupMischiefId; // @dynamic groupMischiefId;
@property(readonly, nonatomic) int ownerOneOfCase; // @dynamic ownerOneOfCase;

@end

