//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMEGetMyExplorerStatusesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(nonatomic) _Bool isEmployee; // @dynamic isEmployee;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSMutableArray *treatmentsArray; // @dynamic treatmentsArray;
@property(readonly, nonatomic) unsigned long long treatmentsArray_Count; // @dynamic treatmentsArray_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
