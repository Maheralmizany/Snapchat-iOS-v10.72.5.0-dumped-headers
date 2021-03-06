//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStreamingRequestLoader.h"

@class NSString, NSURL, SCQueuePerformer, SCSessionRequestManager;

@interface SCStreamingResourceDataRequestLoader : NSObject <SCStreamingRequestLoader>
{
    NSURL *_url;
    NSString *_requestKey;
    long long _bytesExpected;
    long long _bytesReceived;
    struct _NSRange _byteRange;
    SCSessionRequestManager *_requestManager;
    long long _requestPriority;
    SCQueuePerformer *_callbackQueuePerformer;
    id <SCStreamingLoadingRequestResolver> _delegate;
}

- (void).cxx_destruct;
- (void)_fetchDataFromNetwork;
- (void)_cancelRequest;
- (void)boostPriority:(long long)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1 byteRange:(struct _NSRange)arg2 delegate:(id)arg3 callbackQueuePerformer:(id)arg4 requestManager:(id)arg5 requestPriority:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

