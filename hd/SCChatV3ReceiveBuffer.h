//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCChatV3ReceiveBuffer : NSObject
{
    NSMutableDictionary *_convToReceiveBufferBatch;
}

- (void).cxx_destruct;
- (_Bool)needsToFillGapsForConversation:(id)arg1;
- (id)bufferForConversationId:(id)arg1;
- (id)forceEnqueueMessages:(id)arg1 forConversation:(id)arg2;
- (id)enqueueMessage:(id)arg1 forConversation:(id)arg2 withGapHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

