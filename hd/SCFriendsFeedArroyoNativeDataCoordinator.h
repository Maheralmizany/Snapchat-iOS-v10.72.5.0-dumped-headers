//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArroyoFeedDataUpdateListener.h"
#import "SCDataCoordinating.h"
#import "SCDataCoordinatorListener.h"
#import "SCTraceEnabled.h"

@class NSDictionary, NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCFriendsFeedsComparisonManager, SCLazy, SCQueuePerformer;

@interface SCFriendsFeedArroyoNativeDataCoordinator : NSObject <SCTraceEnabled, SCDataCoordinating, SCDataCoordinatorListener, SCArroyoFeedDataUpdateListener>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCDocObjectContext *_docObjectContext;
    NSString *_userId;
    NSString *_username;
    SCLazy *_lazySnapchattersDataFetcher;
    SCLazy *_lazySnapchatterPublicInfoFetcher;
    SCLazy *_lazyUserInfoProvider;
    NSDictionary *_cachedActiveMessageData;
    NSDictionary *_cachedFeedItemInfos;
    SCQueuePerformer *_performer;
    SCLazy *_autoShakeToReporter;
    NSMutableDictionary *_pendingUpdatedFeedEntries;
    NSMutableDictionary *_pendingDeletedFeedEntries;
    SCFriendsFeedsComparisonManager *_feedsComparisonManager;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (id)_fetchSnapchattersByForUpdatedFeedEntries:(id)arg1 deletedFeedIdentifiers:(id)arg2;
- (void)_announceArroyoUpdatesWithDataRequest:(id)arg1;
- (void)_setFeedItemInfos:(id)arg1 updatedFeedIds:(id)arg2 deletedFeedEntries:(id)arg3 snapchattersByUserId:(id)arg4 updateType:(long long)arg5 fetchContext:(id)arg6;
- (void)_processFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 snapchattersByUserId:(id)arg3 updateType:(long long)arg4 fetchContext:(id)arg5;
- (void)_didUpdateFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 updateType:(long long)arg3 fetchContext:(id)arg4;
- (void)didFeedEntriesArrive:(id)arg1;
- (void)didFetchFeedCompleteFeedEntries:(id)arg1 fetchContext:(id)arg2;
- (void)didQueryFeedCompleteFeedEntries:(id)arg1 hasNoMore:(_Bool)arg2 fetchContext:(id)arg3;
- (void)didFetchAndSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didUpdateFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)_activeMessageDataForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeMessageDataForFeedIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1 userId:(id)arg2 username:(id)arg3 lazySnapchattersDataFetcher:(id)arg4 lazySnapchatterPublicInfoFetcher:(id)arg5 lazyUserInfoProvider:(id)arg6 autoShakeToReporter:(id)arg7 feedsComparisonManager:(id)arg8;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

