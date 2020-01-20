//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURLSessionTask, SCAPIRequestInfo, SCAPIURLSession, SCDisplayContext, SCNNetworkTypesUrlResponseInfo, SCRequestInfoContainer, SCRequestSchedulingStateListenerAnnouncer, SCRequestTrackingInfo;

@interface SCRequest : NSObject
{
    SCRequestSchedulingStateListenerAnnouncer *_schedulingStateAnnouncer;
    _Bool _userInitiated;
    _Bool _isUIAssetRequest;
    _Bool _isWifiOnlyRequest;
    _Bool _isStreamingRequest;
    _Bool _shouldTrace;
    _Bool _isBackgroundRequest;
    _Bool _isResumable;
    _Bool _authenticated;
    _Bool _isUserBlocking;
    _Bool _isUserVisible;
    _Bool _willUseBackgroundSession;
    float _URLSessionTaskPriority;
    SCAPIURLSession *_session;
    NSString *_key;
    SCDisplayContext *_displayContext;
    SCDisplayContext *_currentDisplayContext;
    long long _fallbackPriority;
    long long _priority;
    long long _connectivity;
    unsigned long long _index;
    NSString *_requestBatchId;
    long long _estimatedResponseSizeBytes;
    long long _contextPriority;
    unsigned long long _contextScore;
    NSString *_requestId;
    long long _requestType;
    long long _method;
    double _requestTimestamp;
    SCRequestTrackingInfo *_trackingInfo;
    unsigned long long _maxNumOfRequestAttempts;
    NSDictionary *_networkStats;
    unsigned long long _schedulingState;
    unsigned long long _concurrencyControlPriority;
    long long _appState;
    NSURLSessionTask *_task;
    id <SCRequestParser> _requestParser;
    SCRequestInfoContainer *_requestInfoContainer;
    SCAPIRequestInfo *_info;
    NSString *_taskId;
    long long _queuingLatency;
    long long _accumulatedUserInitiatedQueuingLatency;
    double _lastUserInitiatedTime;
    long long _estimatedRequestSize;
    double _enqueueTime;
    SCNNetworkTypesUrlResponseInfo *_urlResponseInfo;
    NSString *_userContextWhenEnqueued;
    NSString *_taskContextWhenCompleted;
}

+ (unsigned long long)mainPageScoreWithDisplayContext:(id)arg1;
+ (unsigned long long)perfectMatchScoreWithDisplayContext:(id)arg1;
+ (unsigned long long)computeContextScoreWithContexts:(id)arg1 currentContexts:(id)arg2;
+ (id)createStreamingRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11 authenticated:(_Bool)arg12 estimatedSizeBytes:(long long)arg13;
+ (id)createBackgroundRequestWithURL:(id)arg1 parameters:(id)arg2 uploadFileURL:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestType:(long long)arg7 method:(long long)arg8;
+ (id)createUploadRequestWithURL:(id)arg1 parameters:(id)arg2 uploadFileURL:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestParser:(id)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 readTimeoutInterval:(double)arg14 useGzipRequestCompression:(_Bool)arg15;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestParser:(id)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 useGzipRequestCompression:(_Bool)arg14;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestParser:(id)arg10 requestType:(long long)arg11 method:(long long)arg12;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11 readTimeoutInterval:(double)arg12;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11 authenticated:(_Bool)arg12 useGzipRequestCompression:(_Bool)arg13;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11 authenticated:(_Bool)arg12;
+ (id)createRequestWithURL:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHTTPHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 priority:(long long)arg8 fallbackPriority:(long long)arg9 connectivity:(long long)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 readTimeoutInterval:(double)arg14 useGzipRequestCompression:(_Bool)arg15;
+ (id)createPostRequestWithEndpoint:(id)arg1 postData:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 authenticated:(_Bool)arg11;
+ (id)createPostRequestWithEndpoint:(id)arg1 postData:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 fallbackPriority:(long long)arg7 connectivity:(long long)arg8 requestType:(long long)arg9 authenticated:(_Bool)arg10;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 priority:(long long)arg8 fallbackPriority:(long long)arg9 connectivity:(long long)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13 useGzipRequestCompression:(_Bool)arg14;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 additionalHttpHeaders:(id)arg4 key:(id)arg5 contexts:(id)arg6 requestParser:(id)arg7 priority:(long long)arg8 fallbackPriority:(long long)arg9 connectivity:(long long)arg10 requestType:(long long)arg11 method:(long long)arg12 authenticated:(_Bool)arg13;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 fallbackPriority:(long long)arg7 connectivity:(long long)arg8 requestType:(long long)arg9 method:(long long)arg10 authenticated:(_Bool)arg11 readTimeoutInterval:(double)arg12;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11 authenticated:(_Bool)arg12 useGzipRequestCompression:(_Bool)arg13;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 priority:(long long)arg7 fallbackPriority:(long long)arg8 connectivity:(long long)arg9 requestType:(long long)arg10 method:(long long)arg11 authenticated:(_Bool)arg12;
+ (id)createRequestWithEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 fallbackPriority:(long long)arg7 connectivity:(long long)arg8 requestType:(long long)arg9 method:(long long)arg10 authenticated:(_Bool)arg11;
+ (id)createRequestFromGtqNetworkRequest:(id)arg1;
+ (void)performProtoRequestWithEndpoint:(id)arg1 proto:(id)arg2 additionalHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 requestType:(long long)arg7 authenticated:(_Bool)arg8 userSession:(id)arg9 responseClass:(Class)arg10 completionQueue:(id)arg11 completion:(CDUnknownBlockType)arg12;
+ (id)createProtoRequestWithURL:(id)arg1 proto:(id)arg2 additionalHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 requestType:(long long)arg7 authenticated:(_Bool)arg8;
+ (id)createProtoRequestWithEndpoint:(id)arg1 proto:(id)arg2 additionalHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 requestType:(long long)arg7 authenticated:(_Bool)arg8;
+ (id)hideStoryRequestWithLensId:(id)arg1 userId:(id)arg2;
@property(copy, nonatomic) NSString *taskContextWhenCompleted; // @synthesize taskContextWhenCompleted=_taskContextWhenCompleted;
@property(copy, nonatomic) NSString *userContextWhenEnqueued; // @synthesize userContextWhenEnqueued=_userContextWhenEnqueued;
@property(retain, nonatomic) SCNNetworkTypesUrlResponseInfo *urlResponseInfo; // @synthesize urlResponseInfo=_urlResponseInfo;
@property(nonatomic) double enqueueTime; // @synthesize enqueueTime=_enqueueTime;
@property(nonatomic) long long estimatedRequestSize; // @synthesize estimatedRequestSize=_estimatedRequestSize;
@property(nonatomic) _Bool willUseBackgroundSession; // @synthesize willUseBackgroundSession=_willUseBackgroundSession;
@property(readonly, nonatomic) double lastUserInitiatedTime; // @synthesize lastUserInitiatedTime=_lastUserInitiatedTime;
@property(readonly, nonatomic) long long accumulatedUserInitiatedQueuingLatency; // @synthesize accumulatedUserInitiatedQueuingLatency=_accumulatedUserInitiatedQueuingLatency;
@property(nonatomic) long long queuingLatency; // @synthesize queuingLatency=_queuingLatency;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) _Bool isUserVisible; // @synthesize isUserVisible=_isUserVisible;
@property(readonly, nonatomic) _Bool isUserBlocking; // @synthesize isUserBlocking=_isUserBlocking;
@property(retain, nonatomic) SCAPIRequestInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) SCRequestInfoContainer *requestInfoContainer; // @synthesize requestInfoContainer=_requestInfoContainer;
@property(retain, nonatomic) id <SCRequestParser> requestParser; // @synthesize requestParser=_requestParser;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) long long appState; // @synthesize appState=_appState;
@property(nonatomic) unsigned long long concurrencyControlPriority; // @synthesize concurrencyControlPriority=_concurrencyControlPriority;
@property(nonatomic) unsigned long long schedulingState; // @synthesize schedulingState=_schedulingState;
@property(copy) NSDictionary *networkStats; // @synthesize networkStats=_networkStats;
@property(nonatomic) unsigned long long maxNumOfRequestAttempts; // @synthesize maxNumOfRequestAttempts=_maxNumOfRequestAttempts;
@property(retain, nonatomic) SCRequestTrackingInfo *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
@property(readonly, nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(readonly, nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(readonly, nonatomic) long long method; // @synthesize method=_method;
@property(readonly, nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) unsigned long long contextScore; // @synthesize contextScore=_contextScore;
@property(readonly, nonatomic) long long contextPriority; // @synthesize contextPriority=_contextPriority;
@property(nonatomic) _Bool isResumable; // @synthesize isResumable=_isResumable;
@property(readonly, nonatomic) _Bool isBackgroundRequest; // @synthesize isBackgroundRequest=_isBackgroundRequest;
@property(nonatomic) _Bool shouldTrace; // @synthesize shouldTrace=_shouldTrace;
@property(readonly, nonatomic) long long estimatedResponseSizeBytes; // @synthesize estimatedResponseSizeBytes=_estimatedResponseSizeBytes;
@property(copy, nonatomic) NSString *requestBatchId; // @synthesize requestBatchId=_requestBatchId;
@property(nonatomic) _Bool isStreamingRequest; // @synthesize isStreamingRequest=_isStreamingRequest;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isWifiOnlyRequest; // @synthesize isWifiOnlyRequest=_isWifiOnlyRequest;
@property(nonatomic) long long connectivity; // @synthesize connectivity=_connectivity;
@property(nonatomic) float URLSessionTaskPriority; // @synthesize URLSessionTaskPriority=_URLSessionTaskPriority;
@property(nonatomic) _Bool isUIAssetRequest; // @synthesize isUIAssetRequest=_isUIAssetRequest;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long fallbackPriority; // @synthesize fallbackPriority=_fallbackPriority;
@property(retain, nonatomic) SCDisplayContext *currentDisplayContext; // @synthesize currentDisplayContext=_currentDisplayContext;
@property(retain, nonatomic) SCDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (void)progressiveUpdateWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeDownloadProgressMonitoring;
- (void)monitorUploadProgressWithCallback:(CDUnknownBlockType)arg1;
- (void)monitorDownloadProgressWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)monitorDownloadProgressWithCallback:(CDUnknownBlockType)arg1;
- (id)uploadProgress;
- (id)downloadProgress;
@property(readonly, nonatomic) unsigned long long payloadSize;
- (id)logId;
- (void)setTimeoutInterval:(double)arg1;
- (void)_updateContextPriority;
- (void)updateRequestContext;
- (void)updateWithRequest:(id)arg1;
- (void)setRequestId;
- (void)setTrackingInfoWithId:(id)arg1 mediaId:(id)arg2 type:(id)arg3 mediaType:(id)arg4 contentResolveTime:(id)arg5 expirationInDays:(unsigned long long)arg6;
- (void)setTrackingInfoWithId:(id)arg1 mediaId:(id)arg2 type:(id)arg3 mediaType:(id)arg4 expirationInDays:(unsigned long long)arg5;
- (void)setTrackingInfoWithId:(id)arg1 type:(id)arg2 mediaType:(id)arg3 expirationInDays:(unsigned long long)arg4;
- (void)addRequestConcurrencyObserver:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)queueType;
- (id)requestTypeStr;
@property(readonly, nonatomic) SCAPIURLSession *session; // @synthesize session=_session;
- (id)resumableDownloadedData;
- (unsigned long long)approximateRequestSize;
- (id)urlRequest;
- (id)url;
- (id)path;
- (double)sessionTimeoutInterval;
- (double)timeoutInterval;
- (void)cleanUp;
- (void)resumeWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)pause;
- (void)cancel;
- (void)executeWithAuthenticator:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)didComplete;
- (void)didExecute;
- (void)didEnqueue;
- (void)initializeURLRequestWithAuthenticator:(id)arg1;
- (id)initWithKey:(id)arg1 contexts:(id)arg2 priority:(long long)arg3 fallbackPriority:(long long)arg4 connectivity:(long long)arg5 requestType:(long long)arg6 requestParser:(id)arg7 method:(long long)arg8 authenticated:(_Bool)arg9 requestTimestamp:(double)arg10 estimatedResponseSizeBytes:(long long)arg11;
- (id)domainTypeString;
- (long long)domainType;

@end
