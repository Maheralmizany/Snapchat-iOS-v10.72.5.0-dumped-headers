//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUBroadcastArticleMetadata, SOJUDiscoverModerationSnapModeration;

@protocol SOJUDiscoverEditionChunkResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUDiscoverModerationSnapModeration *moderation;
@property(readonly, copy, nonatomic) NSDictionary *tags;
@property(readonly, copy, nonatomic) NSArray *tiles;
@property(readonly, copy, nonatomic) SOJUBroadcastArticleMetadata *tile;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *adPlacementMetadata;
@property(readonly, copy, nonatomic) NSNumber *adType;
@property(readonly, copy, nonatomic) NSString *color;
@property(readonly, copy, nonatomic) NSString *hashValue;
@property(readonly, copy, nonatomic) NSString *dsnapType;
@property(readonly, copy, nonatomic) NSNumber *dsnapId;
@property(readonly, copy, nonatomic) NSString *url;
@end

