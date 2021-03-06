//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSelectGroupMembersDelegate.h"

@class NSArray, NSString, SCSnapchatter, UITableView;

@protocol SCAddToGroupViewDelegate <SCSelectGroupMembersDelegate>
- (void)startNewGroupChatRecipientSelectionFromCreationType:(unsigned long long)arg1;
- (void)presentBlockedExceptionsAlertView:(id <SCChatGroup>)arg1;
- (void)presentMiniProfileForGroup:(id <SCChatGroup>)arg1;
- (void)presentMiniProfileForFriend:(SCSnapchatter *)arg1;
- (void)didSelectGroup:(id <SCChatGroup>)arg1;
- (_Bool)isCreatingGroupAfterTappingRecipientBar;
- (unsigned long long)chatCreationType;
- (_Bool)isFriendInBaseGroup:(SCSnapchatter *)arg1;
- (SCSnapchatter *)currentFriendSuggestion;
- (NSString *)currentFilterText;
- (_Bool)isSearching;
- (NSArray *)filteredGroups;
- (NSArray *)filteredFriends;
- (NSArray *)allPotentialRecipientSectionKeys;
- (NSArray *)recents;
- (NSArray *)bestFriends;
- (NSArray *)allGroups;
- (NSArray *)relatedGroups;
- (NSArray *)allPotentialRecipients;
- (NSArray *)recipients;

@optional
- (void)showInput;
- (void)hideInput;
- (void)selectRecipientsTableViewDidScroll:(UITableView *)arg1;
@end

