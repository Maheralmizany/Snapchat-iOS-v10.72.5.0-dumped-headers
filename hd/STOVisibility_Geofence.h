//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPCGMultiPolygon;

@interface STOVisibility_Geofence : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) SPCGMultiPolygon *fence; // @dynamic fence;
@property(readonly, nonatomic) int geoOneOfCase; // @dynamic geoOneOfCase;
@property(copy, nonatomic) NSString *geofenceId; // @dynamic geofenceId;

@end
