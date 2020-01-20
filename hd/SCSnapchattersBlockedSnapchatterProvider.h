//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapchattersBlockedSnapchatterFetching.h"
#import "SCSnapchattersBlockedSnapchatterSynchronousFetching.h"

@class SCQueuePerformer, SCSnapchattersFetchedResultObserver;

@interface SCSnapchattersBlockedSnapchatterProvider : NSObject <SCSnapchattersBlockedSnapchatterFetching, SCSnapchattersBlockedSnapchatterSynchronousFetching>
{
    SCQueuePerformer *_performer;
    SCSnapchattersFetchedResultObserver *_fetchedResultObserverGenerator;
}

- (void).cxx_destruct;
- (id)blockedSnapchattersObserver;
- (void)_fetchAndObserveBlockedSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchBlockedSnapchatterWithUsername:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchBlockedSnapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isBlockedSnapchatterForUsername:(id)arg1;
- (_Bool)isBlockedSnapchatterForUserId:(id)arg1;
- (unsigned long long)blockedSnapchattersCount;
- (void)blockedSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)blockedSnapchatterWithUsername:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)blockedSnapchatterWithUserId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSnapchattersFetchedResultObserverRepository:(id)arg1;

@end

