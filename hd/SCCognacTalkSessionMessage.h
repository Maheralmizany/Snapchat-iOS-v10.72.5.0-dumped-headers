//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCognacStatusStreamMessage, SCCognacTalkSessionTextMessage;

@interface SCCognacTalkSessionMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(readonly, nonatomic) int messageOneOfCase; // @dynamic messageOneOfCase;
@property(retain, nonatomic) SCCognacStatusStreamMessage *statusStreamMessage; // @dynamic statusStreamMessage;
@property(retain, nonatomic) SCCognacTalkSessionTextMessage *textMessage; // @dynamic textMessage;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

