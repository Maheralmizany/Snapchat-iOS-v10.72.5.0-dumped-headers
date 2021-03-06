//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinatorListener.h"
#import "SCStoriesMetadataCoordinating.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCExperimentManager, SCLazy, SCQueuePerformer, SCSessionRequestManager, SCStoriesRankedStoryIdentifiersObserver, SCStoriesSummariesObserver;

@interface SCStoriesDataCoordinator : NSObject <SCDataCoordinatorListener, SCStoriesMetadataCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    SCSessionRequestManager *_sessionRequestManager;
    SCQueuePerformer *_utilityPerformer;
    SCLazy *_customStoriesDataSyncer;
    SCLazy *_mixerRequester;
    SCLazy *_snapchatterFetcher;
    id <SCStoriesGrapheneMetricsEmitting> _grapheneMetricsEmitter;
    SCExperimentManager *_experimentManager;
    NSString *_currentUserId;
    NSString *_currentUsername;
    SCStoriesRankedStoryIdentifiersObserver *_rankedStoryIdentifiersObserver;
    SCStoriesSummariesObserver *_storiesSummariesObserver;
    SCLazy *_snapReadReceiptLogger;
    SCLazy *_snapReadReceiptDataCoordinator;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_applySOJUStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 pendingOrFollowingFriendUsernames:(id)arg3 shouldFullyFetchMobstoriesMetadata:(_Bool)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)applySOJUStoriesResponse:(id)arg1 fetchTriggerIdentifier:(id)arg2 shouldFullyFetchMobstoriesMetadata:(_Bool)arg3 fetchUnidirectionalFriendsSeparately:(_Bool)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)_updateAllSummaryInfosWithViewStates;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)updateAllSummaryInfosWithViewStates;
- (void)deleteExpiredMetadata;
- (void)deleteStorySnapsWithSnapComponentId:(id)arg1;
- (void)deleteCustomStorySnapsWithPublicationId:(id)arg1 clientIds:(id)arg2;
- (void)deleteFriendStorySnapsWithUsername:(id)arg1 clientIds:(id)arg2;
- (void)_syncCustomStoriesMetadataForCustomStoryIds:(id)arg1 fetchStartTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleStoriesBatchResponse:(id)arg1 fetchStartTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFriendStoriesWithCompletion:(CDUnknownBlockType)arg1 fetchSource:(id)arg2;
- (id)_existingCustomStoriesSequenceInfo;
- (id)_existingFriendStoriesSequenceInfo;
- (void)_logFetchFriendStoriesLatencyWithStartTime:(double)arg1 step:(id)arg2;
- (id)_fetchExistingUserIdToSequenceMappingWithUserIds:(id)arg1;
- (void)_handleBatchStoryLookupResponse:(id)arg1 fetchedUserIds:(id)arg2;
- (void)fetchStoriesWithUserIds:(id)arg1;
- (void)storySnapsInfoForStoryIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storiesSummaryFilteredByIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRankedStoryIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFriendStoriesDeltaCursor:(CDUnknownBlockType)arg1;
- (id)initWithSessionRequestManager:(id)arg1 docObjectContext:(id)arg2 mixerRequester:(id)arg3 customStoriesDataSyncer:(id)arg4 snapchatterFetcher:(id)arg5 snapReadReceiptLogger:(id)arg6 snapReadReceiptDataCoordinator:(id)arg7 grapheneMetricsEmitter:(id)arg8 experimentManager:(id)arg9 currentUserId:(id)arg10 currentUsername:(id)arg11;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

