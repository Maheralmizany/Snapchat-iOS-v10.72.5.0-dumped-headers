//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDisposableObserverLifecycle, SCObservable, SCQueuePerformer;

@interface SCNotificationBadgeCountObservableRepository : NSObject
{
    id <SCSnapchattersDataFetching> _snapchattersDataFetcher;
    SCQueuePerformer *_performer;
    SCDisposableObserverLifecycle *_disposableLifecycle;
    SCObservable *_badgeCountObservable;
}

@property(readonly, nonatomic) SCObservable *badgeCountObservable; // @synthesize badgeCountObservable=_badgeCountObservable;
- (void).cxx_destruct;
- (id)_createBadgeableFriendRequestsObservable:(id)arg1 snapchattersDataFetcher:(id)arg2 performerQueue:(id)arg3 observableLifecycle:(id)arg4;
- (id)_createFriendsFeedObservable:(id)arg1;
- (id)initWithFriendsFeed:(id)arg1 incomingFriends:(id)arg2 snapchattersDataFetcher:(id)arg3;

@end

