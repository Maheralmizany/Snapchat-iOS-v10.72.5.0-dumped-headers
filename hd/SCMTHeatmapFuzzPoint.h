//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMTPoint;

@interface SCMTHeatmapFuzzPoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPoint; // @dynamic hasPoint;
@property(nonatomic) double initialZoomLevel; // @dynamic initialZoomLevel;
@property(retain, nonatomic) SCMTPoint *point; // @dynamic point;
@property(nonatomic) double weight; // @dynamic weight;

@end

