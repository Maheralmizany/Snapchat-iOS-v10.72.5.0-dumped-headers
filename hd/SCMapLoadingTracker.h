//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCMapBasePersonLocationsProvider, SCXBitmojiLayer, SCXRenderLayer;

@interface SCMapLoadingTracker : NSObject
{
    NSString *_userId;
    id <SCMapLoadingTrackerDelegate> _delegate;
    SCXRenderLayer *_mapRenderLayer;
    SCXBitmojiLayer *_bitmojiLayer;
    SCMapBasePersonLocationsProvider *_mapBasePersonLocationsProvider;
    double _loadStartTime;
    _Bool _startedTimeoutCountdown;
    double _mapTilesLoadTime;
    double _allBitmojisLoadTime;
    double _ownBitmojiLoadTime;
    double _contentTilesLoadTime;
    double _allStoryThumbnailsLoadTime;
    _Bool _isFullyLoaded;
    _Bool _isLoadedEnoughForDisplay;
    _Bool _didTimeOut;
}

@property(readonly, nonatomic) _Bool didTimeOut; // @synthesize didTimeOut=_didTimeOut;
@property(readonly, nonatomic) _Bool isLoadedEnoughForDisplay; // @synthesize isLoadedEnoughForDisplay=_isLoadedEnoughForDisplay;
@property(readonly, nonatomic) _Bool isFullyLoaded; // @synthesize isFullyLoaded=_isFullyLoaded;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool allStoryThumbnailsLoaded;
@property(readonly, nonatomic) _Bool contentTilesLoaded;
@property(readonly, nonatomic) _Bool ownBitmojiLoaded;
@property(readonly, nonatomic) _Bool allBitmojisLoaded;
@property(readonly, nonatomic) _Bool mapTilesLoaded;
@property(readonly, nonatomic) double timeToLoadAllStoryThumbnails;
@property(readonly, nonatomic) double timeToLoadContentTiles;
@property(readonly, nonatomic) double timeToLoadOwnBitmoji;
@property(readonly, nonatomic) double timeToLoadAllBitmojis;
@property(readonly, nonatomic) double timeToLoadMapTiles;
- (void)_timedOut;
- (void)_checkOverallLoadState;
- (_Bool)_isSnapMapLoaded;
- (void)_allStoryThumbnailsDidLoad;
- (void)_contentTilesDidLoad;
- (void)_ownBitmojiDidLoad;
- (void)_allBitmojisDidLoad;
- (void)updateSnapMapLoadingState;
- (void)didLoadMapboxTiles;
- (void)startTimeoutCountdown;
- (id)initWithUserId:(id)arg1 delegate:(id)arg2 renderLayer:(id)arg3 bitmojiLayer:(id)arg4 mapBasePersonLocationsProvider:(id)arg5;

@end

