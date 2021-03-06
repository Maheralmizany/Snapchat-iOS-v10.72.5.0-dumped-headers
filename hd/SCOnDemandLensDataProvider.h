//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensDataFetchingMediatorDelegate.h"
#import "SCLensDataProviderProtocol.h"
#import "SCOnDemandLensDataStoreListener.h"

@class NSString, SCLens, SCLensDataFetchingMediator, SCLensDataProviderListenerAnnouncer, SCLensMemoryMapStorage, SOJUUnlockablesOndemandTemplateCategory;

@interface SCOnDemandLensDataProvider : NSObject <SCOnDemandLensDataStoreListener, SCLensDataFetchingMediatorDelegate, SCLensDataProviderProtocol>
{
    SOJUUnlockablesOndemandTemplateCategory *_templateCategory;
    id <SCOnDemandLensDataStoreProtocol> _lensDataStore;
    SCLensDataProviderListenerAnnouncer *_announcer;
    id <SCLensDataPrefetcher> _lensDataPrefetcher;
    SCLensDataFetchingMediator *_dataFetchingMediator;
    SCLensMemoryMapStorage *_lensMemoryStorage;
    SCLens *_selectedLens;
    id <SCBundledLensProvider> _bundledLensProvider;
}

- (void).cxx_destruct;
- (id)_storedLensesForCurrentCategory;
- (id)_keyForCurrentCategory;
- (void)_setDownloadableDataForCurrentCategory:(id)arg1;
- (id)_downloadableDataForCurrentCategory;
- (void)lensDataFetchingMediatorUpdateLenses:(id)arg1;
- (void)lensDataFetchingMediatorDidStopUpdatingLensData:(id)arg1;
- (void)lensDataFetchingMediatorDidStartUpdatingLensData:(id)arg1;
- (void)lensDataFetchingMediator:(id)arg1 didUpdateContentForLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)updateLenses;
- (void)onDemandLensDataStoreDidUpdate:(id)arg1;
- (void)setSelectedLens:(id)arg1;
- (id)selectedLens;
- (id)originalLens;
- (_Bool)isRegressorNeeded;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)stopUpdatingLensDataWithToken:(id)arg1;
- (id)startUpdatingLensData;
- (_Bool)isFetchingLens:(id)arg1;
- (void)fetchLensesIfNeeded;
- (void)fetchLens:(id)arg1;
- (void)updateDownloadableData;
- (void)dealloc;
- (id)initWithLensDataFetcher:(id)arg1 lensDataPrefetcher:(id)arg2 lensThumbnailLogger:(id)arg3 lensDataStore:(id)arg4 templateCategory:(id)arg5 bundledLensProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

