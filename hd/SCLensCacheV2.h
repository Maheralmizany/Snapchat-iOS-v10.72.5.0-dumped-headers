//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensCache.h"
#import "SCLensCacheInventoried.h"

@class NSString, SCLensCacheDiskStorage, SCLensCacheStorageLedger, SCTimeProvider;

@interface SCLensCacheV2 : NSObject <SCLensCache, SCLensCacheInventoried>
{
    id <SCCache> _cache;
    SCLensCacheDiskStorage *_diskStorage;
    SCLensCacheStorageLedger *_storageLedger;
    id <SCPerforming> _performer;
    SCTimeProvider *_dateProvider;
    id <SCLensCacheLimit> _limits;
    id <SCLensCacheEvictionStrategy> _evictionStrategy;
}

- (void).cxx_destruct;
- (void)_didEnterBackground:(id)arg1;
- (id)_expirationDateForMetadata:(id)arg1;
- (id)_clearLedgerEntry:(id)arg1;
- (void)_updateLedgerEntryForManagedURLForMetadata:(id)arg1 future:(id)arg2;
- (void)_updateLedgerEntryForDataForMetadata:(id)arg1 data:(id)arg2;
- (id)_clearLedgerEntries:(id)arg1;
- (unsigned long long)_totalDiskUtilization;
- (void)_createLegacyLedgerEntriesForOrphanedDiskItems;
- (id)numberOfItemsForCacheDomain:(id)arg1;
- (id)diskUsageForCacheDomain:(id)arg1;
- (id)_ledgerEntriesMatchingDomain:(id)arg1;
- (void)clearAllContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)logUsageOfManagedURLForMetadata:(id)arg1;
- (id)_generateClearListWithCondition:(long long)arg1;
- (id)clearEvictableContentWithCondition:(long long)arg1;
- (id)clearManagedLocalURLForMetadata:(id)arg1;
- (id)managedLocalURLForMetadata:(id)arg1;
- (void)completeRegistrationForManagedLocalURLForMetadata:(id)arg1;
- (id)registerManagedLocalURLForMetadata:(id)arg1;
- (void)logUsageOfDataForMetadata:(id)arg1;
- (id)dataForMetadata:(id)arg1;
- (id)setData:(id)arg1 metadata:(id)arg2;
- (id)initWithFileManager:(id)arg1 dateProvider:(id)arg2 cache:(id)arg3 ledger:(id)arg4 limits:(id)arg5 evictionStrategy:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

