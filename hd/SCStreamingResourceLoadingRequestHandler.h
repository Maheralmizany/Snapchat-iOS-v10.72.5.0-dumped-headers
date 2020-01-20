//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStreamingLoadingRequestResolver.h"
#import "SCStreamingResourceLoaderRequestHandler.h"

@class NSDate, NSMutableArray, NSMutableData, NSString, SCQueuePerformer, SCSessionRequestManager, SCStreamingResourceInfo;

@interface SCStreamingResourceLoadingRequestHandler : NSObject <SCStreamingLoadingRequestResolver, SCStreamingResourceLoaderRequestHandler>
{
    SCQueuePerformer *_callbackQueuePerformer;
    int _state;
    SCStreamingResourceInfo *_requestInfo;
    SCSessionRequestManager *_requestManager;
    long long _requestPriority;
    id <SCStreamingRequestLoader> _requestLoader;
    id <SCStreamingResponseCaching> _cache;
    NSMutableArray *_loadingRequests;
    NSMutableData *_accumulatedData;
    NSMutableData *_decryptedData;
    unsigned long long _contentLength;
    unsigned long long _totalDataReceived;
    unsigned long long _initialDataLength;
    NSDate *_streamingStartDate;
    id <SCStreamingResourceLoadingRequestHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_processPendingRequestsWithError:(id)arg1;
- (void)requestLoaderDidFinishLoading:(id)arg1 withError:(id)arg2;
- (void)requestLoader:(id)arg1 didReceiveData:(id)arg2;
- (void)requestLoader:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_decryptData:(id)arg1;
- (void)cancelLoadingRequest:(id)arg1;
- (void)boostPriority:(long long)arg1;
- (void)stop;
- (void)_tearDown;
- (void)_cacheAccumulatedData;
- (void)_fetchData;
- (_Bool)handleDataLoadingRequest:(id)arg1;
- (_Bool)handleContentInfoLoadingRequest:(id)arg1;
- (id)initWithInfo:(id)arg1 callbackQueue:(id)arg2 requestHandlerDelegate:(id)arg3 cache:(id)arg4 requestManager:(id)arg5 requestPriority:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

