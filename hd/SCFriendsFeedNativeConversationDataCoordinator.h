//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArroyoConversationDataUpdateListener.h"
#import "SCDataCoordinating.h"
#import "SCDataCoordinatorListener.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCLazy, SCQueuePerformer;

@interface SCFriendsFeedNativeConversationDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener, SCArroyoConversationDataUpdateListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
    SCLazy *_nativeSessionManager;
    NSString *_currentUserId;
    SCLazy *_docObjectContext;
    NSMutableDictionary *_conversationStatesByFeedId;
    NSMutableDictionary *_conversationIdToFeedId;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_announceWithUpdatedFeedIds:(id)arg1;
- (void)_fetchAllLocalConversations:(id)arg1;
- (void)_syncLocalConversations;
- (void)_didRemoveConversation:(id)arg1;
- (void)_upsertConversation:(id)arg1 messages:(id)arg2;
- (void)_createConversation:(id)arg1;
- (id)_conversationStatesForFeedIds:(id)arg1;
- (void)didSendComplete:(id)arg1;
- (void)didRemoveConversation:(id)arg1;
- (void)didConversationUpdateForConversationId:(id)arg1 conversation:(id)arg2 updatedMessages:(id)arg3 removedMessages:(id)arg4;
- (void)didCreateConversation:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)conversationStatesForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nativeConversationManager;
- (id)initWithNativeSessionManager:(id)arg1 currentUserId:(id)arg2 docObjectContext:(id)arg3;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

