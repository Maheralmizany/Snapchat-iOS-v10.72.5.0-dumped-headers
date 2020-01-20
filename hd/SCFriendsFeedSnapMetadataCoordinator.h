//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMetadataStoreListener.h"
#import "SCDataCoordinating.h"
#import "SCDataCoordinatorListener.h"
#import "SCTraceEnabled.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer;

@interface SCFriendsFeedSnapMetadataCoordinator : NSObject <SCChatMetadataStoreListener, SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_currentChatSnapMessageMetadataByFeedId;
    NSString *_currentUsername;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_updateSnapMessageMetadataWithConversationMetadatas:(id)arg1;
- (void)_fetchConversationMetadatasWithMetadataStore:(id)arg1;
- (void)metadataDidUpdate:(id)arg1 conversationId:(id)arg2;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)activeChatSnapMessageMetadataForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMetadataStore:(id)arg1 currentUsername:(id)arg2;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

