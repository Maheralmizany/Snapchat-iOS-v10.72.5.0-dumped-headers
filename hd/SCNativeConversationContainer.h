//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SCChatRenderingConversation.h"

@class NSArray, NSString, SCNMessagingConversation;

@interface SCNativeConversationContainer : NSObject <SCChatRenderingConversation, NSCopying>
{
    SCNMessagingConversation *_conversation;
    NSArray *_messages;
}

@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(readonly, copy, nonatomic) SCNMessagingConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversation:(id)arg1 messages:(id)arg2;
- (long long)migrationState;
- (id)lastInteractionTimestamp;
- (_Bool)hadAnyMessages;
- (id)title;
- (id)recipientUsernameForOneOnOneWithCurrentUser:(id)arg1;
- (unsigned long long)messageRetentionInMinutes;
- (_Bool)doNotDisturbMentions;
- (_Bool)doNotDisturb;
- (id)seenChatSequenceNums;
- (struct NSDictionary *)stickerUsageHistory;
- (id)lastSeenMessageIdForUserId:(id)arg1;
- (id)lastCommitedMessageId;
- (struct NSDictionary *)knownChatSequenceNumsForViewing;
- (_Bool)hasUnreadMessagesForUser:(id)arg1;
- (_Bool)isArroyoConversation;
- (_Bool)isGroupConversation;
- (_Bool)isPending;
- (id)lastSeenMessageTimestamp;
- (long long)historyLoadingStatus;
- (id)participants;
- (id)id;
- (id)messagesDictionary;
- (id)messagesForRendering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

