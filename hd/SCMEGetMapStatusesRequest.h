//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMEGetMapStatusesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(retain, nonatomic) NSMutableArray *friendIdsArray; // @dynamic friendIdsArray;
@property(readonly, nonatomic) unsigned long long friendIdsArray_Count; // @dynamic friendIdsArray_Count;
@property(nonatomic) _Bool isEmployee; // @dynamic isEmployee;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

