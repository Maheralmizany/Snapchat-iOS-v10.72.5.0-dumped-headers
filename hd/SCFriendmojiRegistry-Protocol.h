//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString, SOJUEmojiInfo, SOJUFriendmoji;

@protocol SCFriendmojiRegistry
- (void)registerReadOnlyEmojiInfoDict:(NSDictionary *)arg1;
- (SOJUFriendmoji *)registerEmoji:(NSString *)arg1 forOfficialUserWithId:(NSString *)arg2;
- (NSString *)emojiForFriendmojiType:(NSString *)arg1;
- (SOJUEmojiInfo *)emojiInfoForFriendmojiType:(NSString *)arg1;
@end

