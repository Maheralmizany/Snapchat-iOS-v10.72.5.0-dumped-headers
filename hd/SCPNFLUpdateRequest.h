//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCPNFLModelCheckpoint, SCPNFLTrainingMetrics;

@interface SCPNFLUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTrainingMetrics; // @dynamic hasTrainingMetrics;
@property(nonatomic) _Bool hasUpdatedCheckpoint; // @dynamic hasUpdatedCheckpoint;
@property(retain, nonatomic) SCPNFLTrainingMetrics *trainingMetrics; // @dynamic trainingMetrics;
@property(retain, nonatomic) SCPNFLModelCheckpoint *updatedCheckpoint; // @dynamic updatedCheckpoint;

@end

