//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SASComputeAudioStitchesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int matchThreshold; // @dynamic matchThreshold;
@property(nonatomic) long long maxTimestampDiff; // @dynamic maxTimestampDiff;
@property(retain, nonatomic) NSMutableArray *snapIdsArray; // @dynamic snapIdsArray;
@property(readonly, nonatomic) unsigned long long snapIdsArray_Count; // @dynamic snapIdsArray_Count;

@end

