//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class DdmlVariableTransform, GPBInt32Array;

@interface DdmlIntVariableSpec : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTransform; // @dynamic hasTransform;
@property(retain, nonatomic) GPBInt32Array *rangeOrBucketsArray; // @dynamic rangeOrBucketsArray;
@property(readonly, nonatomic) unsigned long long rangeOrBucketsArray_Count; // @dynamic rangeOrBucketsArray_Count;
@property(retain, nonatomic) DdmlVariableTransform *transform; // @dynamic transform;

@end

