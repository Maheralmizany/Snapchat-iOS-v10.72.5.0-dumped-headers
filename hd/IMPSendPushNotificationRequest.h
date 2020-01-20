//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPPushNotificationData, NSString;

@interface IMPSendPushNotificationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *businessTitle; // @dynamic businessTitle;
@property(retain, nonatomic) IMPPushNotificationData *clientData; // @dynamic clientData;
@property(nonatomic) _Bool hasClientData; // @dynamic hasClientData;
@property(copy, nonatomic) NSString *inviterUserId; // @dynamic inviterUserId;
@property(copy, nonatomic) NSString *milestoneMessageType; // @dynamic milestoneMessageType;
@property(copy, nonatomic) NSString *recipientUserId; // @dynamic recipientUserId;
@property(copy, nonatomic) NSString *roleType; // @dynamic roleType;
@property(copy, nonatomic) NSString *senderUserId; // @dynamic senderUserId;
@property(nonatomic) int type; // @dynamic type;

@end
