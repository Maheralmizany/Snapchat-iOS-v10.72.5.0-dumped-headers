//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCMECheckinLocationCategorization;

@interface SCMECheckinLocationOption : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMECheckinLocationCategorization *categorization; // @dynamic categorization;
@property(retain, nonatomic) NSMutableArray *checkinStickersArray; // @dynamic checkinStickersArray;
@property(readonly, nonatomic) unsigned long long checkinStickersArray_Count; // @dynamic checkinStickersArray_Count;
@property(nonatomic) _Bool hasCategorization; // @dynamic hasCategorization;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *locality; // @dynamic locality;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int placetype; // @dynamic placetype;
@property(nonatomic) int rank; // @dynamic rank;

@end
