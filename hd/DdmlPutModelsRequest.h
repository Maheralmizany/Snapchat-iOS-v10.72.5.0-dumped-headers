//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface DdmlPutModelsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *instanceArray; // @dynamic instanceArray;
@property(readonly, nonatomic) unsigned long long instanceArray_Count; // @dynamic instanceArray_Count;
@property(retain, nonatomic) NSMutableArray *resultArray; // @dynamic resultArray;
@property(readonly, nonatomic) unsigned long long resultArray_Count; // @dynamic resultArray_Count;

@end

