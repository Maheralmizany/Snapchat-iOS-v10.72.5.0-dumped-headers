//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCChatStickerUsageManager : NSObject
{
}

+ (id)_buildUseHistoryWithStickerInfo:(id)arg1;
+ (id)_buildUsageHistoryStickerWithStickerInfo:(id)arg1;
+ (struct NSDictionary *)generateHistoryWithFavorites:(id)arg1;
+ (struct NSDictionary *)removeBitmojisFromUsageHistory:(struct NSDictionary *)arg1;
+ (struct NSDictionary *)updatedUsageHistory:(struct NSDictionary *)arg1 withSticker:(id)arg2 maxCapacity:(long long)arg3;
+ (struct NSDictionary *)updatedUsageHistory:(struct NSDictionary *)arg1 withSticker:(id)arg2;

@end
