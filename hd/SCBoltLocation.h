//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCBoltLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *hostPartsArray; // @dynamic hostPartsArray;
@property(readonly, nonatomic) unsigned long long hostPartsArray_Count; // @dynamic hostPartsArray_Count;
@property(nonatomic) long long locationId; // @dynamic locationId;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *pathPattern; // @dynamic pathPattern;
@property(nonatomic) long long providerId; // @dynamic providerId;
@property(copy, nonatomic) NSString *region; // @dynamic region;

@end

