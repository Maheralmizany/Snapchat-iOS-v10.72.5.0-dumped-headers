//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCBoltv2ExternalContentReference : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bucketName; // @dynamic bucketName;
@property(copy, nonatomic) NSString *objectPath; // @dynamic objectPath;
@property(nonatomic) int storageProvider; // @dynamic storageProvider;
@property(nonatomic) int storageRegion; // @dynamic storageRegion;

@end

