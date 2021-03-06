//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatConversationStoreListener.h"
#import "SCDataCoordinating.h"
#import "SCTraceEnabled.h"

@class NSMutableDictionary, NSString, SCArroyoConversationIdsManager, SCChatConversationV3, SCChatSendBlockAssigner, SCChatSendBlockInfo, SCChatV3ConversationStore, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCChatConversationStoreDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating, SCChatConversationStoreListener>
{
    SCChatConversationV3 *_activeConversation;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
    SCChatV3ConversationStore *_conversationStore;
    id <SCChatMessageActionHandling> _actionHandler;
    NSMutableDictionary *_snapshotViewModels;
    NSString *_username;
    NSString *_userId;
    SCChatSendBlockAssigner *_blockAssigner;
    SCChatSendBlockInfo *_blockInfo;
    SCArroyoConversationIdsManager *_arroyoIdsManager;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)activeConversationDataForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setActiveConversation:(id)arg1;
- (void)diskLoadFinishedWithConversations:(id)arg1;
- (void)_conversationDidUpdate:(id)arg1 blockInfo:(id)arg2;
- (void)_updateBlockForConversation:(id)arg1;
- (void)conversationDidUpdate:(id)arg1;
- (void)_setActiveConversationId:(id)arg1;
- (void)_resumeActiveConversationId:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (id)initWithConversationStore:(id)arg1 actionHandler:(id)arg2 arroyoIdsManager:(id)arg3 blockAssigner:(id)arg4 username:(id)arg5 userId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

