//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, NSMutableArray;

@interface SCMTHeatmapGradient : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *colorsArray; // @dynamic colorsArray;
@property(readonly, nonatomic) unsigned long long colorsArray_Count; // @dynamic colorsArray_Count;
@property(retain, nonatomic) GPBFloatArray *transitionLocationsArray; // @dynamic transitionLocationsArray;
@property(readonly, nonatomic) unsigned long long transitionLocationsArray_Count; // @dynamic transitionLocationsArray_Count;

@end

