//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCDiscoverFeedStoryIHEventFloat, SCDiscoverFeedStoryIHEventInteger;

@interface SCDiscoverFeedStoryIHViewInfo : NSObject <NSCopying>
{
    unsigned int _totalWatchTimeOnLatestVersion;
    unsigned int _numSnapsViewedFromLatestVersion;
    unsigned int _entryEvent;
    unsigned int _exitEvent;
    SCDiscoverFeedStoryIHEventFloat *_shortViewScore;
    SCDiscoverFeedStoryIHEventFloat *_longViewScore;
    NSString *_longViewThumbnailId;
    SCDiscoverFeedStoryIHEventInteger *_numberOfWatches;
    SCDiscoverFeedStoryIHEventInteger *_snapCompletionPercent;
    SCDiscoverFeedStoryIHEventFloat *_decayedNumSnapsViewed;
    SCDiscoverFeedStoryIHEventFloat *_decayedTotalWatchTime;
    unsigned long long _latestWatchedVersion;
}

@property(readonly, nonatomic) unsigned long long latestWatchedVersion; // @synthesize latestWatchedVersion=_latestWatchedVersion;
@property(readonly, nonatomic) unsigned int exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly, nonatomic) unsigned int entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryIHEventFloat *decayedTotalWatchTime; // @synthesize decayedTotalWatchTime=_decayedTotalWatchTime;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryIHEventFloat *decayedNumSnapsViewed; // @synthesize decayedNumSnapsViewed=_decayedNumSnapsViewed;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryIHEventInteger *snapCompletionPercent; // @synthesize snapCompletionPercent=_snapCompletionPercent;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryIHEventInteger *numberOfWatches; // @synthesize numberOfWatches=_numberOfWatches;
@property(readonly, nonatomic) unsigned int numSnapsViewedFromLatestVersion; // @synthesize numSnapsViewedFromLatestVersion=_numSnapsViewedFromLatestVersion;
@property(readonly, nonatomic) unsigned int totalWatchTimeOnLatestVersion; // @synthesize totalWatchTimeOnLatestVersion=_totalWatchTimeOnLatestVersion;
@property(readonly, copy, nonatomic) NSString *longViewThumbnailId; // @synthesize longViewThumbnailId=_longViewThumbnailId;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryIHEventFloat *longViewScore; // @synthesize longViewScore=_longViewScore;
@property(readonly, copy, nonatomic) SCDiscoverFeedStoryIHEventFloat *shortViewScore; // @synthesize shortViewScore=_shortViewScore;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShortViewScore:(id)arg1 longViewScore:(id)arg2 longViewThumbnailId:(id)arg3 totalWatchTimeOnLatestVersion:(unsigned int)arg4 numSnapsViewedFromLatestVersion:(unsigned int)arg5 numberOfWatches:(id)arg6 snapCompletionPercent:(id)arg7 decayedNumSnapsViewed:(id)arg8 decayedTotalWatchTime:(id)arg9 entryEvent:(unsigned int)arg10 exitEvent:(unsigned int)arg11 latestWatchedVersion:(unsigned long long)arg12;

@end

