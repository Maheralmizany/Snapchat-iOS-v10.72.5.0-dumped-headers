//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32ObjectDictionary, NSString;

@interface SCSUPRegisteredInterests : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32ObjectDictionary *registeredInterests; // @dynamic registeredInterests;
@property(readonly, nonatomic) unsigned long long registeredInterests_Count; // @dynamic registeredInterests_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

