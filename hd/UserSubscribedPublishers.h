//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64ObjectDictionary, NSString;

@interface UserSubscribedPublishers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64ObjectDictionary *subscribedPublishers; // @dynamic subscribedPublishers;
@property(readonly, nonatomic) unsigned long long subscribedPublishers_Count; // @dynamic subscribedPublishers_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

