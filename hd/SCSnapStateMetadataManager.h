//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCChatV3MetadataStore;

@interface SCSnapStateMetadataManager : NSObject
{
    SCChatV3MetadataStore *_metadataStore;
}

- (void).cxx_destruct;
- (void)resetMessageMetadatasForConversationId:(id)arg1;
- (void)updateAllMessageMetadatasWithReplayAttemptsForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMessageMetadataForConversationId:(id)arg1 attemptReplaySnap:(id)arg2;
- (void)updateMessageMetadataForConversationId:(id)arg1 finishViewingSnap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateMessageMetadataForConversationId:(id)arg1 openSnap:(id)arg2 openTimestamp:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithMetadataStore:(id)arg1;

@end

