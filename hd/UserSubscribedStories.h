//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface UserSubscribedStories : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *subscribedStories; // @dynamic subscribedStories;
@property(readonly, nonatomic) unsigned long long subscribedStories_Count; // @dynamic subscribedStories_Count;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end
