//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMT1StickerID;

@interface SCMECheckinModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(copy, nonatomic) NSString *checkinLocationId; // @dynamic checkinLocationId;
@property(copy, nonatomic) NSString *checkinStickerId; // @dynamic checkinStickerId;
@property(copy, nonatomic) NSString *cityId; // @dynamic cityId;
@property(retain, nonatomic) NSMutableArray *clusteredFriendUserIdsArray; // @dynamic clusteredFriendUserIdsArray;
@property(readonly, nonatomic) unsigned long long clusteredFriendUserIdsArray_Count; // @dynamic clusteredFriendUserIdsArray_Count;
@property(copy, nonatomic) NSString *countryId; // @dynamic countryId;
@property(nonatomic) _Bool hasSticker; // @dynamic hasSticker;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) NSMutableArray *localitiesArray; // @dynamic localitiesArray;
@property(readonly, nonatomic) unsigned long long localitiesArray_Count; // @dynamic localitiesArray_Count;
@property(nonatomic) double radiusMeters; // @dynamic radiusMeters;
@property(retain, nonatomic) SCMT1StickerID *sticker; // @dynamic sticker;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSString *venueName; // @dynamic venueName;

@end

