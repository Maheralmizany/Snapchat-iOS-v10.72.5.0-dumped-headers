//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray, NSString;

@interface SCR2LabelFeatureVector : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatArray *featureVectorArray; // @dynamic featureVectorArray;
@property(readonly, nonatomic) unsigned long long featureVectorArray_Count; // @dynamic featureVectorArray_Count;
@property(nonatomic) int frameNumber; // @dynamic frameNumber;
@property(copy, nonatomic) NSString *tfnode; // @dynamic tfnode;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

