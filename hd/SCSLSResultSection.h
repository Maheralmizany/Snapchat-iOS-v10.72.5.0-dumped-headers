//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCSLSResultSection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long millisecondsSinceQuery; // @dynamic millisecondsSinceQuery;
@property(nonatomic) int resultSection; // @dynamic resultSection;
@property(retain, nonatomic) NSMutableArray *resultsArray; // @dynamic resultsArray;
@property(readonly, nonatomic) unsigned long long resultsArray_Count; // @dynamic resultsArray_Count;
@property(copy, nonatomic) NSString *tabTitle; // @dynamic tabTitle;

@end
