//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapMessageSending.h"

@class SCLazy;

@interface SCMapMessagesSender : NSObject <SCMapMessageSending>
{
    SCLazy *_coreMessageSender;
    SCLazy *_textMessageSender;
}

- (void).cxx_destruct;
- (void)sendMapSnapShareMessage:(id)arg1 conversations:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendMapStoryShareMessage:(id)arg1 conversations:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendLocationShare:(id)arg1 conversationId:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendLocationRequestToRecipient:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCoreMessageSender:(id)arg1 textMessageSender:(id)arg2;

@end
