//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringDoubleDictionary, NSString;

@interface SCRFeatureWeightMapPair : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *feature; // @dynamic feature;
@property(retain, nonatomic) GPBStringDoubleDictionary *weightMap; // @dynamic weightMap;
@property(readonly, nonatomic) unsigned long long weightMap_Count; // @dynamic weightMap_Count;

@end

