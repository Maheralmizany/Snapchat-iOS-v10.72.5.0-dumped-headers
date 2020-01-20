//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSLock, NSMutableDictionary, NSObject<OS_dispatch_group>, NSString, SCQueuePerformer;

@interface SCLensExplorerHistoryManager : NSObject
{
    id <SCCache> _cache;
    NSDate *_expiration;
    NSString *_cacheKey;
    Class _targetClass;
    NSObject<OS_dispatch_group> *_readGroup;
    NSLock *_lock;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_interactionHistory;
}

- (void).cxx_destruct;
- (void)_updateInteractionHistoryWithHistory:(id)arg1;
- (void)loadInteractionHistoryFromDiskWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveInteractionHistoryToDisk;
- (void)updateInteractionHistoryItem:(id)arg1;
- (void)appendInteractionHistoryWithHistory:(id)arg1;
- (id)interactionHistory;
- (id)initWithCache:(id)arg1 expiration:(id)arg2 cacheKey:(id)arg3 targetClass:(Class)arg4;
- (id)userRecentHistoryFuture;

@end
