//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface IMPGetBusinessStoryManifestForSnapIdsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessId; // @dynamic businessId;
@property(retain, nonatomic) NSMutableArray *snapIdsArray; // @dynamic snapIdsArray;
@property(readonly, nonatomic) unsigned long long snapIdsArray_Count; // @dynamic snapIdsArray_Count;

@end

