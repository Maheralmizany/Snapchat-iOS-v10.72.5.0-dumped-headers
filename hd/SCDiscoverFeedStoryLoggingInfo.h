//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSNumber, NSString, SCDiscoverFeedRankingStoryLoggingInfo;

@interface SCDiscoverFeedStoryLoggingInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isFullyViewed;
    _Bool _isUpNextRecommendedStory;
    NSString *_itemId;
    long long _itemType;
    NSString *_itemTypeSpecific;
    long long _itemLayout;
    NSString *_tileId;
    NSArray *_snapInfo;
    long long _totalNumSnaps;
    NSNumber *_itemPos;
    SCDiscoverFeedRankingStoryLoggingInfo *_rankingStoryInfo;
    NSString *_triggeringItemId;
}

@property(readonly, copy, nonatomic) NSString *triggeringItemId; // @synthesize triggeringItemId=_triggeringItemId;
@property(readonly, nonatomic) _Bool isUpNextRecommendedStory; // @synthesize isUpNextRecommendedStory=_isUpNextRecommendedStory;
@property(readonly, copy, nonatomic) SCDiscoverFeedRankingStoryLoggingInfo *rankingStoryInfo; // @synthesize rankingStoryInfo=_rankingStoryInfo;
@property(readonly, copy, nonatomic) NSNumber *itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, nonatomic) long long totalNumSnaps; // @synthesize totalNumSnaps=_totalNumSnaps;
@property(readonly, copy, nonatomic) NSArray *snapInfo; // @synthesize snapInfo=_snapInfo;
@property(readonly, copy, nonatomic) NSString *tileId; // @synthesize tileId=_tileId;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, nonatomic) long long itemLayout; // @synthesize itemLayout=_itemLayout;
@property(readonly, copy, nonatomic) NSString *itemTypeSpecific; // @synthesize itemTypeSpecific=_itemTypeSpecific;
@property(readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(readonly, copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemId:(id)arg1 itemType:(long long)arg2 itemTypeSpecific:(id)arg3 itemLayout:(long long)arg4 isFullyViewed:(_Bool)arg5 tileId:(id)arg6 snapInfo:(id)arg7 totalNumSnaps:(long long)arg8 itemPos:(id)arg9 rankingStoryInfo:(id)arg10 isUpNextRecommendedStory:(_Bool)arg11 triggeringItemId:(id)arg12;
- (id)initWithCoder:(id)arg1;

@end
