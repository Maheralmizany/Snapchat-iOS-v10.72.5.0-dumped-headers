//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, STOAdPlacement_AdPlacementMetadata_AdInsertionConfig, STOAdPlacement_AdPlacementMetadata_AdRequestConfig, STOAdPlacement_AdPlacementMetadata_TargetingParameters;

@interface STOAdPlacement_AdPlacementMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *adCannotFollowSnapIdsArray; // @dynamic adCannotFollowSnapIdsArray;
@property(readonly, nonatomic) unsigned long long adCannotFollowSnapIdsArray_Count; // @dynamic adCannotFollowSnapIdsArray_Count;
@property(retain, nonatomic) STOAdPlacement_AdPlacementMetadata_AdInsertionConfig *adInsertionConfig; // @dynamic adInsertionConfig;
@property(retain, nonatomic) STOAdPlacement_AdPlacementMetadata_AdRequestConfig *adRequestConfig; // @dynamic adRequestConfig;
@property(copy, nonatomic) NSString *adUnitId; // @dynamic adUnitId;
@property(nonatomic) _Bool enableFullView; // @dynamic enableFullView;
@property(nonatomic) _Bool hasAdInsertionConfig; // @dynamic hasAdInsertionConfig;
@property(nonatomic) _Bool hasAdRequestConfig; // @dynamic hasAdRequestConfig;
@property(nonatomic) _Bool hasTargetingParameters; // @dynamic hasTargetingParameters;
@property(retain, nonatomic) STOAdPlacement_AdPlacementMetadata_TargetingParameters *targetingParameters; // @dynamic targetingParameters;

@end

