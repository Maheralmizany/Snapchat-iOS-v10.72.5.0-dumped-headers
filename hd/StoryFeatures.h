//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class StoryFeatures_AffinityFeatures, StoryFeatures_DiversityFeatures, StoryFeatures_FreshnessFeatures, StoryFeatures_QualityFeatures, StoryFeatures_UtilityFeatures, StoryFeatures_VolumeFeatures;

@interface StoryFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) StoryFeatures_AffinityFeatures *affinityFeatures; // @dynamic affinityFeatures;
@property(retain, nonatomic) StoryFeatures_DiversityFeatures *diversityFeatures; // @dynamic diversityFeatures;
@property(retain, nonatomic) StoryFeatures_FreshnessFeatures *freshnessFeatures; // @dynamic freshnessFeatures;
@property(nonatomic) _Bool hasAffinityFeatures; // @dynamic hasAffinityFeatures;
@property(nonatomic) _Bool hasDiversityFeatures; // @dynamic hasDiversityFeatures;
@property(nonatomic) _Bool hasFreshnessFeatures; // @dynamic hasFreshnessFeatures;
@property(nonatomic) _Bool hasQualityFeatures; // @dynamic hasQualityFeatures;
@property(nonatomic) _Bool hasUtilityFeatures; // @dynamic hasUtilityFeatures;
@property(nonatomic) _Bool hasVolumeFeatures; // @dynamic hasVolumeFeatures;
@property(nonatomic) _Bool isSubscription; // @dynamic isSubscription;
@property(retain, nonatomic) StoryFeatures_QualityFeatures *qualityFeatures; // @dynamic qualityFeatures;
@property(nonatomic) int storyType; // @dynamic storyType;
@property(retain, nonatomic) StoryFeatures_UtilityFeatures *utilityFeatures; // @dynamic utilityFeatures;
@property(retain, nonatomic) StoryFeatures_VolumeFeatures *volumeFeatures; // @dynamic volumeFeatures;

@end

