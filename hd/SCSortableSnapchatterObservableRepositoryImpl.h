//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSortableSnapchatterObservableRepository.h"

@class NSString, SCBehaviorSubject, SCDisposableObserverLifecycle, SCLazy, SCObservable;

@interface SCSortableSnapchatterObservableRepositoryImpl : NSObject <SCSortableSnapchatterObservableRepository>
{
    SCLazy *_snapchattersDisplayMetadataCoordinator;
    SCLazy *_userInfoRepository;
    SCBehaviorSubject *_bestFriendsSubject;
    SCBehaviorSubject *_recentFriendsSubject;
    SCBehaviorSubject *_recentMutualFriendsSubject;
    SCBehaviorSubject *_outgoingSnapchatterSubject;
    SCBehaviorSubject *_sortedSnapchatterSubject;
    SCBehaviorSubject *_snapchatterAToZMapSubject;
    SCLazy *_lazyBestFriendsObservable;
    SCLazy *_lazyRecentFriendsObservable;
    SCLazy *_lazyRecentMutualFriendsObservable;
    SCLazy *_lazyOutgoingSnapchatterObservable;
    SCLazy *_lazySortedSnapchatterObservable;
    SCLazy *_lazySnapchatterAToZMapObservable;
    SCDisposableObserverLifecycle *_subscription;
}

- (void).cxx_destruct;
- (id)mutualFriendsObservableForLetterKey:(id)arg1;
- (id)friendsObservableForLetterKey:(id)arg1;
- (id)searchMutualFriendsObservableForQuery:(id)arg1;
- (id)searchFriendsObservableForQuery:(id)arg1;
@property(readonly, nonatomic) SCObservable *allFriendsObservable;
@property(readonly, nonatomic) SCObservable *outgoingSnapchatterObservable;
@property(readonly, nonatomic) SCObservable *recentMutualFriendsObservable;
@property(readonly, nonatomic) SCObservable *recentFriendsObservable;
@property(readonly, nonatomic) SCObservable *bestFriendsObservable;
- (void)warmUp;
- (id)initWithSnapchattersDisplayMetadataCoordinator:(id)arg1 snapchatterObservableRepository:(id)arg2 userInfoRepository:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

