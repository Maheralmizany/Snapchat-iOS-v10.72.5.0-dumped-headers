//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSMutableDictionary;

@interface SCRecentStickerHistory : NSObject <NSCoding>
{
    NSMutableArray *_recentlyUsedStickers;
    NSMutableDictionary *_recentlyUsedStickersFrequency;
    NSMutableArray *_recentlyUsedSearchTags;
}

+ (id)frequentStickers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recentlyUsedSearchTagsList;
- (void)clearRecentlyUsedSearchTags;
- (void)addRecentlyUsedSearchTags:(id)arg1;
- (void)_updateUnlockedstickers:(id)arg1;
- (void)_updateGeostickers:(id)arg1;
- (void)_updateBitmojiStickers:(id)arg1;
- (void)_updateCustomStickers:(id)arg1;
- (id)recentlyUsedStickerList:(id)arg1;
- (void)removeRecentlyUsedSticker:(id)arg1;
- (void)addRecentlyUsedSticker:(id)arg1;
- (long long)daysBetweenDate:(id)arg1 andDate:(id)arg2;
- (void)usageCountDecayFunction:(id)arg1;
- (id)init;

@end

