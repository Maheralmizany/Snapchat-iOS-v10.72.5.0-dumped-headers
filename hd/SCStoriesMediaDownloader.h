//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCQueuePerformer, SCSessionRequestManager;

@interface SCStoriesMediaDownloader : NSObject
{
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
    NSMutableDictionary *_downloadingInfoByKey;
}

- (void).cxx_destruct;
- (void)_invokeCallbacksForKey:(id)arg1 cause:(long long)arg2 encryptedMedia:(id)arg3;
- (CDUnknownBlockType)_failureCallback:(id)arg1;
- (CDUnknownBlockType)_successCallback:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestsForKeys:(id)arg1;
- (_Bool)hasPendingRequestForKey:(id)arg1;
- (void)registerCallbackForKey:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)boostRequestPriorityIfPossible:(id)arg1 userInitiated:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)submitRequestForKey:(id)arg1 request:(id)arg2 userInitiated:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithPerformer:(id)arg1 requestManager:(id)arg2;

@end
