//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, SCSSMLongformVideoAd, SCSSMLongformVideoChapter, SCSSMPublisherTile, SCSSMSnapFragmentMetadata, SDMCommerce, SDMWebPage;

@interface SCSSMPublisherSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSSMLongformVideoAd *ad; // @dynamic ad;
@property(copy, nonatomic) NSData *adPlacementMetadata; // @dynamic adPlacementMetadata;
@property(nonatomic) int adType; // @dynamic adType;
@property(retain, nonatomic) SCSSMLongformVideoChapter *chapter; // @dynamic chapter;
@property(retain, nonatomic) SDMCommerce *commerce; // @dynamic commerce;
@property(retain, nonatomic) SCSSMSnapFragmentMetadata *fragmentMetadata; // @dynamic fragmentMetadata;
@property(nonatomic) _Bool hasCommerce; // @dynamic hasCommerce;
@property(nonatomic) _Bool hasFragmentMetadata; // @dynamic hasFragmentMetadata;
@property(nonatomic) _Bool hasTile; // @dynamic hasTile;
@property(nonatomic) _Bool hasWebpageAttachment; // @dynamic hasWebpageAttachment;
@property(copy, nonatomic) NSString *hash_p; // @dynamic hash_p;
@property(nonatomic) _Bool isUserGeneratedContent; // @dynamic isUserGeneratedContent;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSString *originalSnapId; // @dynamic originalSnapId;
@property(nonatomic) long long snapId; // @dynamic snapId;
@property(readonly, nonatomic) int snapOneOfCase; // @dynamic snapOneOfCase;
@property(copy, nonatomic) NSString *snapRelativeURL; // @dynamic snapRelativeURL;
@property(copy, nonatomic) NSString *snapType; // @dynamic snapType;
@property(retain, nonatomic) SCSSMPublisherTile *tile; // @dynamic tile;
@property(retain, nonatomic) SDMWebPage *webpageAttachment; // @dynamic webpageAttachment;

@end

