//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArroyoFeedDataUpdateListener.h"
#import "SCArroyoMessagingMigrationStatusManaging.h"

@class NSMutableSet, NSString, SCLazy;

@interface SCArroyoMessagingMigrationStatusManager : NSObject <SCArroyoFeedDataUpdateListener, SCArroyoMessagingMigrationStatusManaging>
{
    SCLazy *_userPreferences;
    id <SCPerforming> _performer;
    unsigned long long _syncedSources;
    NSMutableSet *_migratingFeedIds;
    NSMutableSet *_migratedFeedIds;
}

- (void).cxx_destruct;
- (void)loadMigratingFeedIds;
- (id)conversationIdsToMigrate;
- (_Bool)saveState;
- (void)_handleMigrationDataRequest:(id)arg1;
- (void)_handleFeedClearDataRequest:(id)arg1;
- (void)didFeedEntriesArrive:(id)arg1;
- (void)didFetchFeedCompleteFeedEntries:(id)arg1 fetchContext:(id)arg2;
- (void)didQueryFeedCompleteFeedEntries:(id)arg1 hasNoMore:(_Bool)arg2 fetchContext:(id)arg3;
- (void)didFetchAndSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didUpdateFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithUserPreferences:(id)arg1;
- (id)initWithUserPreferences:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
