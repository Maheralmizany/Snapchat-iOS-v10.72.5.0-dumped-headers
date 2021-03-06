//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCMTGeoBox, SCMTPoint;

@interface SCMTGetOnboardingViewStateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasViewport; // @dynamic hasViewport;
@property(retain, nonatomic) SCMTPoint *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *reservedBoundingBoxArray; // @dynamic reservedBoundingBoxArray;
@property(readonly, nonatomic) unsigned long long reservedBoundingBoxArray_Count; // @dynamic reservedBoundingBoxArray_Count;
@property(retain, nonatomic) SCMTGeoBox *viewport; // @dynamic viewport;
@property(nonatomic) double zoom; // @dynamic zoom;

@end

