//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSRegularExpression, SCCognacWebProxyCache, SCCognacWebProxyDownloader, SCQueuePerformer;

@interface SCCognacWebProxyLoader : NSObject
{
    SCCognacWebProxyCache *_cache;
    SCCognacWebProxyDownloader *_downloader;
    SCQueuePerformer *_performer;
    NSRegularExpression *_maxAgeRegex;
    NSMutableSet *_runningRequestItems;
}

- (void).cxx_destruct;
- (void)_loadFromDownloaderWithRequestItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_saveToCacheWithRequestItem:(id)arg1 response:(id)arg2 data:(id)arg3;
- (id)_expirationForResponse:(id)arg1;
- (void)_checkAgainstCacheWithRequestItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_loadFromCacheWithRequestItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_completeRequestItem:(id)arg1 succeeded:(_Bool)arg2 cancelled:(_Bool)arg3 fromCache:(_Bool)arg4 response:(id)arg5 data:(id)arg6 error:(id)arg7;
- (void)_runRequestItemStepLoadFromDownloader:(id)arg1;
- (void)_runRequestItemStepCheckAgainstCache:(id)arg1;
- (void)_runRequestItemStepLoadFromCache:(id)arg1;
- (void)_runRequestItem:(id)arg1;
- (id)_runningRequestItemForRequest:(id)arg1;
- (id)_makeRequestItemWithRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelRequest:(id)arg1;
- (void)submitRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1 downloader:(id)arg2;

@end

