//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedQueryCoordinating.h"

@class NSMutableArray, NSString, SCDiscoverFeedDataStore, SCDiscoverFeedInteractionHistoryModifier, SCDiscoverFeedNetworkResponseProcessor, SCExperimentManager, SCGCDBlockTimer, SCLazy, SCQueuePerformer, SCSearchNavigationCoordinator, SCSearchQuery, SCSessionRequestManager, SCUserSession;

@interface SCDiscoverFeedQueryCoordinator : NSObject <SCDiscoverFeedQueryCoordinating>
{
    SCUserSession *_userSession;
    SCLazy *_sectionExtensionServices;
    SCLazy *_snapTokenProvider;
    SCSessionRequestManager *_requestManager;
    SCExperimentManager *_experimentManager;
    SCDiscoverFeedDataStore *_storiesDataStore;
    SCDiscoverFeedInteractionHistoryModifier *_interactionHistoryModifier;
    id <SCDiscoverFeedDebugInfoDataProviding> _debugInfoDataProvider;
    SCDiscoverFeedNetworkResponseProcessor *_networkResponseProcessor;
    NSMutableArray *_queryRetryTimers;
    SCQueuePerformer *_performer;
    SCLazy *_discoverFeedDataCoordinator;
    SCLazy *_friendStoriesDataCoordinator;
    SCLazy *_docObjectContext;
    SCLazy *_storiesSyncNetworkRequester;
    id <SCDiscoverFeedEndpointManaging> _discoverFeedEndpointManager;
    SCGCDBlockTimer *_queryTimeoutTimer;
    _Bool _isLoading;
    SCSearchQuery *_currentQuery;
    SCSearchNavigationCoordinator *_navigationCoordinator;
    id <SCDiscoverFeedQueryCoordinatingDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCDiscoverFeedQueryCoordinatingDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery=_currentQuery;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (void)_logResponse:(id)arg1 query:(id)arg2;
- (void)_updateContentSectionsWithSectionMetadatas:(id)arg1 query:(id)arg2 resultState:(long long)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (id)_personalizeLoadQueryResultWithQuery:(id)arg1;
- (id)_createSectionFromResponse:(id)arg1 feedType:(int)arg2 query:(id)arg3 watchedStatesByEditionId:(id)arg4;
- (void)_handleStoriesResponse:(id)arg1 watchedStatesByEditionId:(id)arg2 query:(id)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)_syncShowWatchedStateAndHandleStoriesResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleStoriesResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_updateDebugWithBatchResponse:(id)arg1;
- (void)_updatePlaybackSequenceIntoDataStore:(id)arg1;
- (void)_prefetchPlaybackInfoBasedOnStoriesResponse:(id)arg1;
- (void)_persistStoriesToDataStoreWithStoriesResponse:(id)arg1 watchedStatesByEditionId:(id)arg2 metaStreamToken:(id)arg3 query:(id)arg4;
- (void)_persistBatchResponse:(id)arg1 watchedStatesByEditionId:(id)arg2 query:(id)arg3;
- (id)_persistSectionMetadataWithStoriesResponse:(id)arg1;
- (void)_handleStoriesBatchResponse:(id)arg1 watchedStatesByEditionId:(id)arg2 query:(id)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)_syncShowWatchedStateAndHandleStoriesBatchResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleStoriesBatchResponse:(id)arg1 query:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_handleFailureWithQuery:(id)arg1 error:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3 statusCodeToDisplay:(id)arg4;
- (void)_updateForResponseFromQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2 response:(id)arg3 data:(id)arg4 error:(id)arg5 startTime:(double)arg6 retryTimer:(id)arg7;
- (void)_sendQueryBlock:(id)arg1 snapToken:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3 retryTimer:(id)arg4 tapHistory:(id)arg5 interactionsHistory:(id)arg6 pageSessionId:(id)arg7;
- (void)_sendQuery:(id)arg1 snapToken:(id)arg2 tapHistory:(id)arg3 interactionsHistory:(id)arg4 pageSessionId:(id)arg5 updatingBlock:(CDUnknownBlockType)arg6;
- (void)_fetchRemoteStoriesWithQuery:(id)arg1 tapHistory:(id)arg2 pageSessionId:(id)arg3 updatingBlock:(CDUnknownBlockType)arg4;
- (void)_fetchRemoteStoriesWithQuery:(id)arg1 tapHistory:(id)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_fetchRemoteDFStoriesWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_fetchRemoteFriendStoriesWithQuery:(id)arg1;
- (void)_fetchRemoteFriendAndDFStoriesIfNeededWithQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_synchronizedCachedContentFetchWithoutDispatchGroupForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_synchronizedCachedContentFetchForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (void)_timeoutTimerAssertWithQuery:(id)arg1 resultState:(long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_startQueryTimeoutTimerWithQuery:(id)arg1 resultState:(long long)arg2 updatingBlock:(CDUnknownBlockType)arg3;
- (void)_invalidateQueryTimeoutTimer;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPerformQuery:(id)arg1;
- (id)initWithUserSession:(id)arg1 sectionExtensionServices:(id)arg2 snapTokenProvider:(id)arg3 discoverFeedDataCoordinator:(id)arg4 friendStoriesDataCoordinator:(id)arg5 docObjectContext:(id)arg6 storiesSyncNetworkRequester:(id)arg7 discoverFeedEndpointManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
