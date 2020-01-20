//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, PINOperationQueue;

@interface PINOperationGroup : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    PINOperationQueue *_operationQueue;
    NSMutableArray *_operations;
    NSMutableArray *_operationPriorities;
    NSMutableArray *_operationReferences;
    NSMapTable *_groupToOperationReferences;
    unsigned long long _operationReferenceCount;
    NSObject<OS_dispatch_group> *_group;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_completionQueue;
    _Bool _started;
    _Bool _canceled;
}

+ (id)asyncOperationGroupWithQueue:(id)arg1;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)waitUntilComplete;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (id)addOperation:(CDUnknownBlockType)arg1 withPriority:(unsigned long long)arg2;
- (id)addOperation:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)start;
- (id)locked_nextOperationReference;
- (void)dealloc;
- (id)initWithOperationQueue:(id)arg1;

@end

