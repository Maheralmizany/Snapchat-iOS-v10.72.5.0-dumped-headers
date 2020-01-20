//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChatConversationRequestFactory : NSObject
{
}

+ (id)createUploadChatMediaRequestWithIdentifier:(id)arg1 type:(id)arg2 recipient:(id)arg3 conversationId:(id)arg4 sourceId:(id)arg5 isZipped:(id)arg6 data:(id)arg7;
+ (id)createUpdateCognacNotificationStatusRequest:(_Bool)arg1 conversationId:(id)arg2;
+ (id)createTypingRequestForRecipient:(id)arg1 sequenceNumbers:(id)arg2;
+ (id)createGroupTypingRequestForConversationId:(id)arg1 sequenceNumbers:(id)arg2;
+ (id)createClearGroupConversationRequestForConversationId:(id)arg1;
+ (id)createClearConversationRequestForConversationId:(id)arg1;
+ (id)createMessageRetentionPolicyRequestForConversationId:(id)arg1 retentionInMinutes:(unsigned long long)arg2;
+ (id)createFetchGatewayAuthTokenRequest;

@end
