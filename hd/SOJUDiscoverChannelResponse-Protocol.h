//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadataList, SOJUDiscoverModerationStoryModeration, SOJUSponsoredSlugPosAndText;

@protocol SOJUDiscoverChannelResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUDiscoverModerationStoryModeration *moderation;
@property(readonly, copy, nonatomic) NSString *contentType;
@property(readonly, copy, nonatomic) NSDictionary *contentAccessLists;
@property(readonly, copy, nonatomic) NSNumber *viewableOnWeb;
@property(readonly, copy, nonatomic) NSNumber *hasCuratedSnaps;
@property(readonly, copy, nonatomic) NSNumber *shareable;
@property(readonly, copy, nonatomic) NSString *businessId;
@property(readonly, copy, nonatomic) NSString *showId;
@property(readonly, copy, nonatomic) NSNumber *publisherId;
@property(readonly, copy, nonatomic) NSArray *localContent;
@property(readonly, copy, nonatomic) NSDictionary *contentAccessWhitelists;
@property(readonly, copy, nonatomic) NSDictionary *tags;
@property(readonly, copy, nonatomic) NSArray *segments;
@property(readonly, copy, nonatomic) NSArray *contentTags;
@property(readonly, copy, nonatomic) NSArray *publisherFeatures;
@property(readonly, copy, nonatomic) NSNumber *isSubscribed;
@property(readonly, copy, nonatomic) NSNumber *isHiddenInStoryScreen;
@property(readonly, copy, nonatomic) NSNumber *rollingNewsEnabled;
@property(readonly, copy, nonatomic) NSNumber *editionVersion;
@property(readonly, copy, nonatomic) NSNumber *isShow;
@property(readonly, copy, nonatomic) NSString *searchIcon;
@property(readonly, copy, nonatomic) NSString *hashValue;
@property(readonly, copy, nonatomic) NSString *promoteDemoteStatus;
@property(readonly, copy, nonatomic) NSString *region;
@property(readonly, copy, nonatomic) NSString *horizontalIcon;
@property(readonly, copy, nonatomic) NSString *subscribedImage;
@property(readonly, copy, nonatomic) SOJUBroadcastArticleMetadataList *tileList;
@property(readonly, copy, nonatomic) NSNumber *subscribable;
@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *sponsored;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *introVideoAdMetadata;
@property(readonly, copy, nonatomic) NSArray *dsnapsData;
@property(readonly, copy, nonatomic) NSString *editionPublishingTimestamp;
@property(readonly, copy, nonatomic) NSNumber *editionId;
@property(readonly, copy, nonatomic) NSString *secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor;
@property(readonly, copy, nonatomic) NSString *introMovie;
@property(readonly, copy, nonatomic) NSString *loadingIcon;
@property(readonly, copy, nonatomic) NSString *invertedIcon;
@property(readonly, copy, nonatomic) NSString *filledIcon;
@property(readonly, copy, nonatomic) NSString *publisherDeeplink;
@property(readonly, copy, nonatomic) NSString *publisherDescription;
@property(readonly, copy, nonatomic) NSString *publisherFormalName;
@property(readonly, copy, nonatomic) NSString *publisherName;
@property(readonly, copy, nonatomic) NSNumber *promotedStoriesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *storiesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *position;
@property(readonly, copy, nonatomic) NSString *name;
@end

