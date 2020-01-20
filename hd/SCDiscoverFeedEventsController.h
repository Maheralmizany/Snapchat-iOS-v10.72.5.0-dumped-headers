//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedClientRerankingManagerDelegate.h"
#import "SCDiscoverFeedEventsSessionProviding.h"
#import "SCDiscoverFeedLoggingLongImpressionManagerDelegate.h"
#import "SCDiscoverFeedScrollTrackerDelegate.h"
#import "SCEventListener.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCDiscoverFeedClientRerankingManager, SCDiscoverFeedEventsConfiguration, SCDiscoverFeedInteractionHistoryManager, SCDiscoverFeedLogger, SCDiscoverFeedLoggingLongImpressionManager, SCDiscoverFeedLoggingViewingSessionData, SCDiscoverFeedScrollTracker, SCDiscoverFeedTapHistoryManager, SCDiscoverFeedViewTracker, SCDisposableObserverLifecycle, SCExperimentManager, SCLazy, SCScopedAccess, SCSessionRequestManager;

@interface SCDiscoverFeedEventsController : NSObject <SCDiscoverFeedLoggingLongImpressionManagerDelegate, SCDiscoverFeedClientRerankingManagerDelegate, SCDiscoverFeedScrollTrackerDelegate, SCEventListener, SCDiscoverFeedEventsSessionProviding>
{
    id <SCPerforming> _performer;
    NSString *_pageSessionId;
    long long _pageType;
    NSString *_pageTypeSpecific;
    NSString *_friendServerRankingId;
    SCDiscoverFeedViewTracker *_feedViewTracker;
    NSMutableDictionary *_sectionToViewModelIdentifiers;
    NSMutableDictionary *_sectionToRerankingId;
    NSMutableDictionary *_sectionToUncompletedStoryCount;
    SCDiscoverFeedEventsConfiguration *_configuration;
    NSMutableArray *_sessionManagers;
    SCDiscoverFeedLoggingLongImpressionManager *_rankingLongImpressionManager;
    SCDiscoverFeedLoggingLongImpressionManager *_adsMinimumVisibleLongImpressionManager;
    SCDiscoverFeedLoggingLongImpressionManager *_adsFullyVisibleLongImpressionManager;
    SCDiscoverFeedLoggingLongImpressionManager *_rankingShortImpressionManager;
    SCDiscoverFeedLoggingLongImpressionManager *_rankingProminentImpressionManager;
    SCDiscoverFeedLogger *_logger;
    SCDiscoverFeedScrollTracker *_scrollTracker;
    NSArray *_feedTypeOrder;
    SCDiscoverFeedLoggingViewingSessionData *_itemViewingSession;
    SCDiscoverFeedLoggingViewingSessionData *_subitemViewingSession;
    SCDiscoverFeedLoggingViewingSessionData *_interstitialViewData;
    long long _nextSubitemEntryEvent;
    _Bool _dontUpdateNextSubitemEntryEvent;
    SCDiscoverFeedLoggingViewingSessionData *_savedItemViewingSession;
    SCDiscoverFeedLoggingViewingSessionData *_savedSubitemViewingSession;
    SCDiscoverFeedClientRerankingManager *_rerankingManager;
    SCDisposableObserverLifecycle *_disposableOberserverLifecycle;
    NSMutableDictionary *_itemIdToActionSection;
    NSMutableSet *_subscribeSnapsToBeSkipped;
    SCLazy *_lazyCheetahDataStore;
    SCDiscoverFeedTapHistoryManager *_cheetahTapHistoryManager;
    SCDiscoverFeedInteractionHistoryManager *_cheetahInteractionHistoryManager;
    SCScopedAccess *_friendsInteractionHistoryManager;
    SCExperimentManager *_experimentManager;
    SCLazy *_snapTokenProvider;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (void)_incrementRerankingIdForNonFriendSections;
- (void)_incrementRerankingIdForSectionIfPossible:(id)arg1;
- (long long)_itemPosForStoryLoggingInfo:(id)arg1 feedType:(id)arg2 isRecommended:(_Bool)arg3;
- (void)_updateInteractionHistoryQualifiedSectionsToAll;
- (void)_updateInteractionHistoryQualifiedSectionsWithFeedType:(id)arg1;
- (void)clearInteractionHistoryQualifiedSections;
- (id)_sectionTypesToSCAFeedPageSectionString:(id)arg1;
- (void)_setFeedPageViewWithOpenTimestamp:(id)arg1 sections:(id)arg2;
- (void)_handlePlaybackStallCountWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_updateItemViewingSessionWithSubscribeSubitemsToSkip;
- (void)_applicationWillResignActive;
- (void)_logNavigatePastUpNext:(id)arg1 identifier:(id)arg2;
- (void)_reloadViewingSessionsWithData:(id)arg1;
- (void)_userDidTakeScreenshotCorrectQueue;
- (void)_userDidTakeScreenshot;
- (void)_logPromotedStoriesImpressionIfNecessary:(id)arg1 data:(id)arg2 minimumVisibleFraction:(double)arg3;
- (void)_logPromotedStoriesFeedItemActionIfNecessary:(id)arg1;
- (long long)_indexOfStoryWithDedupeFp:(unsigned long long)arg1 feedType:(id)arg2;
- (void)_updateDictWithStoryLoggingInfo:(id)arg1 data:(id)arg2;
- (void)_extractSectionInformation:(id)arg1;
- (void)_handleMomentsNotificationOptInSettingsPageViewWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_createItemViewingSessionWithData:(id)arg1;
- (void)_resetViewingSessionInfo;
- (void)_handleViewingSessionUpdateWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_logFeedSubitemViewingSessionWithData:(id)arg1;
- (void)_logFeedItemViewingSessionWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_updateFinalLoggingValues:(id)arg1;
- (_Bool)_shouldLogEvent:(id)arg1 withData:(id)arg2;
- (void)_removeLoggingDestination:(long long)arg1 dict:(id)arg2;
- (void)_setPossibleLoggingDestinationsForDict:(id)arg1 destinations:(long long)arg2;
- (void)_updateFinalLoggingDestinationForEvent:(id)arg1 data:(id)arg2;
- (void)_sendEventToLogger:(id)arg1 data:(id)arg2 addPageTypeParams:(_Bool)arg3;
- (void)_updateFriendDataIfNecessary:(id)arg1;
- (void)_addBaseDataToMutableDict:(id)arg1 addPageTypeParams:(_Bool)arg2;
- (void)discoverFeedScrollTracker:(id)arg1 didEndScrollingWithData:(id)arg2;
- (void)discoverFeedRerankingManager:(id)arg1 finishedRerankingWithData:(id)arg2;
- (void)cheetahLoggingLongImpressionHelper:(id)arg1 didReachThresholdForItems:(id)arg2 date:(id)arg3 extraData:(id)arg4;
- (void)_handleNotificationOptInModalPageViewWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleImpressionUpdateWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleRerankingUpdateWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleImpressionEndEventWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleImpressionEventWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleFeedItemActionWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_logFeedPageView;
- (void)_handlePageViewEventWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleRefreshEventWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_handleOpenEventWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_updateLoggerInfoWithIdentifier:(id)arg1 data:(id)arg2;
- (void)_logEventWithEventName:(id)arg1 identifier:(id)arg2 extraData:(id)arg3;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_getPageSessionIdWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)getPageSessionIdWithCompletion:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)_finishSession:(CDUnknownBlockType)arg1;
- (void)_initSession:(id)arg1;
- (void)updateConfiguration:(id)arg1;
- (id)initWithCheetahDataStore:(id)arg1 cheetahTapHistoryManager:(id)arg2 cheetahInteractionHistoryManager:(id)arg3 experimentManager:(id)arg4 snapTokenProvider:(id)arg5 requestManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
