//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMECheckinActionmojiOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *checkinStickersArray; // @dynamic checkinStickersArray;
@property(readonly, nonatomic) unsigned long long checkinStickersArray_Count; // @dynamic checkinStickersArray_Count;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int rank; // @dynamic rank;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
