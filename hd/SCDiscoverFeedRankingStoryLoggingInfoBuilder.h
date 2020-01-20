//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCDiscoverFeedCompositeStoryId;

@interface SCDiscoverFeedRankingStoryLoggingInfoBuilder : NSObject
{
    SCDiscoverFeedCompositeStoryId *_compositeStoryId;
    unsigned long long _storyDedupeFp;
    unsigned long long _storyKey;
    long long _storyType;
    NSString *_streamId;
    NSString *_variantId;
    long long _itemPosInRecommendationResponse;
    NSString *_actionAttachedInfo;
    NSString *_impressionAttachedInfo;
    NSString *_viewingSessionAttachedInfo;
    _Bool _isSubscribed;
    _Bool _isPromoted;
    _Bool _isExplorationStory;
    long long _ihAllowanceType;
}

+ (id)discoverFeedRankingStoryLoggingInfoFromExistingDiscoverFeedRankingStoryLoggingInfo:(id)arg1;
+ (id)discoverFeedRankingStoryLoggingInfo;
- (void).cxx_destruct;
- (id)withIhAllowanceType:(long long)arg1;
- (id)withIsExplorationStory:(_Bool)arg1;
- (id)withIsPromoted:(_Bool)arg1;
- (id)withIsSubscribed:(_Bool)arg1;
- (id)withViewingSessionAttachedInfo:(id)arg1;
- (id)withImpressionAttachedInfo:(id)arg1;
- (id)withActionAttachedInfo:(id)arg1;
- (id)withItemPosInRecommendationResponse:(long long)arg1;
- (id)withVariantId:(id)arg1;
- (id)withStreamId:(id)arg1;
- (id)withStoryType:(long long)arg1;
- (id)withStoryKey:(unsigned long long)arg1;
- (id)withStoryDedupeFp:(unsigned long long)arg1;
- (id)withCompositeStoryId:(id)arg1;
- (id)build;

@end
