//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, SCSFFSChatsState_ChatItem;

@interface SCSFFSChatsState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastChat; // @dynamic hasLastChat;
@property(retain, nonatomic) SCSFFSChatsState_ChatItem *lastChat; // @dynamic lastChat;
@property(retain, nonatomic) NSMutableArray *latestUnviewedReceivedChatItemWithUserIdArray; // @dynamic latestUnviewedReceivedChatItemWithUserIdArray;
@property(readonly, nonatomic) unsigned long long latestUnviewedReceivedChatItemWithUserIdArray_Count; // @dynamic latestUnviewedReceivedChatItemWithUserIdArray_Count;

@end
