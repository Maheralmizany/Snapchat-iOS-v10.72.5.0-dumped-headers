//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SGTIGetRegistryResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *groupsArray; // @dynamic groupsArray;
@property(readonly, nonatomic) unsigned long long groupsArray_Count; // @dynamic groupsArray_Count;
@property(nonatomic) long long lastUpdatedTimeMs; // @dynamic lastUpdatedTimeMs;
@property(retain, nonatomic) NSMutableArray *servicesArray; // @dynamic servicesArray;
@property(readonly, nonatomic) unsigned long long servicesArray_Count; // @dynamic servicesArray_Count;

@end
