//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AddedFriend, Friend, NSArray, NSNumber, NSObject<OS_dispatch_queue>, NSString, SCSuggestedFriend;

@protocol SCLegacyFriendsProvider
- (void)fetchAsyncOnQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(Friends *))arg2;
- (NSNumber *)latestAddedByFriendsTimestamp;
- (_Bool)isSuggestedSnapchattersAvailable:(NSArray *)arg1;
- (NSArray *)publisherAccountsSuggestions;
- (NSArray *)officialAccountsSuggestions;
- (NSArray *)outOfContactsSuggestions;
- (NSArray *)recentAndSuggestedFriends;
- (NSArray *)recentFriends;
- (NSArray *)rankedBestFriends;
- (NSArray *)contactSnapchatters:(_Bool)arg1;
- (NSArray *)suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 filterFriends:(_Bool)arg2;
- (NSArray *)displayIncomingFriends;
- (NSArray *)allIncomingFriends;
- (NSArray *)mutualFriends;
- (NSArray *)outgoingFriends;
- (NSArray *)allFriendsIncludeBlocked;
- (Friend *)contactFriendForUsername:(NSString *)arg1;
- (SCSuggestedFriend *)suggestedFriendForUsername:(NSString *)arg1;
- (AddedFriend *)incomingFriendForUsername:(NSString *)arg1;
- (Friend *)outgoingFriendForUsername:(NSString *)arg1;
- (Friend *)contactFriendForUserId:(NSString *)arg1;
- (SCSuggestedFriend *)suggestedFriendForUserId:(NSString *)arg1;
- (AddedFriend *)incomingFriendForUserId:(NSString *)arg1;
- (Friend *)outgoingFriendForUserId:(NSString *)arg1;
@end
