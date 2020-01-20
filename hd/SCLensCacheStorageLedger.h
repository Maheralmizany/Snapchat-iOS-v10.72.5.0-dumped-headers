//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCPreferences, SCTimeProvider;

@interface SCLensCacheStorageLedger : NSObject
{
    SCPreferences *_preferencesStorage;
    SCTimeProvider *_dateProvider;
    NSMutableDictionary *_ledger;
    NSMutableDictionary *_evictions;
    _Bool _dirty;
}

+ (id)urlForDiskLedgerEntry:(id)arg1;
+ (id)ledgerKeyForDiskURL:(id)arg1;
+ (id)scCacheKeyForLedgerEntry:(id)arg1;
+ (id)ledgerKeyForSCCacheKey:(id)arg1;
- (void).cxx_destruct;
- (void)_pruneEvictionLogIfNeeded;
- (void)_logEvictionForMetadata:(id)arg1;
- (void)flushToDisk;
- (id)evictionEntryForLensCacheMetadata:(id)arg1;
- (void)reset;
- (void)updateSizeForKey:(id)arg1 newSize:(unsigned long long)arg2;
- (_Bool)markEntryAccessForKey:(id)arg1 metadata:(id)arg2;
- (void)removeLedgerEntryForKey:(id)arg1;
- (void)setLedgerEntry:(id)arg1 forKey:(id)arg2;
- (id)ledgerEntries;
- (id)ledgerEntryForKey:(id)arg1;
- (id)_metadataFromExistingMetadata:(id)arg1;
- (id)_evictionsFromExistingEntries:(id)arg1;
- (id)_ledgerFromExistingEntries:(id)arg1;
- (id)initWithPreferencesStorage:(id)arg1 dateProvider:(id)arg2;

@end

