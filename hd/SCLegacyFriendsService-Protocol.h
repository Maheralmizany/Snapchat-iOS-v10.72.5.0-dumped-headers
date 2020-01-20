//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AddedFriend, Friend, NSArray, NSDictionary, NSNumber, NSString, SCSessionRequestManager, SOJUFriendsRequest;

@protocol SCLegacyFriendsService
- (SOJUFriendsRequest *)friendsRequest;
- (void)updateUnreadAddedFriends;
- (void)setDisplay:(NSString *)arg1 forFriend:(Friend *)arg2 context:(NSDictionary *)arg3 sessionRequestManager:(id)arg4 onComplete:(void (^)(_Bool, NSString *))arg5;
- (void)unblockFriend:(Friend *)arg1 context:(NSDictionary *)arg2 sessionRequestManager:(SCSessionRequestManager *)arg3 completion:(void (^)(_Bool))arg4;
- (void)blockFriend:(Friend *)arg1 blockReasonId:(NSNumber *)arg2 context:(NSDictionary *)arg3 sessionRequestManager:(SCSessionRequestManager *)arg4 completion:(void (^)(_Bool))arg5;
- (void)deleteFriend:(Friend *)arg1 context:(NSDictionary *)arg2 sessionRequestManager:(SCSessionRequestManager *)arg3 completion:(void (^)(_Bool))arg4;
- (void)addMultiFriendsWithSourceType:(NSDictionary *)arg1 context:(NSDictionary *)arg2 pageType:(long long)arg3 sessionRequestManager:(SCSessionRequestManager *)arg4 callback:(void (^)(_Bool))arg5;
- (void)addFriend:(Friend *)arg1 context:(NSDictionary *)arg2 sourceType:(long long)arg3 pageType:(long long)arg4 sessionRequestManager:(SCSessionRequestManager *)arg5 completion:(void (^)(_Bool))arg6;
- (Friend *)getOrCreateTempFriendForName:(NSString *)arg1;
- (_Bool)isUsernameBlocked:(NSString *)arg1;
- (_Bool)isFriend:(NSString *)arg1;
- (AddedFriend *)addedFriendForName:(NSString *)arg1;
- (Friend *)friendForName:(NSString *)arg1;
- (NSArray *)friendsForUserIds:(NSArray *)arg1;
- (Friend *)friendForUserId:(NSString *)arg1;
- (NSArray *)getBlockedStoryFriends;
- (NSArray *)getBlockedFriends;
- (NSArray *)getRecents;
- (NSArray *)getUnreadAddedFriends;
- (NSArray *)getRecentlyAdded;
- (NSArray *)bestFriendsObjects;
- (NSArray *)getAllMutualFriendsExceptSelf;
- (NSArray *)getAllMutualFriends;
- (NSArray *)allOutgoingFriendsExceptSelf;
- (NSArray *)allOutgoingFriends;
- (NSArray *)getAllFriends;
@end

