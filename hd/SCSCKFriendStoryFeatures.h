//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class EngagementFeatures, SCSCKFriendStoryClientEngagementFeatures, SCSCKFriendStoryDerivedEngagementFeatures, SCSCKFriendStoryMetadataFeatures, SCSCKFriendStoryPosterEngagementFeatures;

@interface SCSCKFriendStoryFeatures : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSCKFriendStoryClientEngagementFeatures *friendStoryClientEngagementFeatures; // @dynamic friendStoryClientEngagementFeatures;
@property(retain, nonatomic) SCSCKFriendStoryDerivedEngagementFeatures *friendStoryDerivedEngagementFeatures; // @dynamic friendStoryDerivedEngagementFeatures;
@property(retain, nonatomic) EngagementFeatures *friendStoryEngagementFeatures; // @dynamic friendStoryEngagementFeatures;
@property(retain, nonatomic) SCSCKFriendStoryMetadataFeatures *friendStoryMetadataFeatures; // @dynamic friendStoryMetadataFeatures;
@property(retain, nonatomic) SCSCKFriendStoryPosterEngagementFeatures *friendStoryPosterEngagementFeatures; // @dynamic friendStoryPosterEngagementFeatures;
@property(nonatomic) _Bool hasFriendStoryClientEngagementFeatures; // @dynamic hasFriendStoryClientEngagementFeatures;
@property(nonatomic) _Bool hasFriendStoryDerivedEngagementFeatures; // @dynamic hasFriendStoryDerivedEngagementFeatures;
@property(nonatomic) _Bool hasFriendStoryEngagementFeatures; // @dynamic hasFriendStoryEngagementFeatures;
@property(nonatomic) _Bool hasFriendStoryMetadataFeatures; // @dynamic hasFriendStoryMetadataFeatures;
@property(nonatomic) _Bool hasFriendStoryPosterEngagementFeatures; // @dynamic hasFriendStoryPosterEngagementFeatures;

@end

