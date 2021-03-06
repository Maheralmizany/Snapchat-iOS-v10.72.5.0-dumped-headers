//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaOwnerProtocol.h"
#import "SCOperaPlaylistAdTrackProtocol.h"
#import "SCOperaPlaylistDataSource.h"
#import "SCStreamingURLProviding.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCAdOperaMediaManager, SCAdOpportunity, SCAdPlacement, SCAdResponseAdDataV2, SCAdTrackerHelper, SCDiscoverOperaMediaManager, SCOperaViewController, SCUserSession;

@interface SCAdDataSource : NSObject <SCStreamingURLProviding, SCOperaPlaylistDataSource, SCMediaOwnerProtocol, SCOperaPlaylistAdTrackProtocol>
{
    SCDiscoverOperaMediaManager *_discoverMediaManager;
    SCAdOperaMediaManager *_adMediaManager;
    id <SCStreamingURLProviding> _streamingURLProvider;
    NSMutableSet *_trackedAdRequestClientIds;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCAdOpportunity *_adOpportunity;
    SCAdResponseAdDataV2 *_pendingInsertAdDataModel;
    SCUserSession *_userSession;
    NSMutableDictionary *_adRequestClientIdToAdResponseMap;
    NSMutableDictionary *_groupIdToInsertedAdItemIdsByOrder;
    NSMutableDictionary *_insertedAdGroupIdToGroupMap;
    NSMutableArray *_insertedAdGroupIdsByOrder;
    NSMutableDictionary *_skippedAdAfterGroupIdToAdGroupIdMap;
    NSMutableDictionary *_insertedAdGroupIdToDataModelMap;
    NSMutableDictionary *_insertedAfterGroupIdToAdGroupIdMap;
    long long _viewLocation;
    SCAdTrackerHelper *_adTrackerHelper;
    NSMutableDictionary *_insertedAditemIdToDataModelMap;
    NSMutableDictionary *_skippedAdAfterItemIdToAdItemIdMap;
    SCAdPlacement *_currentAdPlacement;
}

@property(retain, nonatomic) SCAdPlacement *currentAdPlacement; // @synthesize currentAdPlacement=_currentAdPlacement;
@property(retain, nonatomic) NSMutableDictionary *skippedAdAfterItemIdToAdItemIdMap; // @synthesize skippedAdAfterItemIdToAdItemIdMap=_skippedAdAfterItemIdToAdItemIdMap;
@property(retain, nonatomic) NSMutableDictionary *insertedAditemIdToDataModelMap; // @synthesize insertedAditemIdToDataModelMap=_insertedAditemIdToDataModelMap;
@property(retain, nonatomic) SCAdTrackerHelper *adTrackerHelper; // @synthesize adTrackerHelper=_adTrackerHelper;
@property(nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;
@property(retain, nonatomic) NSMutableDictionary *insertedAfterGroupIdToAdGroupIdMap; // @synthesize insertedAfterGroupIdToAdGroupIdMap=_insertedAfterGroupIdToAdGroupIdMap;
@property(retain, nonatomic) NSMutableDictionary *insertedAdGroupIdToDataModelMap; // @synthesize insertedAdGroupIdToDataModelMap=_insertedAdGroupIdToDataModelMap;
@property(retain, nonatomic) NSMutableDictionary *skippedAdAfterGroupIdToAdGroupIdMap; // @synthesize skippedAdAfterGroupIdToAdGroupIdMap=_skippedAdAfterGroupIdToAdGroupIdMap;
@property(retain, nonatomic) NSMutableArray *insertedAdGroupIdsByOrder; // @synthesize insertedAdGroupIdsByOrder=_insertedAdGroupIdsByOrder;
@property(retain, nonatomic) NSMutableDictionary *insertedAdGroupIdToGroupMap; // @synthesize insertedAdGroupIdToGroupMap=_insertedAdGroupIdToGroupMap;
@property(retain, nonatomic) NSMutableDictionary *groupIdToInsertedAdItemIdsByOrder; // @synthesize groupIdToInsertedAdItemIdsByOrder=_groupIdToInsertedAdItemIdsByOrder;
@property(retain, nonatomic) NSMutableDictionary *adRequestClientIdToAdResponseMap; // @synthesize adRequestClientIdToAdResponseMap=_adRequestClientIdToAdResponseMap;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCAdResponseAdDataV2 *pendingInsertAdDataModel; // @synthesize pendingInsertAdDataModel=_pendingInsertAdDataModel;
@property(retain, nonatomic) SCAdOpportunity *adOpportunity; // @synthesize adOpportunity=_adOpportunity;
@property(nonatomic) __weak id <SCOperaPlaylistItemController> playlistItemController; // @synthesize playlistItemController=_playlistItemController;
@property(nonatomic) __weak SCOperaViewController *operaViewController; // @synthesize operaViewController=_operaViewController;
- (void).cxx_destruct;
- (_Bool)_adProductSupportsVideoBox;
- (_Bool)_topSnapMediaTypeIsValidForVideoBox:(long long)arg1;
- (long long)_featureType;
- (void)logAdOpportunityIfNecessary;
- (id)getCurrentPendingAdRequestClientId;
- (id)insertPendingAd;
- (id)streamingURLForRequestInfo:(id)arg1;
- (id)mediaFileNames;
- (id)cacheMediaIds;
- (unsigned long long)topSnapBackgroundTypeForAdSnap:(id)arg1;
- (unsigned long long)topSnapBackgroundTypeForAdItem:(id)arg1;
- (unsigned long long)adProductTypeForItem:(id)arg1;
- (long long)totalAdCountForItem:(id)arg1;
- (id)adSessionId;
- (id)adSkipEvent;
- (double)totalTopSnapsMediaDurationInSecForAdGroup:(id)arg1;
- (_Bool)isNofillAdGroup:(id)arg1;
- (id)_adSkipEventWithDataModel:(id)arg1;
- (void)logAdSkipWithAdGroup:(id)arg1;
- (id)adViewContextForSkippedGroup:(id)arg1;
- (id)adResponseForGroup:(id)arg1;
- (id)adRequestClientIdForGroup:(id)arg1;
- (id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(_Bool)arg2;
- (void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (_Bool)isNofillUnskippableAdItem:(id)arg1;
- (_Bool)isNofillAdItem:(id)arg1;
- (id)adViewContextForGroup:(id)arg1;
- (id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(_Bool)arg3;
- (id)skippedItemAroundItem:(id)arg1 pageLeft:(_Bool)arg2;
- (id)adViewContextForItem:(id)arg1;
- (id)adResponseForItem:(id)arg1;
- (id)adRequestClientIdForItem:(id)arg1;
- (long long)adPositionForItem:(id)arg1;
- (long long)adSnapIndexForItem:(id)arg1;
- (_Bool)isDismissingSessionWithItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (_Bool)didFinishViewingAdItem:(id)arg1 isViewingLongform:(_Bool)arg2;
- (_Bool)shouldInsertPlaylistItemGroup;
- (_Bool)shouldInsertPlaylistItem;
- (void)_logAdInserted:(id)arg1 insertSource:(long long)arg2;
- (_Bool)insertAdData:(id)arg1 adPlacement:(id)arg2 afterItem:(id)arg3 insertSource:(long long)arg4;
- (_Bool)insertPendingAdAfterItem:(id)arg1 insertSource:(long long)arg2;
- (_Bool)isRetryInsertionEnabled;
- (id)unviewedAds;
- (void)resetPendingAd;
- (void)resetInsertionData;
- (_Bool)isSkippedAdItem:(id)arg1;
- (_Bool)isInsertedAdGroup:(id)arg1;
- (_Bool)isInsertedAdItem:(id)arg1;
- (long long)loadStatusForDataModel:(id)arg1;
- (long long)dataModelLoadStatus:(id)arg1 adData:(id)arg2;
- (long long)currentDataModelLoadStatus;
- (id)mediaLoadContexts;
- (void)fetchMediaForAdDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMediaForPendingInsertAdWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onAdTransformError:(id)arg1;
- (void)_onAdTransformComplete:(id)arg1 subsequenceResponses:(id)arg2;
- (id)adServeLoggingContext;
- (_Bool)shouldCachePendingAdAfterTearDown;
- (_Bool)isLongformShowAd;
- (unsigned long long)adProductType;
- (id)targetingParameters;
- (id)adRequestId;
- (void)requestAdWithPrefetchEnabled:(_Bool)arg1 fromPrefetch:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestAdWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (void)removeMediaForItem:(id)arg1;
- (void)prepareMediaForItem:(id)arg1 waitForDownloading:(_Bool)arg2 startWaitingForDownloadCallback:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (_Bool)needToPrepareMediaBeforeDisplay;
- (id)playlistItemGroupForDataModel:(id)arg1;
- (_Bool)canResolvePlaylistItemGroupDataModel:(id)arg1;
- (id)dataModelForGroup:(id)arg1;
- (void)teardownDataModelForItem:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (void)teardown;
- (id)initWithUserSession:(id)arg1 pendingDisplayAdData:(id)arg2 viewLocation:(long long)arg3 adTrackerHelper:(id)arg4;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 adTrackerHelper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

