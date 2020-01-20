//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMCLocalizedStringSet, SCMT1StickerID;

@interface SCMEExplorerStatusModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clusteringId; // @dynamic clusteringId;
@property(nonatomic) _Bool employeeOnly; // @dynamic employeeOnly;
@property(nonatomic) _Bool hasSticker; // @dynamic hasSticker;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool isDeleted; // @dynamic isDeleted;
@property(nonatomic) long long lifetimeMs; // @dynamic lifetimeMs;
@property(retain, nonatomic) NSMutableArray *locationsArray; // @dynamic locationsArray;
@property(readonly, nonatomic) unsigned long long locationsArray_Count; // @dynamic locationsArray_Count;
@property(copy, nonatomic) NSString *placeId; // @dynamic placeId;
@property(copy, nonatomic) NSString *posterDedupeId; // @dynamic posterDedupeId;
@property(nonatomic) long long score; // @dynamic score;
@property(copy, nonatomic) NSString *speechText; // @dynamic speechText;
@property(copy, nonatomic) NSString *statusId; // @dynamic statusId;
@property(nonatomic) int statusType; // @dynamic statusType;
@property(retain, nonatomic) SCMT1StickerID *sticker; // @dynamic sticker;
@property(retain, nonatomic) SCMCLocalizedStringSet *text; // @dynamic text;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(retain, nonatomic) NSMutableArray *userIdBlacklistArray; // @dynamic userIdBlacklistArray;
@property(readonly, nonatomic) unsigned long long userIdBlacklistArray_Count; // @dynamic userIdBlacklistArray_Count;
@property(copy, nonatomic) NSString *viewerDedupeId; // @dynamic viewerDedupeId;

@end

