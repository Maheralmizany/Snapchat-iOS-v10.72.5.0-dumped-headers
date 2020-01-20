//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCoreMessageSending.h"

@class SCLazy;

@interface SCCoreMessageSender : NSObject <SCCoreMessageSending>
{
    SCLazy *_nativeSessionManager;
}

- (void).cxx_destruct;
- (void)retryFailedMessageWithId:(id)arg1 conversationId:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendMessageWithContent:(id)arg1 conversations:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendMessageWithContent:(id)arg1 conversations:(id)arg2 stories:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)prepareAndSendMessage:(id)arg1 messageContent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)nativeConversationManager;
- (id)initWithNativeSessionManager:(id)arg1;

@end

