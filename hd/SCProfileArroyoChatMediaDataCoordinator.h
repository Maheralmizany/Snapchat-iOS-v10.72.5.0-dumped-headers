//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProfileChatMessagesUpdateListener.h"
#import "SCUpdateAnnouncing.h"

@class NSArray, NSObject<NSCopying>, NSString, SCProfileSavedMessagesFetchingMetricsTracker, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCProfileArroyoChatMediaDataCoordinator : NSObject <SCProfileChatMessagesUpdateListener, SCUpdateAnnouncing>
{
    NSString *_conversationId;
    unsigned long long _numberOfMessagesPerPage;
    id <SCProfileSavedMediaChatMessagesFetching> _savedMediaChatMessagesFetcher;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_performer;
    SCProfileSavedMessagesFetchingMetricsTracker *_fetchingMetricsTracker;
    _Bool _hasMoreChatMedia;
    NSObject<NSCopying> *_paginationCursor;
    _Bool _isFetching;
    NSArray *_chatMedia;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdate;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)_updateMediaFromUpdatedMessages:(id)arg1 removedMessageIds:(id)arg2;
- (void)didUpdateConversation:(id)arg1 updatedMessages:(id)arg2 removedMessageIds:(id)arg3;
- (void)_updateMediaFromAppendedMessages:(id)arg1 nextPaginationCursor:(id)arg2;
- (void)_fetchMoreChatMedia;
- (void)fetchMoreChatMedia;
- (_Bool)hasMoreChatMedia;
- (id)chatMedia;
- (id)initWithConversationId:(id)arg1 numberOfMessagesPerPage:(unsigned long long)arg2 savedMediaChatMessagesFetcher:(id)arg3 chatMessagesUpdateTracker:(id)arg4 profileType:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

