//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCChatV3MessageBuffer;

@interface SCChatV3MessageBufferBatch : NSObject
{
    SCChatV3MessageBuffer *_chatMessageBuffer;
    SCChatV3MessageBuffer *_stateUpdateMessageBuffer;
    SCChatV3MessageBuffer *_snapAndSnapStateMessageBuffer;
}

- (void).cxx_destruct;
- (_Bool)needsToFillGaps;
- (id)processBufferForConversation:(id)arg1;
- (id)_messageBufferForMessage:(id)arg1;
- (id)enqueueMessage:(id)arg1 forConversation:(id)arg2 withGapHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

