//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCBoltv2ClaimPolicy;

@interface SCBoltv2MediaOptimizationProperties : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCBoltv2ClaimPolicy *claimPolicyOverride; // @dynamic claimPolicyOverride;
@property(nonatomic) _Bool excludeSource; // @dynamic excludeSource;
@property(nonatomic) int featureContentType; // @dynamic featureContentType;
@property(nonatomic) _Bool forceTranscode; // @dynamic forceTranscode;
@property(nonatomic) _Bool hasClaimPolicyOverride; // @dynamic hasClaimPolicyOverride;
@property(retain, nonatomic) NSMutableArray *variantPropertiesArray; // @dynamic variantPropertiesArray;
@property(readonly, nonatomic) unsigned long long variantPropertiesArray_Count; // @dynamic variantPropertiesArray_Count;

@end

