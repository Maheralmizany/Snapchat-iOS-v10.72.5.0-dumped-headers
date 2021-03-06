//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCompositeNetworkImageDownloading.h"

@class NSString, SCLRUCache, SCMemoryCache, SCQueuePerformer, SCSessionRequestManager;

@interface SCCompositeNetworkImageDownloader : NSObject <SCCompositeNetworkImageDownloading>
{
    id <SCImageDownloading> _imageDownloader;
    id <SCBitmojiImageFetcher> _bitmojiImageFetcher;
    SCQueuePerformer *_performerQueue;
    SCQueuePerformer *_renderingPerformerQueue;
    SCMemoryCache *_cache;
    SCLRUCache *_lruCache;
    SCSessionRequestManager *_requestManager;
    _Bool _isRequestCancelingEnabled;
}

@property(readonly) _Bool isRequestCancelingEnabled; // @synthesize isRequestCancelingEnabled=_isRequestCancelingEnabled;
- (void).cxx_destruct;
- (void)removeObjectsFromCacheWithKeys:(id)arg1;
- (void)resetCache;
- (void)_increaseCacheExpirationForKey:(id)arg1;
- (void)_performIncreaseCacheExpirationForKey:(id)arg1;
- (id)_loadImageForImageModel:(id)arg1 request:(id)arg2;
- (void)_loadNetworkImage:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 request:(id)arg5;
- (void)_performLoadNetworkImage:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 request:(id)arg5;
- (void)_performLoadNetworkImageWithCacheLookup:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 request:(id)arg5;
- (id)loadCompositeNetworkImage:(id)arg1 completion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (id)initWithImageDownloader:(id)arg1 bitmojiImageFetcher:(id)arg2 performerQueue:(id)arg3 cacheName:(id)arg4 isRequestCancelingEnabled:(_Bool)arg5 requestManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

