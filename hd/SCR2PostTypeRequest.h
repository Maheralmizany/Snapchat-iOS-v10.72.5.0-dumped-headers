//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoLocation;

@interface SCR2PostTypeRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *candidatePlacesArray; // @dynamic candidatePlacesArray;
@property(readonly, nonatomic) unsigned long long candidatePlacesArray_Count; // @dynamic candidatePlacesArray_Count;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;
@property(copy, nonatomic) NSString *queryText; // @dynamic queryText;
@property(nonatomic) int queryTextOrigin; // @dynamic queryTextOrigin;
@property(copy, nonatomic) NSString *suggestionText; // @dynamic suggestionText;

@end
