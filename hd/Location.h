//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class LatLng;

@interface Location : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) double alt; // @dynamic alt;
@property(nonatomic) _Bool hasLatlng; // @dynamic hasLatlng;
@property(nonatomic) double horizontalAccuracy; // @dynamic horizontalAccuracy;
@property(retain, nonatomic) LatLng *latlng; // @dynamic latlng;
@property(nonatomic) double verticalAccuracy; // @dynamic verticalAccuracy;

@end
