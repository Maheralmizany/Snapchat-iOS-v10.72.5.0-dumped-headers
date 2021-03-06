//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCDataCoordinatorListener.h"
#import "SCGroupsDataRequestListener.h"

@class NSArray, NSCache, NSDictionary, NSLock, NSMutableArray, NSString, SCScopedAccess;

@interface SCGroupStoryCollection : NSObject <NSCoding, SCGroupsDataRequestListener, SCDataCoordinatorListener>
{
    NSMutableArray *_newlyCreatedPublicationIds;
    _Bool _hasReceivedPostablesThisSession;
    NSDictionary *_groupStoriesLookupByMischiefId;
    NSCache *_storyByServedIdLookup;
    NSDictionary *_groupStoriesDict;
    NSLock *_groupStoriesLock;
    SCScopedAccess *_scopedStoriesUnarchiver;
    _Bool _hasSyncedToChatGroups;
    NSDictionary *_myGroupStoriesDict;
    NSArray *_postableGroupStoryIds;
}

@property(readonly, nonatomic) _Bool hasSyncedToChatGroups; // @synthesize hasSyncedToChatGroups=_hasSyncedToChatGroups;
@property(copy, nonatomic) NSArray *postableGroupStoryIds; // @synthesize postableGroupStoryIds=_postableGroupStoryIds;
@property(copy, nonatomic) NSDictionary *myGroupStoriesDict; // @synthesize myGroupStoriesDict=_myGroupStoriesDict;
- (void).cxx_destruct;
- (void)_reconstructTypeSafeGroupStoriesDict;
- (void)_didBeginLeavingGroupWithId:(id)arg1;
- (void)_didChangeInfoForGroupWithId:(id)arg1;
- (void)_didFinishLoadingGroups;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (_Bool)_isGroupChatStoryNewlyCreatedByMe:(id)arg1;
- (_Bool)_isGroupChatNewlyCreatedByMe:(id)arg1;
- (id)_addGroupStoriesForChatGroup:(id)arg1 addToPostables:(_Bool)arg2;
- (void)_syncChatGroupsIfLoadedAfterStartup;
- (void)_syncChatGroupsIfLoaded;
- (void)_syncChatGroupsIfLoadedForUnarchivedCollection;
- (id)_createNewMyGroupStoriesForId:(id)arg1;
- (id)privateStoriesCreatedByUsername:(id)arg1;
- (id)findStoryWithServerId:(id)arg1;
- (id)myGroupStoriesForId:(id)arg1 createIfNotFound:(_Bool)arg2;
- (id)storiesForStory:(id)arg1;
- (id)mischiefIdForPublicationId:(id)arg1;
- (id)groupStoriesForMischiefId:(id)arg1;
- (id)_groupStoriesForMischiefId:(id)arg1;
- (id)_groupStoriesByMischiefId;
@property(copy) NSDictionary *groupStoriesDict;
- (id)_myGroupStoriesForMischiefId:(id)arg1;
- (id)_groupStoriesForUniqueStoriesId:(id)arg1;
- (id)groupStoriesForStory:(id)arg1;
- (id)groupStoriesForId:(id)arg1;
- (id)groupStories;
- (id)_myStoriesForUniqueStoriesId:(id)arg1;
- (id)myStoriesForStory:(id)arg1;
- (id)_getOrCreateMyGroupStoriesForId:(id)arg1;
- (id)postTargetGroupStoriesWithId:(id)arg1;
- (void)addStoryNotesToMyMischiefStorySnaps;
- (id)myGroupStories;
- (void)_removeFromMyGroupStoriesPublicationIds:(id)arg1;
- (void)_removeFromViewableGroupStoriesPublicationIds:(id)arg1;
- (void)removeGroupStoriesWithPublicationId:(id)arg1;
- (_Bool)clearExpiredStories;
- (void)didCreateNewGroupStories:(id)arg1;
- (void)updateWithUnarchivedGroupStoryCollection:(id)arg1;
- (void)updateMyGroupStoriesDictWithMyGroupStories:(id)arg1 isMergingSnapsCreatedByFriends:(_Bool)arg2;
- (void)_mergeFriendStoriesForGroupStories:(id)arg1;
- (void)updateCreatedMischiefIds:(id)arg1;
- (void)updateWithSOJUGroupStoryMetadata:(id)arg1 requestedIDs:(id)arg2;
- (void)updateWithSOJUGroupStoriesArray:(id)arg1 isDelta:(_Bool)arg2;
- (void)_updateWithPBPostableGroupStoryInfo:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

