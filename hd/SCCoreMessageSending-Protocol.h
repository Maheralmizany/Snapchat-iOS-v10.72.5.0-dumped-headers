//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SCNMessagingLocalMessageContent, SCNMessagingMessageContent;

@protocol SCCoreMessageSending
- (void)retryFailedMessageWithId:(NSString *)arg1 conversationId:(NSString *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)sendMessageWithContent:(SCNMessagingLocalMessageContent *)arg1 conversations:(NSArray *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(long long))arg4;
- (void)sendMessageWithContent:(SCNMessagingLocalMessageContent *)arg1 conversations:(NSArray *)arg2 stories:(NSArray *)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionHandler:(void (^)(long long))arg5;
- (void)prepareAndSendMessage:(NSString *)arg1 messageContent:(SCNMessagingMessageContent *)arg2 completionHandler:(void (^)(long long))arg3;
@end
