//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCBoltReplicationPolicy;

@interface SCBoltClaimRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long cdnTtlSeconds; // @dynamic cdnTtlSeconds;
@property(nonatomic) unsigned long long expirationTimeMillis; // @dynamic expirationTimeMillis;
@property(copy, nonatomic) NSString *externalClaimId; // @dynamic externalClaimId;
@property(nonatomic) _Bool hasReplicationPolicy; // @dynamic hasReplicationPolicy;
@property(retain, nonatomic) SCBoltReplicationPolicy *replicationPolicy; // @dynamic replicationPolicy;

@end

