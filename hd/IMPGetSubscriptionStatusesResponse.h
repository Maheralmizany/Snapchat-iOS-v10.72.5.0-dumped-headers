//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringBoolDictionary;

@interface IMPGetSubscriptionStatusesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBStringBoolDictionary *subscriptionStatuses; // @dynamic subscriptionStatuses;
@property(readonly, nonatomic) unsigned long long subscriptionStatuses_Count; // @dynamic subscriptionStatuses_Count;

@end

