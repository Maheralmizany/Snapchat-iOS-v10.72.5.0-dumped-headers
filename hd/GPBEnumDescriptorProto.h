//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumOptions, NSMutableArray, NSString;

@interface GPBEnumDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GPBEnumOptions *options; // @dynamic options;
@property(retain, nonatomic) NSMutableArray *valueArray; // @dynamic valueArray;
@property(readonly, nonatomic) unsigned long long valueArray_Count; // @dynamic valueArray_Count;

@end

