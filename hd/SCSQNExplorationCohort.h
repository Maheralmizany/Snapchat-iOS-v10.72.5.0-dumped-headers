//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSQNCohortMetadata;

@interface SCSQNExplorationCohort : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int aggregationWindowSizeMinutes; // @dynamic aggregationWindowSizeMinutes;
@property(retain, nonatomic) NSMutableArray *candidatesArray; // @dynamic candidatesArray;
@property(readonly, nonatomic) unsigned long long candidatesArray_Count; // @dynamic candidatesArray_Count;
@property(copy, nonatomic) NSString *cohortId; // @dynamic cohortId;
@property(retain, nonatomic) NSMutableArray *cohortsArray; // @dynamic cohortsArray;
@property(readonly, nonatomic) unsigned long long cohortsArray_Count; // @dynamic cohortsArray_Count;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(retain, nonatomic) SCSQNCohortMetadata *metadata; // @dynamic metadata;

@end

