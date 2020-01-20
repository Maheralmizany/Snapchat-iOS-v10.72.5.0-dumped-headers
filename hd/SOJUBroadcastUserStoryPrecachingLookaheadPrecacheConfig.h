//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig.h"

@class NSString, SOJUBroadcastUserStoryPrecachingPrecacheCounts;

@interface SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig : NSObject <SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig>
{
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_tapToLoadCounts;
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_inlineForwardPrecacheCounts;
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_numStoriesAlwaysPrecached;
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_numSnapsPerStoryAlwaysPrecached;
    NSString *_order;
    SOJUBroadcastUserStoryPrecachingPrecacheCounts *_numSnapsToLoadBeforeAllowViewing;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *numSnapsToLoadBeforeAllowViewing; // @synthesize numSnapsToLoadBeforeAllowViewing=_numSnapsToLoadBeforeAllowViewing;
@property(readonly, copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *numSnapsPerStoryAlwaysPrecached; // @synthesize numSnapsPerStoryAlwaysPrecached=_numSnapsPerStoryAlwaysPrecached;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *numStoriesAlwaysPrecached; // @synthesize numStoriesAlwaysPrecached=_numStoriesAlwaysPrecached;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *inlineForwardPrecacheCounts; // @synthesize inlineForwardPrecacheCounts=_inlineForwardPrecacheCounts;
@property(readonly, copy, nonatomic) SOJUBroadcastUserStoryPrecachingPrecacheCounts *tapToLoadCounts; // @synthesize tapToLoadCounts=_tapToLoadCounts;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTapToLoadCounts:(id)arg1 inlineForwardPrecacheCounts:(id)arg2 numStoriesAlwaysPrecached:(id)arg3 numSnapsPerStoryAlwaysPrecached:(id)arg4 order:(id)arg5 numSnapsToLoadBeforeAllowViewing:(id)arg6;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)orderEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

