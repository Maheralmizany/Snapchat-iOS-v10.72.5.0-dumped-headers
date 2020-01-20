//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, SCExperimentManager, SCGCDTimer, SCQueuePerformer;

@interface SCChatMessageSendQueue : NSObject
{
    SCQueuePerformer *_performer;
    SCExperimentManager *_experimentManager;
    id <SCChatMessageSender> _messageSender;
    long long _maxRetryTimeInterval;
    long long _nextRetryDelay;
    SCGCDTimer *_timeoutTimer;
    SCGCDTimer *_resendTimer;
    NSMutableDictionary *_failedMessageResult;
    NSMutableDictionary *_lastFailedMessageResult;
    NSMutableArray *_chatMessageQueue;
    NSMutableDictionary *_messageCompletionHandlers;
}

@property(retain, nonatomic) NSMutableDictionary *messageCompletionHandlers; // @synthesize messageCompletionHandlers=_messageCompletionHandlers;
@property(retain, nonatomic) NSMutableArray *chatMessageQueue; // @synthesize chatMessageQueue=_chatMessageQueue;
- (void).cxx_destruct;
- (void)_invokeHandlerForMessageWithId:(id)arg1 result:(long long)arg2 response:(id)arg3;
- (void)_sentMessagesTimedOut;
- (void)_message:(id)arg1 handleSendMessageResult:(long long)arg2 response:(id)arg3;
- (void)message:(id)arg1 handleSendMessageResult:(long long)arg2 response:(id)arg3;
- (void)_sendMessage:(id)arg1;
- (void)_sendChatMessages;
- (void)_sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithMaxRetryInterval:(long long)arg1 messageSender:(id)arg2 experimentManager:(id)arg3 performer:(id)arg4;
- (id)initWithMessageSender:(id)arg1 experimentManager:(id)arg2;

@end

