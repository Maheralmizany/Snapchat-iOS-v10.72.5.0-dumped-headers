//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2PlaceInfo;

@interface SCR2PlaceLikelihood : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPlaceInfo; // @dynamic hasPlaceInfo;
@property(nonatomic) int isOpenNow; // @dynamic isOpenNow;
@property(nonatomic) float likelihood; // @dynamic likelihood;
@property(retain, nonatomic) SCR2PlaceInfo *placeInfo; // @dynamic placeInfo;

@end
