//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapPeopleFriendsListener.h"
#import "SCMapStatusRPCService.h"

@class NSArray, NSObject<OS_dispatch_semaphore>, NSString, SCQueuePerformer;

@interface SCMapStatusMockRPCService : NSObject <SCMapPeopleFriendsListener, SCMapStatusRPCService>
{
    NSString *_currentUserId;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    SCQueuePerformer *_performer;
    NSArray *_mockExploreItems;
    NSArray *_mockMyStatuses;
    NSObject<OS_dispatch_semaphore> *_awaitingFriendsSemaphore;
}

+ (id)_mockDisplayTextForStatuses:(id)arg1;
+ (id)_mockMyStatusesWithMapPeopleFriendsProvider:(id)arg1 currentUserId:(id)arg2;
+ (id)_mockElectionAnnouncementItem;
+ (id)_mockMapAnnouncementItem;
+ (id)_mockExploreItemsForPeople:(id)arg1;
- (void).cxx_destruct;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (id)_createMockMyStatuses;
- (id)_createMockExploreItems;
- (id)_maybeMockError;
- (void)submitViewEvents:(id)arg1;
- (void)deleteMyStatus:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)fetchMyStatusesWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (void)fetchExploreItemsWithCompletion:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;
- (id)initWithCurrentUserId:(id)arg1 mapPeopleFriendsProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

