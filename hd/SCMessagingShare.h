//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingDiscoverShare, SCMessagingLegacyDiscoverShare, SCMessagingLegacyShazamShare, SCMessagingMapShare, SCMessagingMapShareStory, SCMessagingMemoriesStory, SCMessagingSearchShare, SCMessagingSearchShareSnap, SCMessagingShazamShare, SCMessagingStoryShare, SCMessagingUserShare;

@interface SCMessagingShare : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingDiscoverShare *discover; // @dynamic discover;
@property(retain, nonatomic) SCMessagingLegacyDiscoverShare *legacyDiscover; // @dynamic legacyDiscover;
@property(retain, nonatomic) SCMessagingLegacyShazamShare *legacyShazam; // @dynamic legacyShazam;
@property(retain, nonatomic) SCMessagingMapShare *map; // @dynamic map;
@property(retain, nonatomic) SCMessagingMapShareStory *mapStory; // @dynamic mapStory;
@property(retain, nonatomic) SCMessagingMemoriesStory *memoriesStory; // @dynamic memoriesStory;
@property(retain, nonatomic) SCMessagingSearchShare *search; // @dynamic search;
@property(retain, nonatomic) SCMessagingSearchShareSnap *searchSnap; // @dynamic searchSnap;
@property(readonly, nonatomic) int shareOneOfCase; // @dynamic shareOneOfCase;
@property(retain, nonatomic) SCMessagingShazamShare *shazam; // @dynamic shazam;
@property(retain, nonatomic) SCMessagingStoryShare *story; // @dynamic story;
@property(retain, nonatomic) SCMessagingUserShare *user; // @dynamic user;

@end

