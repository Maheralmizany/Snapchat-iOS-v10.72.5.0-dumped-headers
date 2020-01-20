//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, SCImageProcessContext;

@interface SCImageProcessQueue : NSObject
{
    NSObject<OS_dispatch_semaphore> *_requestSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingRequests;
    NSMutableSet *_processingRequests;
    SCImageProcessContext *_context;
    _Bool _GPUAvailable;
    unsigned long long _pending;
    id <SCImageProcessQueueDelegate> _delegate;
}

+ (id)sharedQueue;
@property(nonatomic) __weak id <SCImageProcessQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long pending; // @synthesize pending=_pending;
- (void).cxx_destruct;
- (unsigned long long)processingRequestIdentifier;
- (id)queueDebugInfo;
- (id)_queueDebugInfo;
- (void)addRequest:(id)arg1;
- (void)_scheduleOnQueue:(id)arg1;
- (void)_executeRequest:(id)arg1;
- (void)_scheduleForProcessingWithPendingRequestPresent:(_Bool)arg1 oldRequest:(id)arg2;
- (void)waitUntilOpenGLOperationsHalted;
- (void)resumeOpenGLOperations;
- (void)startSuspendOpenGLOperations;
- (void)_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)init;

@end
