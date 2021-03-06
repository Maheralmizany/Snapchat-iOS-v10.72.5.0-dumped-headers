//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, SCQueuePerformer;

@interface SCCompositeLensMetadataStoreFactory : NSObject <SCTraceEnabled>
{
    id <SCLensUserSessionProvider> _userSessionProvider;
    id <SCLensDataProviderConfiguration> _dataProviderConfiguration;
    SCQueuePerformer *_announcerPerformer;
    id <SCLensUserProvider> _lensUserProvider;
}

- (void).cxx_destruct;
- (void)addMetadataStore:(id)arg1 toArray:(id)arg2;
- (id)snap3DLensMetadataStore;
- (id)lensDemoMetadataStore;
- (id)arcadiaMetadataStore;
- (id)unlockableLensMetadataStore;
- (id)geoPrefetchLensMetadataStore;
- (id)geoLiveLensMetadataStore;
- (id)scheduledLensMetadataStore;
- (id)prefetchMetadataStores;
- (id)metadataStores;
- (id)createStaticAllLensesByIdRetrievable;
- (id)createPrefetchMetadataStore;
- (id)createMetadataStore;
- (id)createStaticAllLensesMetadataStore;
- (id)initWithUserSessionProvider:(id)arg1 dataProviderConfiguration:(id)arg2 announcerPerformer:(id)arg3 lensUserProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

