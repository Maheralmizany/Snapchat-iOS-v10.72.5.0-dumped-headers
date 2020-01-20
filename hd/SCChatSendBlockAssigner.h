//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCChatSendBlockAssigner : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_conversationToBlockAssigner;
    id <SCChatSendBlockAssignerDelegate> _delegate;
}

@property(retain, nonatomic) id <SCChatSendBlockAssignerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_getOrCreateAssignerFor:(id)arg1;
- (void)fetchBlockInfoForConversation:(id)arg1 completion:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;
- (void)updateBlockIdForConversationId:(id)arg1 messages:(id)arg2 completion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)init;
- (id)initWithPerformer:(id)arg1;

@end

