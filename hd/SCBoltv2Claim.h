//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCBoltv2ClaimPolicy, SCBoltv2MediaOptimizationProperties;

@interface SCBoltv2Claim : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltv2ClaimPolicy *claimPolicy; // @dynamic claimPolicy;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(nonatomic) _Bool hasClaimPolicy; // @dynamic hasClaimPolicy;
@property(nonatomic) _Bool hasMediaOptimizationProperties; // @dynamic hasMediaOptimizationProperties;
@property(retain, nonatomic) SCBoltv2MediaOptimizationProperties *mediaOptimizationProperties; // @dynamic mediaOptimizationProperties;
@property(nonatomic) unsigned int useCase; // @dynamic useCase;

@end

