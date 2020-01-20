//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCDiscoverFeedStoryLoggingInfo;

@interface SCDiscoverFeedLoggingViewingSessionData : NSObject <NSCopying>
{
    _Bool _isSubitemViewingSession;
    NSDate *_currentStoryStartViewTimestamp;
    NSMutableSet *_uniqueViewedSubitemIds;
    NSDate *_currentlyPlayingMediaStartTime;
    NSDate *_currentlyViewingStartTime;
    NSMutableSet *_skippedSubitemIds;
    NSMutableDictionary *_subitemIdToIndex;
    _Bool _enableTotalNumSnapsFromStoryLoggingInfo;
    _Bool _isFullyViewed;
    NSString *_identifier;
    SCDiscoverFeedStoryLoggingInfo *_storyLoggingInfo;
    unsigned long long _rerankingId;
    long long _itemPos;
    long long _itemSource;
    long long _entryEvent;
    NSDate *_viewSessionStartTime;
    double _mediaViewTime;
    double _totalViewTime;
    NSString *_subitemId;
    NSString *_pageId;
    unsigned long long _numberOfSnapsViewed;
    long long _maxSubitemViewIndex;
    NSString *_maxSubitemIdView;
    NSDictionary *_fieldsOverrideDict;
    NSString *_section;
    NSString *_triggeringItemId;
    long long _triggeringItemPlaylistOffset;
}

@property(nonatomic) long long triggeringItemPlaylistOffset; // @synthesize triggeringItemPlaylistOffset=_triggeringItemPlaylistOffset;
@property(copy, nonatomic) NSString *triggeringItemId; // @synthesize triggeringItemId=_triggeringItemId;
@property(readonly, nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
@property(readonly, nonatomic) NSDictionary *fieldsOverrideDict; // @synthesize fieldsOverrideDict=_fieldsOverrideDict;
@property(readonly, nonatomic) NSString *maxSubitemIdView; // @synthesize maxSubitemIdView=_maxSubitemIdView;
@property(readonly, nonatomic) long long maxSubitemViewIndex; // @synthesize maxSubitemViewIndex=_maxSubitemViewIndex;
@property(readonly, nonatomic) unsigned long long numberOfSnapsViewed; // @synthesize numberOfSnapsViewed=_numberOfSnapsViewed;
@property(readonly, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(readonly, nonatomic) NSString *subitemId; // @synthesize subitemId=_subitemId;
@property(readonly, nonatomic) double totalViewTime; // @synthesize totalViewTime=_totalViewTime;
@property(readonly, nonatomic) double mediaViewTime; // @synthesize mediaViewTime=_mediaViewTime;
@property(readonly, nonatomic) NSDate *viewSessionStartTime; // @synthesize viewSessionStartTime=_viewSessionStartTime;
@property(readonly, nonatomic) long long entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) long long itemSource; // @synthesize itemSource=_itemSource;
@property(readonly, nonatomic) long long itemPos; // @synthesize itemPos=_itemPos;
@property(readonly, nonatomic) unsigned long long rerankingId; // @synthesize rerankingId=_rerankingId;
@property(readonly, nonatomic) SCDiscoverFeedStoryLoggingInfo *storyLoggingInfo; // @synthesize storyLoggingInfo=_storyLoggingInfo;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)updateTriggeringItemId:(id)arg1;
- (void)_updateSubitemArrayWithStoryLoggingInfo:(id)arg1;
- (void)updateStoryLoggingInfo:(id)arg1;
- (long long)itemType;
- (unsigned long long)adjustedSnapIndexForSubitemId:(id)arg1;
- (unsigned long long)numberOfSnapsAvailable;
- (_Bool)updateSkippedSubitemId:(id)arg1;
- (void)resetAfterLoadingFromSavedCopyWithTime:(id)arg1;
- (double)getTotalMediaDurationSecs;
- (unsigned long long)numberOfUniqueSubitemsViewed;
- (void)subItemDidEndViewingAtTime:(id)arg1;
- (void)mediaStartedPlayingAtTime:(id)arg1;
- (void)startedViewingAtTime:(id)arg1;
- (void)viewingSubitemWithId:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 storyLoggingInfo:(id)arg2 rerankingId:(unsigned long long)arg3 itemPos:(long long)arg4 itemSource:(long long)arg5 subitemId:(id)arg6 pageId:(id)arg7 entryEvent:(long long)arg8 viewSessionStartTime:(id)arg9 triggeringItemId:(id)arg10 triggeringItemPlaylistOffset:(long long)arg11 section:(id)arg12 isFullyViewed:(_Bool)arg13 fieldsOverrideDict:(id)arg14 enableTotalNumSnapsProperty:(_Bool)arg15;

@end

