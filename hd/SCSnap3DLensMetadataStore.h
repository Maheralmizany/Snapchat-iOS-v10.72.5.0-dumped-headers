//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGenericLensMetadataStore.h"
#import "SCTraceEnabled.h"
#import "SCUserSessionScoped.h"

@class NSArray, NSString, SCArchiveUtils, SCDisposableObserverLifecycle, SCGenericLensMetadataStore, SCQueuePerformer;

@interface SCSnap3DLensMetadataStore : NSObject <SCUserSessionScoped, SCTraceEnabled, SCGenericLensMetadataStore>
{
    SCGenericLensMetadataStore *_genericInMemoryStore;
    SCQueuePerformer *_performer;
    SCDisposableObserverLifecycle *_storeLifecycle;
    SCQueuePerformer *_announcerPerformer;
    SCArchiveUtils *_archiveUtils;
}

+ (void)removeSavedStateWithArchiveUtils:(id)arg1;
+ (id)storeFromSavedStateWithAnnouncePerformer:(id)arg1 archiveUtils:(id)arg2 lensMetadataStoreEvents:(id)arg3;
@property(retain, nonatomic) SCArchiveUtils *archiveUtils; // @synthesize archiveUtils=_archiveUtils;
@property(retain, nonatomic) SCQueuePerformer *announcerPerformer; // @synthesize announcerPerformer=_announcerPerformer;
- (void).cxx_destruct;
- (void)addLens:(id)arg1 overrideIfFound:(_Bool)arg2 synchronously:(_Bool)arg3;
- (void)updateLensesToPrefetch:(id)arg1 synchronously:(_Bool)arg2;
- (void)setLensFilter:(id)arg1;
- (void)updateLenses:(id)arg1 synchronously:(_Bool)arg2;
- (void)applyMetadataProviderSettings:(id)arg1;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)synchronize;
- (void)stopUpdating;
- (void)startUpdating;
- (void)warmUp;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clear;
- (id)_filterExpiredLenses:(id)arg1;
- (void)_subscribeForMetadataStoreEvents:(id)arg1;
- (void)restoreSavedState;
- (void)saveState;
- (id)initWithAnnouncerPerformer:(id)arg1 archiveUtils:(id)arg2 lensMetadataStoreEvents:(id)arg3;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

