//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, SCFriendsFeedArroyoUpdateDataRequest;

@protocol SCChatConversationBatchFetching
- (void)batchFetchConversationsFromServerByIds:(NSArray *)arg1;
- (void)batchFetchConversationsWithV3ActiveMessageData:(NSDictionary *)arg1 arroyoActiveMessageData:(NSDictionary *)arg2 forDataRequest:(SCFriendsFeedArroyoUpdateDataRequest *)arg3;
@end
