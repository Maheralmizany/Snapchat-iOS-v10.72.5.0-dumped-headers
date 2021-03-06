//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface BytesRules : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *const_p; // @dynamic const_p;
@property(copy, nonatomic) NSData *contains; // @dynamic contains;
@property(nonatomic) _Bool hasConst_p; // @dynamic hasConst_p;
@property(nonatomic) _Bool hasContains; // @dynamic hasContains;
@property(nonatomic) _Bool hasLen; // @dynamic hasLen;
@property(nonatomic) _Bool hasMaxLen; // @dynamic hasMaxLen;
@property(nonatomic) _Bool hasMinLen; // @dynamic hasMinLen;
@property(nonatomic) _Bool hasPattern; // @dynamic hasPattern;
@property(nonatomic) _Bool hasPrefix; // @dynamic hasPrefix;
@property(nonatomic) _Bool hasSuffix; // @dynamic hasSuffix;
@property(retain, nonatomic) NSMutableArray *inArray; // @dynamic inArray;
@property(readonly, nonatomic) unsigned long long inArray_Count; // @dynamic inArray_Count;
@property(nonatomic) _Bool ip; // @dynamic ip;
@property(nonatomic) _Bool ipv4; // @dynamic ipv4;
@property(nonatomic) _Bool ipv6; // @dynamic ipv6;
@property(nonatomic) unsigned long long len; // @dynamic len;
@property(nonatomic) unsigned long long maxLen; // @dynamic maxLen;
@property(nonatomic) unsigned long long minLen; // @dynamic minLen;
@property(retain, nonatomic) NSMutableArray *notInArray; // @dynamic notInArray;
@property(readonly, nonatomic) unsigned long long notInArray_Count; // @dynamic notInArray_Count;
@property(copy, nonatomic) NSString *pattern; // @dynamic pattern;
@property(copy, nonatomic) NSData *prefix; // @dynamic prefix;
@property(copy, nonatomic) NSData *suffix; // @dynamic suffix;
@property(readonly, nonatomic) int wellKnownOneOfCase; // @dynamic wellKnownOneOfCase;

@end

