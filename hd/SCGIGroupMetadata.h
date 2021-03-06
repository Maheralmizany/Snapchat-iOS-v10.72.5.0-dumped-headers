//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPCGPoint;

@interface SCGIGroupMetadata : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long endEpoch; // @dynamic endEpoch;
@property(copy, nonatomic) NSString *groupDescription; // @dynamic groupDescription;
@property(nonatomic) _Bool hasLocationLatLng; // @dynamic hasLocationLatLng;
@property(copy, nonatomic) NSString *locationAddressInfo; // @dynamic locationAddressInfo;
@property(copy, nonatomic) NSString *locationDisplayString; // @dynamic locationDisplayString;
@property(retain, nonatomic) SPCGPoint *locationLatLng; // @dynamic locationLatLng;
@property(copy, nonatomic) NSString *locationVenueId; // @dynamic locationVenueId;
@property(nonatomic) long long startEpoch; // @dynamic startEpoch;

@end

