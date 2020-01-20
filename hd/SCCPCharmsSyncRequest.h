//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SCCPCharmsOwner, SCCPUUID;

@interface SCCPCharmsSyncRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOwner; // @dynamic hasOwner;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(retain, nonatomic) SCCPCharmsOwner *owner; // @dynamic owner;
@property(retain, nonatomic) SCCPUUID *requestId; // @dynamic requestId;
@property(nonatomic) int requestOrigin; // @dynamic requestOrigin;
@property(nonatomic) long long requestTsMs; // @dynamic requestTsMs;
@property(copy, nonatomic) NSData *syncToken; // @dynamic syncToken;

@end

