//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChatStickerSearchResultsFilterer : NSObject
{
}

+ (id)emojiBlackList;
+ (id)symbolsWhiteList;
+ (_Bool)set:(id)arg1 containsEmoji:(id)arg2;
+ (id)filter:(id)arg1 searchTerm:(id)arg2 maxResults:(long long)arg3 avatarId:(id)arg4 friendAvatarId:(id)arg5 targetType:(id)arg6;

@end
