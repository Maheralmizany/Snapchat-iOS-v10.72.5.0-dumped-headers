//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingUUID;

@interface SCMessagingCallingStatusMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int callStatus; // @dynamic callStatus;
@property(nonatomic) int callType; // @dynamic callType;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) SCMessagingUUID *userId; // @dynamic userId;

@end

