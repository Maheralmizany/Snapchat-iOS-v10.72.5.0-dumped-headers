//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProfileChatMessagesUpdateListener.h"
#import "SCUpdateAnnouncing.h"

@class NSArray, NSObject<NSCopying>, NSString, SCProfileSavedMessagesFetchingMetricsTracker, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCProfileArroyoChatAttachmentDataCoordinator : NSObject <SCProfileChatMessagesUpdateListener, SCUpdateAnnouncing>
{
    NSString *_conversationId;
    unsigned long long _numberOfMessagesPerPage;
    id <SCProfileSavedAttachmentsChatMessagesFetching> _savedAttachmentChatMessagesFetcher;
    SCQueuePerformer *_performer;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCProfileSavedMessagesFetchingMetricsTracker *_fetchingMetricsTracker;
    _Bool _hasMoreAttachments;
    NSObject<NSCopying> *_paginationCursor;
    NSArray *_chatAttachments;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdate;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)_updateAttachmentsFromAppendedMessages:(id)arg1 removedMessageIds:(id)arg2;
- (void)didUpdateConversation:(id)arg1 updatedMessages:(id)arg2 removedMessageIds:(id)arg3;
- (void)_updateAttachmentsFromAppendedMessages:(id)arg1 nextPaginationCursor:(id)arg2;
- (void)_fetchMoreChatAttachments;
- (void)fetchMoreChatAttachments;
- (_Bool)hasMoreChatAttachments;
- (id)chatAttachments;
- (id)initWithConversationId:(id)arg1 numberOfMessagesPerPage:(unsigned long long)arg2 savedAttachmentMessagesFetcher:(id)arg3 chatMessagesUpdateTracker:(id)arg4 profileType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

