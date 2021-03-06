//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, NSMutableArray, NSString, SPCGPoint;

@interface SCPTPassportCityModel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *cityId; // @dynamic cityId;
@property(copy, nonatomic) NSString *countryId; // @dynamic countryId;
@property(retain, nonatomic) GPBStringInt64Dictionary *friendIdCounts; // @dynamic friendIdCounts;
@property(readonly, nonatomic) unsigned long long friendIdCounts_Count; // @dynamic friendIdCounts_Count;
@property(retain, nonatomic) NSMutableArray *friendIdsArray; // @dynamic friendIdsArray;
@property(readonly, nonatomic) unsigned long long friendIdsArray_Count; // @dynamic friendIdsArray_Count;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) long long lastVisitTimestampMs; // @dynamic lastVisitTimestampMs;
@property(retain, nonatomic) NSMutableArray *localityArray; // @dynamic localityArray;
@property(readonly, nonatomic) unsigned long long localityArray_Count; // @dynamic localityArray_Count;
@property(retain, nonatomic) SPCGPoint *location; // @dynamic location;
@property(nonatomic) long long placeCount; // @dynamic placeCount;
@property(nonatomic) long long visitCount; // @dynamic visitCount;

@end

