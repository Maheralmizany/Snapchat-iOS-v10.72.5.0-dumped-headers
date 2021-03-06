//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPerforming.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_queue_attr>, NSObject<OS_dispatch_semaphore>, NSString;

@interface SCQueuePerformer : NSObject <SCPerforming>
{
    const char *_label;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _qid;
    NSObject<OS_dispatch_queue_attr> *_queueType;
    unsigned int _qualityOfService;
    unsigned int _qualityOfServiceForThrottling;
    unsigned long long _context;
    long long _applicationContext;
    _Bool _adjustableQoS;
    _Bool _throttled;
    _Bool _isMainQueuePerformer;
    NSObject<OS_dispatch_semaphore> *_queueSyncSemaphore;
}

+ (id)_defaultPerformer;
+ (id)_backgroundPerformer;
+ (id)_utilityPerformer;
+ (id)_userInitiatedPerformer;
+ (id)_userInteractivePerformer;
+ (id)globalQueuePerformer:(unsigned int)arg1 ContextState:(id)arg2;
+ (id)mainQueuePerformer;
+ (id)impalaPerformer;
- (void).cxx_destruct;
- (void)_setNewQueueWithFixedQoS:(unsigned int)arg1;
- (id)queue;
- (void)startThrottling;
- (void)stopThrottling;
- (long long)applicationContext;
- (unsigned long long)context;
- (unsigned int)qualityOfService;
- (void)assertQueue;
- (_Bool)isCurrentPerformer;
- (void)performWithBarrier:(CDUnknownBlockType)arg1;
- (void)performAndWait:(CDUnknownBlockType)arg1;
- (void)performOnGroupNotification_DEPRECATED:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)perform:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)performImmediatelyIfCurrentPerformer:(CDUnknownBlockType)arg1;
- (void)performWithQoS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)perform:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_makeDispatchBlock:(CDUnknownBlockType)arg1 expectedQoS:(unsigned int)arg2;
- (id)initWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2 queueType:(id)arg3 context:(unsigned long long)arg4 adjustableQoS:(_Bool)arg5;
- (id)initQoSFixedPerformerWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2 queueType:(id)arg3 context:(unsigned long long)arg4 reason:(const char *)arg5;
- (id)initWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2 queueType:(id)arg3 context:(unsigned long long)arg4;
- (id)initWithGlobalQueue:(unsigned int)arg1;
- (id)initWithMainQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

