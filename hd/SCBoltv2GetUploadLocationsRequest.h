//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCBoltv2UserContext;

@interface SCBoltv2GetUploadLocationsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int batchSize; // @dynamic batchSize;
@property(nonatomic) int contentReferenceResultOption; // @dynamic contentReferenceResultOption;
@property(nonatomic) _Bool hasUserContext; // @dynamic hasUserContext;
@property(nonatomic) int storageProvider; // @dynamic storageProvider;
@property(nonatomic) int storageRegion; // @dynamic storageRegion;
@property(retain, nonatomic) NSMutableArray *suffixExtensionsArray; // @dynamic suffixExtensionsArray;
@property(readonly, nonatomic) unsigned long long suffixExtensionsArray_Count; // @dynamic suffixExtensionsArray_Count;
@property(retain, nonatomic) SCBoltv2UserContext *userContext; // @dynamic userContext;

@end

