//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapchattersDataRequestListener.h"

@class NSCache, NSDictionary, NSSet, NSString, SCAddFriendsEventLoggingService, SCLazy, SCQueuePerformer, SCSearchUserSearcher, SCSessionRequestManager;

@interface SCSearchFriendProvider : NSObject <SCSnapchattersDataRequestListener>
{
    NSDictionary *_suggestedFriendByName;
    NSCache *_cachedUnmanagedFriendByKey;
    NSCache *_friendStoriesForNonFriendByName;
    NSSet *_suggestedFriendLoggingTracker;
    SCSearchUserSearcher *_userSearcher;
    SCLazy *_snapchatterFetcher;
    SCAddFriendsEventLoggingService *_addFriendsEventLoggingService;
    SCSessionRequestManager *_sessionRequestManager;
    SCQueuePerformer *_dataUpdatePerformer;
    SCLazy *_storiesDataProvider;
}

@property(retain, nonatomic) SCLazy *storiesDataProvider; // @synthesize storiesDataProvider=_storiesDataProvider;
- (void).cxx_destruct;
- (void)_updateSuggestedFriend;
- (void)_processResults:(id)arg1 queryText:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_parseResponse:(id)arg1 data:(id)arg2 userId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchSearchPersonWithUserId:(id)arg1 localSnapchatter:(id)arg2 localSnapchatterFetchError:(id)arg3 shouldFetchRemotelyIfNeeded:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_friendStoriesForUsername:(id)arg1;
- (void)_setUnmanagedFriend:(id)arg1 forKey:(id)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)friendWithUserId:(id)arg1 shouldFetchRemotelyIfNeeded:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)logSeenSuggestedFriendWithUsername:(id)arg1 placement:(id)arg2 context:(id)arg3;
- (void)searchSuggestedFriendsRemotelyForQuery:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)storySummaryInfoWithUsername:(id)arg1 userId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)friendStoriesForFriendWithName:(id)arg1 shouldFetchRemotelyIfNeeded:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setUnmanagedFriendStories:(id)arg1 forUsername:(id)arg2;
- (id)initWithRequestManager:(id)arg1 snapchatterTracker:(id)arg2 snapchatterFetcher:(id)arg3 storiesDataProvider:(id)arg4 userSearcher:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

