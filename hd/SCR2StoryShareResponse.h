//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2Status;

@interface SCR2StoryShareResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(copy, nonatomic) NSString *sharingId; // @dynamic sharingId;
@property(copy, nonatomic) NSString *sharingMessage; // @dynamic sharingMessage;
@property(retain, nonatomic) SCR2Status *status; // @dynamic status;

@end
