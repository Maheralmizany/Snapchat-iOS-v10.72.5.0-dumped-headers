//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStoriesContentDelivery.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCStoriesContentDeliveryApiImpl2 : NSObject <SCStoriesContentDelivery>
{
    SCLazy *_contentDelivery;
    SCQueuePerformer *_queuePerformer;
    _Bool _useBoltContentObject;
}

- (void).cxx_destruct;
- (void)_queryContentStatusAsyncForSingleMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleQueryContentStatusAsyncHelperCompletionForContentStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryContentStatusAsyncHelperForContentKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryContentStatusAsyncForVideoAndOverlayMedia:(id)arg1 cacheKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queryContentStatusForUseBoltContentMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_queryContentStatusForUseBoltContentMedia:(id)arg1;
- (id)_zipContentsFromContentResult:(id)arg1 contentKey:(id)arg2;
- (void)_logRetrieveContentForContentKey:(id)arg1 IsStreaming:(_Bool)arg2 isZipped:(_Bool)arg3 success:(_Bool)arg4;
- (void)_logDownloadForMedia:(id)arg1 success:(_Bool)arg2 prefetch:(_Bool)arg3;
- (void)_retrieveStoriesContentForContentResult:(id)arg1 contentKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_retrieveStoriesContentForContentKey:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_retrieveStoriesContentForBoltVideoAndOverlayMedia:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_retrieveStoriesContentForBoltMedia:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleBoltDownloadCompletionWithStatus:(long long)arg1 metrics:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_boltDownloadHelperForContentKey:(id)arg1 contentObject:(id)arg2 key:(id)arg3 iv:(id)arg4 userInitiated:(_Bool)arg5 requestContext:(id)arg6 completePrefetch:(_Bool)arg7 mediaType:(long long)arg8 featureType:(long long)arg9 prefetchConnectivity:(long long)arg10 expirationDate:(id)arg11 completion:(CDUnknownBlockType)arg12;
- (void)_handleFetchingCompleteStreamingContentForMedia:(id)arg1 streamingContent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrieveNonStreamingContentForMedia:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)retrieveLocalContentToUpload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)releaseLocalAuthoritativeContentForCacheKeys:(id)arg1;
- (void)saveLocalContentForMedia:(id)arg1 data:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeContentForMedias:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryContentStatusForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)queryContentStatusForMedia:(id)arg1;
- (void)retrieveContentForMedia:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadContentForMedia:(id)arg1 userInitiated:(_Bool)arg2 request:(id)arg3 contexts:(id)arg4 expirationDate:(id)arg5 isEligibleForStreaming:(_Bool)arg6 completePrefetch:(_Bool)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)initWithContentDelivery:(id)arg1 useBoltContentObject:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

