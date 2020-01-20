//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUpdateAnnouncing.h"

@class NSArray, NSString, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCSettingsOptInEntityDataStore : NSObject <SCUpdateAnnouncing>
{
    NSArray *_entities;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_entitiesPerformer;
    NSString *_queryText;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
- (void).cxx_destruct;
- (void)_announceDataStoreUpdate;
- (void)_dispatchAnnounceDataStoreUpdate;
- (id)_optedInEntities;
- (id)_pendingEntities;
- (id)_entitiesForQuery:(id)arg1;
- (id)_entities;
- (void)_updateEntity:(id)arg1 toOptInState:(unsigned long long)arg2;
- (void)_saveEntities:(id)arg1;
- (void)updateEntity:(id)arg1 toOptInState:(unsigned long long)arg2;
- (id)pendingEntities;
- (id)optedInEntities;
- (id)allEntitiesForQuery:(id)arg1;
- (id)allEntities;
- (void)saveEntities:(id)arg1;
- (id)init;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
