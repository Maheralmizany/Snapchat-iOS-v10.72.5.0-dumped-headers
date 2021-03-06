//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet;

@interface SCAPISessionTaskBookkeeper : NSObject
{
    id <SCPerforming> _bookkeeperPerformer;
    NSMutableDictionary *_taskEntries;
    NSMutableDictionary *_sessionCounters;
    _Bool _shouldWrapBackgroundTask;
    _Bool _removeBGTaskForALLNetworkRequestEnabled;
    _Bool _removeBGTaskForSelectedNetworkRequestEnabled;
    NSSet *_removeBGTaskSelectedEndpointList;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_invalidateAndRemoveSessionCounterIfNeeded:(unsigned long long)arg1;
- (void)markNeedsInvalidationForSession:(id)arg1;
- (void)removeTask:(id)arg1 forSession:(id)arg2;
- (void)removeSCRequestTaskForNNM:(id)arg1;
- (void)_removeTask:(id)arg1 forSession:(id)arg2;
- (void)addTask:(id)arg1 forSession:(id)arg2;
- (void)addSCRequestTaskForNNM:(id)arg1;
- (void)_addTask:(id)arg1 key:(id)arg2 session:(id)arg3 cancelTask:(CDUnknownBlockType)arg4;
- (void)_updateABTestSettings;
- (id)init;

@end

