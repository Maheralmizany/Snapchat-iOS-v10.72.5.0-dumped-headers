//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, SOJUIdentityMischiefMobCreationRequest;

@protocol SCGroupsDataCreating <NSObject>
- (void)createGroupInviteOnServerWithGroupInviteId:(NSString *)arg1 groupInviteType:(long long)arg2 groupId:(NSString *)arg3 source:(long long)arg4 completion:(void (^)(_Bool, NSString *, NSString *))arg5;
- (void)createDolphinGroupWithUserAsFriend:(id <SCNamedFriend>)arg1 groupName:(NSString *)arg2 creationSource:(long long)arg3 source:(long long)arg4 completion:(void (^)(NSString *))arg5;
- (void)createGroupWithName:(NSString *)arg1 recipients:(NSArray *)arg2 creationSource:(long long)arg3 source:(long long)arg4 completion:(void (^)(NSString *))arg5;
- (void)createLocalGroupWithFriends:(NSArray *)arg1 creationSource:(long long)arg2 completion:(void (^)(NSString *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
- (void)createEmptyGroupsOnServerIfNecessary:(NSArray *)arg1 source:(long long)arg2 groupStoryRequest:(SOJUIdentityMischiefMobCreationRequest *)arg3 completion:(void (^)(_Bool, NSString *, NSArray *))arg4;
- (void)createGroupsOnServerIfNecessary:(NSArray *)arg1 source:(long long)arg2 groupStoryRequest:(SOJUIdentityMischiefMobCreationRequest *)arg3 completion:(void (^)(_Bool, NSString *, NSArray *))arg4;
@end

