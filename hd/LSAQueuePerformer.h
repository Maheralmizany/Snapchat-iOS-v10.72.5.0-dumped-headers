//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface LSAQueuePerformer : NSObject
{
    NSString *_uuid;
    _Bool _reentrant_DEPRECATED_DO_NOT_USE;
    _Bool _isMainThread;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _shouldCatchExceptions;
    _Bool _isValid;
    CDUnknownBlockType _preExecutionBlock;
    CDUnknownBlockType _postExecutionBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)mainQueuePerformer;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)tryToExecuteUnsafeBlock:(CDUnknownBlockType)arg1 blockInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isCurrentPerformer;
- (void)performUnsafeBlockAndWaitWithInfo:(id)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performUnsafeBlockImmediatelyIfCurrentPerformerWithInfo:(id)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performUnsafeBlockWithInfo:(id)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performAndWaitWithSemaphore:(CDUnknownBlockType)arg1;
- (void)performAndWait:(CDUnknownBlockType)arg1;
- (void)performImmediatelyIfCurrentPerformer:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)setShouldCatchExceptions:(_Bool)arg1;
- (void)invalidate;
- (CDUnknownBlockType)_makeDispatchBlock:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2 preExecutionBlock:(CDUnknownBlockType)arg3 postExecutionBlock:(CDUnknownBlockType)arg4;
- (id)initWithLabel:(const char *)arg1 qualityOfService:(unsigned int)arg2;
- (id)initWithMainQueue;

@end
