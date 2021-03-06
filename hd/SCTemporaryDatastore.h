//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCache.h"
#import "SCManagedDatastore.h"
#import "SCManagedURLProtocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCDiskCacheKeyGenerator, SCQueuePerformer;

@interface SCTemporaryDatastore : NSObject <SCManagedURLProtocol, SCCache, SCManagedDatastore>
{
    NSString *_path;
    NSString *_name;
    SCDiskCacheKeyGenerator *_keyGenerator;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_completion;
    NSMutableDictionary *_metadataMap;
    NSMutableSet *_dirtyMetadata;
    NSDictionary *_lastKnownMetrics;
    unsigned long long _maxDaysForExpiry;
    _Bool _underExperiment;
}

+ (id)multiSnapDataStoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)storyDataStoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)uploadableChatMediaDataStoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)persistedEphemeralMediaDataStoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)failedDiscoverMediaMessageDatastoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)failedBaseChatMediaDatastoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)failedSnapDatastoreForUser:(id)arg1 type:(unsigned long long)arg2;
+ (id)_stringForDatastoreName:(unsigned long long)arg1;
+ (unsigned long long)_defaultExpirationDaysForDatastoreName:(unsigned long long)arg1;
+ (id)_tmpDatastoreForName:(unsigned long long)arg1 user:(id)arg2 type:(unsigned long long)arg3;
@property(nonatomic) _Bool underExperiment; // @synthesize underExperiment=_underExperiment;
- (void).cxx_destruct;
- (void)_captureUnmanagedFile:(id)arg1;
- (id)reportMetrics;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
@property(readonly, copy, nonatomic) NSString *kindName;
- (id)restoreAllKeys;
- (void)contains:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)contains:(id)arg1;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectsForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsExceptKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsFromMemoryWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeExpiredContentWithBlock:(CDUnknownBlockType)arg1;
- (id)_executeRemoveExpiredContentSync;
- (void)invalidate;
- (void)increaseExpirationTo:(id)arg1 forKey:(id)arg2;
- (void)decreaseExpirationTo:(id)arg1 forKey:(id)arg2;
- (void)_updateExpiration:(id)arg1 forMetadata:(id)arg2;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 block:(CDUnknownBlockType)arg5 returnExpired:(_Bool)arg6;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 block:(CDUnknownBlockType)arg5;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 dataEncoding:(CDUnknownBlockType)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)_executeCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_executeCompletionBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 object:(id)arg3;
- (id)_retrieveMetadata:(id)arg1 cache:(_Bool)arg2;
- (id)_retrieveMetadataFromFile:(id)arg1;
- (void)_flushDirtyMetadata;
- (void)_flushMetadata:(id)arg1;
- (void)flushMetadata:(id)arg1;
- (id)metadataForKey:(id)arg1;
- (void)adjustReferenceCount:(id)arg1 delta:(long long)arg2;
- (id)path;
- (id)performer;
- (void)_removeMetadataMapEntry:(id)arg1;
- (void)_adjustMetadataForKey:(id)arg1 refCountDelta:(long long)arg2 expiration:(id)arg3;
- (id)_filePathForKey:(id)arg1;
- (id)restoreManagedURL:(id)arg1;
- (id)restoreManagedURLs;
- (id)managedURL:(id)arg1 expiration:(double)arg2;
- (id)init:(id)arg1 name:(id)arg2 defaultDaysForExpiry:(unsigned long long)arg3;
- (id)init:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

