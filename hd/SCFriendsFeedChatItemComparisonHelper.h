//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFriendsFeedDisplayItemComparisonHelper.h"

@class NSString, SCFriendsFeedChatItem;

@interface SCFriendsFeedChatItemComparisonHelper : SCFriendsFeedDisplayItemComparisonHelper
{
    SCFriendsFeedChatItem *_chatItem;
    NSString *_currentUsername;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (id)getItem;
- (long long)timeStampInMs;
- (unsigned long long)typePriority;
- (_Bool)isSentByUser;
- (_Bool)isSendingOrFailed;
- (_Bool)hasConsumableContent;
- (id)initWithChatItem:(id)arg1 currentUsername:(id)arg2 currentUserId:(id)arg3;

@end

