//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoLocation;

@interface SCR2ShazamRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *artistNamesArray; // @dynamic artistNamesArray;
@property(readonly, nonatomic) unsigned long long artistNamesArray_Count; // @dynamic artistNamesArray_Count;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *songTitle; // @dynamic songTitle;

@end
