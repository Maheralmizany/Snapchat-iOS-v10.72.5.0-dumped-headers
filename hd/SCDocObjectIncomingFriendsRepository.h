//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCIncomingFriendsRepository.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue, SCBehaviorSubject, SCDisposableObserverLifecycle, SCLazy, SCObservable, SCPreferences, SCSnapchattersFetchedResultObserverRepository;

@interface SCDocObjectIncomingFriendsRepository : NSObject <SCIncomingFriendsRepository>
{
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSOperationQueue *_operationQueue;
    SCObservable *_incomingFriendsLastViewedTimestamp;
    SCLazy *_incomingSnapchattersAsyncObservable;
    SCPreferences *_userPreferences;
    SCBehaviorSubject *_preferenceObservable;
    SCDisposableObserverLifecycle *_subscriptions;
    id <SCObserving> _preferencesObservingContext;
}

- (void).cxx_destruct;
- (void)_preferencesChanged;
- (void)_observePreferenceChanges;
@property(readonly, nonatomic) SCObservable *resurrectedPendingFriendRequests;
@property(readonly, nonatomic) SCObservable *unviewedIncomingFriends;
- (id)initWithDocObjectContext:(id)arg1 snapchattersFetchedResultObserverRepository:(id)arg2 incomingFriendsLastViewedTimestamp:(id)arg3 userPreferences:(id)arg4;

@end
