//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArroyoFeedDataUpdateListener.h"

@interface SCArroyoFeedDataUpdateListenerAnnouncer : NSObject <SCArroyoFeedDataUpdateListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCArroyoFeedDataUpdateListener>, std::__1::allocator<__weak id<SCArroyoFeedDataUpdateListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFeedEntriesArrive:(id)arg1;
- (void)didFetchFeedCompleteFeedEntries:(id)arg1 fetchContext:(id)arg2;
- (void)didQueryFeedCompleteFeedEntries:(id)arg1 hasNoMore:(_Bool)arg2 fetchContext:(id)arg3;
- (void)didFetchAndSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didSyncFeedCompleteUpdatedFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2 fetchContext:(id)arg3;
- (void)didUpdateFeedEntries:(id)arg1 deletedFeedEntries:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)description;

@end

