//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray;

@interface SnapBrainResponse_Results_Context_ContextFeature : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDoubleArray *featureVectorArray; // @dynamic featureVectorArray;
@property(readonly, nonatomic) unsigned long long featureVectorArray_Count; // @dynamic featureVectorArray_Count;
@property(nonatomic) unsigned int frameId; // @dynamic frameId;

@end

