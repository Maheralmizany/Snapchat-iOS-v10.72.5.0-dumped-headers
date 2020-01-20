//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChecksumLensScheduleRequestProviderDelegate.h"
#import "SCScheduledLensControllerDelegate.h"
#import "SCScheduledLensDataFetcherDelegate.h"
#import "SCTraceEnabled.h"
#import "SCUserSessionScoped.h"

@class NSArray, NSString, SCArchiveUtils, SCDisposableObserverLifecycle, SCExperimentManager, SCQueuePerformer, SCScheduledLensController, SCScheduledLensDataFetcher, SCScheduledLensMetadataStoreListenerAnnouncer, SCSessionRequestManager;

@interface SCScheduledLensMetadataStore : NSObject <SCUserSessionScoped, SCScheduledLensControllerDelegate, SCScheduledLensDataFetcherDelegate, SCTraceEnabled, SCChecksumLensScheduleRequestProviderDelegate>
{
    NSArray *_scheduledLenses;
    NSArray *_scheduledRearLenses;
    SCQueuePerformer *_performer;
    SCScheduledLensMetadataStoreListenerAnnouncer *_announcer;
    SCDisposableObserverLifecycle *_storeLifecycle;
    SCExperimentManager *_experimentManager;
    SCScheduledLensDataFetcher *_scheduledLensDataFetcher;
    SCScheduledLensController *_scheduledLensController;
    SCSessionRequestManager *_requestManager;
    id <SCLensUserProvider> _lensUserProvider;
    SCArchiveUtils *_archiveUtils;
}

+ (void)removeSavedStateWithArchiveUtils:(id)arg1;
+ (id)storeFromSavedStateWithRequestManager:(id)arg1 lensUserProvider:(id)arg2 archiveUtils:(id)arg3 lensMetadataStoreEvents:(id)arg4 experimentManager:(id)arg5;
@property(retain, nonatomic) SCArchiveUtils *archiveUtils; // @synthesize archiveUtils=_archiveUtils;
@property(retain, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SCScheduledLensController *scheduledLensController; // @synthesize scheduledLensController=_scheduledLensController;
@property(retain, nonatomic) SCScheduledLensDataFetcher *scheduledLensDataFetcher; // @synthesize scheduledLensDataFetcher=_scheduledLensDataFetcher;
- (void).cxx_destruct;
- (void)_collectCachedDataSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronize;
- (void)startUpdating;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clear;
- (id)rearLensIdToChecksumMapForRequestProvider:(id)arg1;
- (id)lensIdToChecksumMapForRequestProvider:(id)arg1;
- (_Bool)lensMetadataFetcherIsActiveLensesUser:(id)arg1;
- (void)scheduledLensDataFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)scheduledLensDataFetcher:(id)arg1 didFetchData:(id)arg2;
- (void)scheduledLensController:(id)arg1 didUpdatePreCachedData:(id)arg2;
- (void)scheduledLensController:(id)arg1 didUpdateActiveData:(id)arg2 activeRearData:(id)arg3 preselectedLensId:(id)arg4;
- (void)_subscribeForMetadataStoreEvents:(id)arg1;
- (void)restoreSavedState;
- (void)saveState;
- (void)_ensureNonNilObjectsWithState:(id)arg1;
- (id)initWithRequestManager:(id)arg1 lensUserProvider:(id)arg2 archiveUtils:(id)arg3 lensMetadataStoreEvents:(id)arg4 experimentManager:(id)arg5;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

