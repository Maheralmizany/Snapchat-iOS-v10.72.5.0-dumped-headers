//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMTFriendLocationsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *continuationId; // @dynamic continuationId;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) NSMutableArray *lastKnownLocationArray; // @dynamic lastKnownLocationArray;
@property(readonly, nonatomic) unsigned long long lastKnownLocationArray_Count; // @dynamic lastKnownLocationArray_Count;
@property(nonatomic) float lat; // @dynamic lat;
@property(nonatomic) float lng; // @dynamic lng;
@property(nonatomic) int requestedChunkSize; // @dynamic requestedChunkSize;

@end

