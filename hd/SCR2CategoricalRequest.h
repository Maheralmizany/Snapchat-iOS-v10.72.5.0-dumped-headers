//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCR2GeoLocation;

@interface SCR2CategoricalRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(retain, nonatomic) NSMutableArray *keywordsArray; // @dynamic keywordsArray;
@property(readonly, nonatomic) unsigned long long keywordsArray_Count; // @dynamic keywordsArray_Count;
@property(retain, nonatomic) SCR2GeoLocation *location; // @dynamic location;

@end
