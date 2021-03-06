//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SPReenactmentProcessorOutput.h"

@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface SPReenactmentProcessorsQueue : AIFKVONSObject <SPReenactmentProcessorOutput>
{
    _Bool _isStarted;
    _Bool _onlyCache;
    id <SPReenactmentProcessorsQueueDelegate> _delegate;
    NSMutableArray *_items;
    NSMutableSet *_currentFetchingItems;
    unsigned long long _maxConcurrentOperations;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property(nonatomic) _Bool onlyCache; // @synthesize onlyCache=_onlyCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(nonatomic) unsigned long long maxConcurrentOperations; // @synthesize maxConcurrentOperations=_maxConcurrentOperations;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) NSMutableSet *currentFetchingItems; // @synthesize currentFetchingItems=_currentFetchingItems;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <SPReenactmentProcessorsQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)spReenactmentProcessor:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)spReenactmentProcessorDidStartPrepare:(id)arg1;
- (void)fetchNextItem;
- (void)stopFetching;
- (void)fetchAnimatorResults:(id)arg1 cancelCurrentFetchingItems:(_Bool)arg2 onlyCache:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

