//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCStickerRankingFunctions : NSObject
{
}

+ (id)_sortStickers:(id)arg1 bitmojis:(id)arg2 numberOfBitmojisShown:(long long)arg3 numberOfStickersShown:(long long)arg4;
+ (void)_aggregateStickers:(id)arg1 bitmojis:(id)arg2 stickerCounters:(id)arg3 bitmojiCounters:(id)arg4 tagFrequency:(id)arg5 tag:(id)arg6;
+ (void)collectStickerFromSearcher:(id)arg1 fuzzyTags:(id)arg2 tagFrequency:(id)arg3 numberOfBitmojisShown:(long long)arg4 numberOfStickersShown:(long long)arg5 rankingMethod:(long long)arg6 shouldIncludeFriendBitmoji:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
+ (id)gregorianCalendar;

@end

