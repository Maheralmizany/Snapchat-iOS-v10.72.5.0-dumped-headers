//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCPNFLTrainingParameters_SGDTrainingParameters;

@interface SCPNFLTrainingParameters : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSgdTrainingParameters; // @dynamic hasSgdTrainingParameters;
@property(nonatomic) int optimizer; // @dynamic optimizer;
@property(retain, nonatomic) SCPNFLTrainingParameters_SGDTrainingParameters *sgdTrainingParameters; // @dynamic sgdTrainingParameters;
@property(copy, nonatomic) NSString *trainingSetId; // @dynamic trainingSetId;
@property(copy, nonatomic) NSString *validationSetId; // @dynamic validationSetId;

@end
