//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCDataCoordinatorListener.h"
#import "SCNetworkActivityListener.h"
#import "SCNetworkConnectivityListener.h"
#import "SCStoryMediaStateListener.h"
#import "SCTraceEnabled.h"

@class FriendStoriesCollection, NSMutableSet, NSString, SCBusinessStories, SCGroupStoryCollection, SCLazy, SCLiveStoriesSubmissionsCollection, SCMyContributionStoriesCollection, SCMyStories, SCQueuePerformer, SCScopedAccess, SCStoriesModelUpdateListenerAnnouncer, SCStoryMediaCache, SCTemporaryDatastore;

@interface SCStories : NSObject <SCTraceEnabled, SCStoryMediaStateListener, SCNetworkConnectivityListener, SCNetworkActivityListener, SCDataCoordinatorListener, NSCoding>
{
    SCQueuePerformer *_performer;
    NSMutableSet *_friendStoriesKVOedNameSet;
    long long _lastNetworkConnectivityStatus;
    SCLazy *_loggingControllerLazy;
    SCScopedAccess *_scopedUserSession;
    _Bool _useSignedReadReceipt;
    _Bool _syncedStories;
    _Bool _silenceCollectionsUpdate;
    _Bool _isPostingStory;
    _Bool _isAutoRepostingEnabled;
    SCStoryMediaCache *_storyMediaCache;
    FriendStoriesCollection *_friendStoriesCollection;
    SCMyStories *_myStories;
    SCMyContributionStoriesCollection *_myContributionStoriesCollection;
    SCBusinessStories *_businessStories;
    double _fetchLastInitiatedAt;
    double _fetchLastReturnedAt;
    SCGroupStoryCollection *_groupStoryCollection;
    SCLiveStoriesSubmissionsCollection *_liveStoriesSubmissionsCollection;
    SCStoriesModelUpdateListenerAnnouncer *_updateAnnouncer;
    SCTemporaryDatastore *_lostStoriesDatastore;
    long long _uploadBandwidth;
    long long _requiredBandwidth;
    double _lastNetworkCheckDoneAt;
}

+ (id)path;
@property(nonatomic) _Bool isAutoRepostingEnabled; // @synthesize isAutoRepostingEnabled=_isAutoRepostingEnabled;
@property(nonatomic) double lastNetworkCheckDoneAt; // @synthesize lastNetworkCheckDoneAt=_lastNetworkCheckDoneAt;
@property(nonatomic) _Bool isPostingStory; // @synthesize isPostingStory=_isPostingStory;
@property(nonatomic) long long requiredBandwidth; // @synthesize requiredBandwidth=_requiredBandwidth;
@property(nonatomic) long long uploadBandwidth; // @synthesize uploadBandwidth=_uploadBandwidth;
@property(retain, nonatomic) SCTemporaryDatastore *lostStoriesDatastore; // @synthesize lostStoriesDatastore=_lostStoriesDatastore;
@property(nonatomic) _Bool silenceCollectionsUpdate; // @synthesize silenceCollectionsUpdate=_silenceCollectionsUpdate;
@property(retain, nonatomic) SCStoriesModelUpdateListenerAnnouncer *updateAnnouncer; // @synthesize updateAnnouncer=_updateAnnouncer;
@property(readonly, nonatomic) SCLiveStoriesSubmissionsCollection *liveStoriesSubmissionsCollection; // @synthesize liveStoriesSubmissionsCollection=_liveStoriesSubmissionsCollection;
@property(retain, nonatomic) SCGroupStoryCollection *groupStoryCollection; // @synthesize groupStoryCollection=_groupStoryCollection;
@property(nonatomic) double fetchLastReturnedAt; // @synthesize fetchLastReturnedAt=_fetchLastReturnedAt;
@property(nonatomic) double fetchLastInitiatedAt; // @synthesize fetchLastInitiatedAt=_fetchLastInitiatedAt;
@property(nonatomic) _Bool syncedStories; // @synthesize syncedStories=_syncedStories;
@property(readonly, nonatomic) _Bool useSignedReadReceipt; // @synthesize useSignedReadReceipt=_useSignedReadReceipt;
@property(readonly, nonatomic) SCBusinessStories *businessStories; // @synthesize businessStories=_businessStories;
@property(readonly, nonatomic) SCMyContributionStoriesCollection *myContributionStoriesCollection; // @synthesize myContributionStoriesCollection=_myContributionStoriesCollection;
@property(readonly, nonatomic) SCMyStories *myStories; // @synthesize myStories=_myStories;
@property(readonly, nonatomic) FriendStoriesCollection *friendStoriesCollection; // @synthesize friendStoriesCollection=_friendStoriesCollection;
@property(readonly, nonatomic) SCStoryMediaCache *storyMediaCache; // @synthesize storyMediaCache=_storyMediaCache;
- (void).cxx_destruct;
- (void)_announceCustomStoriesUpdated:(id)arg1;
- (void)announceStoriesInFriendStoriesAllViewed:(id)arg1;
- (void)insertPostingContributionStory:(id)arg1 contributionStoryType:(long long)arg2;
- (void)didSendBytes:(unsigned long long)arg1;
- (void)didReceiveBytes:(unsigned long long)arg1;
- (void)_resetStoryRemainingAutoRetryCounts;
- (void)_handleNetworkConnectivityStatusChange:(long long)arg1;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)uploadNextFailedStoryIfAny;
- (id)storyThatNeedsRetryPosting;
- (void)didFailToUploadStory;
- (void)scheduleAutoReposting;
- (void)_restoreStory:(id)arg1;
- (void)_restoreStoryWithKey:(id)arg1;
- (void)_evaluateCandidates:(id)arg1 intoLost:(id)arg2 confirmed:(id)arg3;
- (void)removeSavedMetadataForStory:(id)arg1;
- (void)archiveMetadataForStory:(id)arg1;
- (void)_setLostStoriesDatastore:(id)arg1 storiesUnarchiver:(id)arg2;
- (void)initStoryRecoveryForUserSession:(id)arg1 storiesUnarchiver:(id)arg2;
- (void)retryToUploadAllFailedStories;
- (long long)numberOfFailedStories;
- (_Bool)hasActivePrivateGroupStories;
- (void)story:(id)arg1 didChangeMediaState:(long long)arg2;
- (void)addStoriesObservers;
- (void)_handleMyStoryStateChange:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_handleChangeToMyStoriesMediaStateWithChange:(id)arg1;
- (void)_announceMyStoriesArrayUpdateIfNecessary;
- (void)_handleChangeToMyStoriesArray:(id)arg1 needsResort:(_Bool)arg2 isMyContribution:(_Bool)arg3;
- (void)_removeIndividualMyStoriesObservers:(id)arg1;
- (void)_addIndividualMyStoriesObservers:(id)arg1;
- (void)addIndividualMyContributionStoriesObservers:(id)arg1;
- (void)_handleChangeToFriendStoriesCollection;
- (void)_announceCollectionsUpdateFinalizedWithTriggerType:(long long)arg1;
- (void)_announceCollectionsUpdate;
- (void)_didUpdateCollections;
- (void)_willUpdateCollections;
- (void)_addObserversWithMyStories:(id)arg1 isMyContribution:(_Bool)arg2;
- (void)_addMyContributionStoriesCollectionObservers;
- (void)_addFriendStoriesCollectionObservers;
- (id)_allStoryContainers;
- (id)myStoriesForClientId:(id)arg1;
- (void)prepareForLogout;
- (void)prepareForBackgrounding;
- (void)markViewedStories:(_Bool)arg1;
- (void)clearExpiredAndViewedStoriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handlePublicationMetadataFetched:(id)arg1;
- (void)_updateCollectionsWithGroupStoryMetadata:(id)arg1 requestedIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithStories:(id)arg1 clientMetadataOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)saveState;
- (void)_updateOnMainThreadWithMyStories:(id)arg1 myOurStories:(id)arg2 groupStories:(id)arg3 myGroupStories:(id)arg4 friendStories:(id)arg5 idMapping:(id)arg6 storiesResponse:(id)arg7 triggerType:(long long)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_updateSCStoriesWithStoriesResponse:(id)arg1 triggerType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setStoriesWithStoriesResponse:(id)arg1 triggerType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)_setupQueuePerformer;
- (void)didDecodeObject;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryLoggingController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
