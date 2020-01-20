//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStreamingResourceLoaderRequestHandler.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, SCExperimentManager, SCResourceLoaderWriteStream, SCStreamingResourceContentInfo;

@interface SCStreamingResourceLoadingRequestHandlerUsingContentManager : NSObject <SCStreamingResourceLoaderRequestHandler>
{
    SCResourceLoaderWriteStream *_writeStream;
    int _state;
    _Bool _monitoring;
    id <SCPerforming> _callbackQueuePerformer;
    SCStreamingResourceContentInfo *_requestInfo;
    SCExperimentManager *_experimentManager;
    NSMutableArray *_loadingRequests;
    NSMutableDictionary *_loadingRequestHashToWriteStreamMap;
    long long _contentLength;
    unsigned long long _totalDataReceived;
    unsigned long long _currentRequestedLength;
    NSString *_mediaId;
    NSDate *_streamingStartDate;
    id <SCStreamingResourceLoadingRequestHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_loadingRequestHash:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)_handleCMWriteStreamCallback:(id)arg1 error:(id)arg2;
- (void)_handleCMDataLoadingRequest:(id)arg1;
- (void)_stopMonitoringForContentStreamUpdates;
- (void)_tearDown;
- (long long)_maxRequestedLength;
- (void)_processPendingRequestsWithData:(id)arg1;
- (void)_processStreamError:(id)arg1;
- (void)_processStreamUpdate:(id)arg1;
- (void)_startMonitoringForContentStreamUpdates;
- (void)boostPriority:(long long)arg1;
- (void)stop;
- (void)cancelLoadingRequest:(id)arg1;
- (_Bool)handleDataLoadingRequest:(id)arg1;
- (_Bool)handleContentInfoLoadingRequest:(id)arg1;
- (id)initWithResourceContentInfo:(id)arg1 callbackQueue:(id)arg2 requestHandlerDelegate:(id)arg3 experimentManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

