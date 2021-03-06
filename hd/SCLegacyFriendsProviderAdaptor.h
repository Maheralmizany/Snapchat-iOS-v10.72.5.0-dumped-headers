//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyFriendsProvider.h"
#import "SCTraceEnabled.h"

@class NSString, SCLazy, User;

@interface SCLegacyFriendsProviderAdaptor : NSObject <SCTraceEnabled, SCLegacyFriendsProvider>
{
    User *_user;
    SCLazy *_friends;
}

- (void).cxx_destruct;
- (void)fetchAsyncOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldIncludeFriendWhoAddedMe:(id)arg1;
- (id)latestAddedByFriendsTimestamp;
- (id)recentFriends;
- (_Bool)isSuggestedSnapchattersAvailable:(id)arg1;
- (id)recentAndSuggestedFriends;
- (id)rankedBestFriends;
- (id)publisherAccountsSuggestions;
- (id)officialAccountsSuggestions;
- (id)outOfContactsSuggestions;
- (id)contactSnapchatters:(_Bool)arg1;
- (id)suggestedSnapchattersForSuggestionPage:(unsigned int)arg1 filterFriends:(_Bool)arg2;
- (id)getAddedFriendsPredicateWithForcedInclusion:(id)arg1;
- (id)displayIncomingFriends;
- (id)allIncomingFriends;
- (id)mutualFriends;
- (id)outgoingFriends;
- (id)allFriendsIncludeBlocked;
- (id)contactFriendForUsername:(id)arg1;
- (id)suggestedFriendForUsername:(id)arg1;
- (id)incomingFriendForUsername:(id)arg1;
- (id)outgoingFriendForUsername:(id)arg1;
- (id)nonFriendContactFriendForUserId:(id)arg1;
- (id)contactFriendForUserId:(id)arg1;
- (id)suggestedFriendForUserId:(id)arg1;
- (id)incomingFriendForUserId:(id)arg1;
- (id)outgoingFriendForUserId:(id)arg1;
- (id)initWithUser:(id)arg1 friends:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

