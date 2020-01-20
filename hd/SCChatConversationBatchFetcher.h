//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatConversationBatchFetching.h"

@class NSString, SCChatSyncLatencyLogger, SCChatV3ConversationStore, SCChatV3MessageReceiver, SCLazy;

@interface SCChatConversationBatchFetcher : NSObject <SCChatConversationBatchFetching>
{
    SCChatV3ConversationStore *_conversationStore;
    id <SCChatConversationFetcher> _fetcher;
    SCChatV3MessageReceiver *_messageReceiver;
    SCLazy *_ghostToFeedLogger;
    SCChatSyncLatencyLogger *_syncLatencyLogger;
    SCLazy *_friendsFeedReadyLogger;
    SCLazy *_receiveFlowLogger;
    NSString *_username;
    SCLazy *_userPreferences;
}

- (void).cxx_destruct;
- (void)_handleConversationsFromServerByIds:(id)arg1 mischiefs:(id)arg2 conversations:(id)arg3 feedDeltaSyncToken:(id)arg4 fetchContext:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_verifyRequestConversationIds:(id)arg1 withVerificationData:(id)arg2 mischiefs:(id)arg3 conversations:(id)arg4 feedDeltaSyncToken:(id)arg5 fetchContext:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_batchFetchConversationsFromServerByIds:(id)arg1 withConversationsVersion:(id)arg2 verificationData:(id)arg3 fetchContext:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)batchFetchConversationsWithV3ActiveMessageData:(id)arg1 arroyoActiveMessageData:(id)arg2 forDataRequest:(id)arg3;
- (void)batchFetchConversationsFromServerByIds:(id)arg1;
- (void)configureWithMessageReceiver:(id)arg1;
- (id)initWithConversationFetcher:(id)arg1 conversationStore:(id)arg2 ghostToFeedLogger:(id)arg3 syncLatencyLogger:(id)arg4 friendsFeedReadyLogger:(id)arg5 receiveFlowLogger:(id)arg6 username:(id)arg7 userPreferences:(id)arg8;

@end

