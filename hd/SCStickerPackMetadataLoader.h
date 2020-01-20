//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, SCQueuePerformer, SCStickerMetadataCache;

@interface SCStickerPackMetadataLoader : NSObject
{
    SCQueuePerformer *_subscriptionPerformer;
    SCStickerMetadataCache *_metadataCache;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <SCStickerPackMetadataDownloadStrategy> _downloadStrategy;
    id <SCStickerPackMetadataThrottleInfo> _throttleInfo;
    NSMutableDictionary *_subscriptions;
}

@property(readonly, nonatomic) NSMutableDictionary *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(readonly, nonatomic) id <SCStickerPackMetadataThrottleInfo> throttleInfo; // @synthesize throttleInfo=_throttleInfo;
@property(readonly, nonatomic) id <SCStickerPackMetadataDownloadStrategy> downloadStrategy; // @synthesize downloadStrategy=_downloadStrategy;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) SCStickerMetadataCache *metadataCache; // @synthesize metadataCache=_metadataCache;
@property(readonly, nonatomic) SCQueuePerformer *subscriptionPerformer; // @synthesize subscriptionPerformer=_subscriptionPerformer;
- (void).cxx_destruct;
- (void)_cacheData:(id)arg1 forPackID:(id)arg2;
- (void)_downloadMetadataForPack:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchMetadataForPack:(id)arg1 updateTest:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_checkMetadataForPack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_packMetadataListForPackList:(id)arg1 updateTest:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_hasAtLeastOneCachedPackForPackList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_packMetadataListForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_notifySubscribers:(id)arg1 forKey:(id)arg2 packList:(id)arg3;
- (void)_notifyAllSubscribersForKey:(id)arg1 packList:(id)arg2;
- (void)_updateAndNotifySubscriber:(id)arg1 forKey:(id)arg2;
- (_Bool)_isCachedPackList:(id)arg1 theSameAsUpdateList:(id)arg2;
- (void)_updateMetadataIfNotThrottledForStickerPacks:(id)arg1 cachedPackList:(id)arg2 cacheLastUpdated:(id)arg3 source:(id)arg4 shouldRespectThrottle:(_Bool)arg5;
- (id)_addSubscription:(id)arg1;
- (void)hasCachedPackListForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateFromStickerPacks:(id)arg1 forKey:(id)arg2 shouldRespectThrottle:(_Bool)arg3;
- (void)unsubscribe:(id)arg1;
- (id)subscribeOnQueue:(id)arg1 forKey:(id)arg2 onUpdate:(CDUnknownBlockType)arg3;
- (id)subscribe:(id)arg1 onQueue:(id)arg2 forKey:(id)arg3;
- (id)initWithMetadataCache:(id)arg1 downloadStrategy:(id)arg2 throttleInfo:(id)arg3 processingQueue:(id)arg4 subscriptionPerformer:(id)arg5;
- (id)initWithMetadataCache:(id)arg1 downloadStrategy:(id)arg2 throttleInfo:(id)arg3;

@end

