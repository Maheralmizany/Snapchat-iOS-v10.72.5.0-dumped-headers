//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface SFixed32Rules : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int const_p; // @dynamic const_p;
@property(nonatomic) int gt; // @dynamic gt;
@property(nonatomic) int gte; // @dynamic gte;
@property(nonatomic) _Bool hasConst_p; // @dynamic hasConst_p;
@property(nonatomic) _Bool hasGt; // @dynamic hasGt;
@property(nonatomic) _Bool hasGte; // @dynamic hasGte;
@property(nonatomic) _Bool hasLt; // @dynamic hasLt;
@property(nonatomic) _Bool hasLte; // @dynamic hasLte;
@property(retain, nonatomic) GPBInt32Array *inArray; // @dynamic inArray;
@property(readonly, nonatomic) unsigned long long inArray_Count; // @dynamic inArray_Count;
@property(nonatomic) int lt; // @dynamic lt;
@property(nonatomic) int lte; // @dynamic lte;
@property(retain, nonatomic) GPBInt32Array *notInArray; // @dynamic notInArray;
@property(readonly, nonatomic) unsigned long long notInArray_Count; // @dynamic notInArray_Count;

@end

