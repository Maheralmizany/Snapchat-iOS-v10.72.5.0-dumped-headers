//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAdInteractionProtocol.h"
#import "SCAdLongformInteractionProtocol.h"
#import "SCAdSnapTrackInfo.h"
#import "SCAdTopSnapInteractionProtocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString, SCAdInteractionTimer;

@interface SCAdSnapViewingStatus : NSObject <SCAdInteractionProtocol, SCAdTopSnapInteractionProtocol, SCAdLongformInteractionProtocol, SCAdSnapTrackInfo>
{
    long long _snapIndex;
    long long _adType;
    long long _topSnapMedia;
    NSString *_adKey;
    NSString *_skipEvent;
    unsigned long long _swipeCount;
    _Bool _isAudioOn;
    long long _topSnapMediaDurationMillis;
    long long _topSnapCappedMaxViewDurationMillis;
    long long _topSnapUnCappedMaxViewDurationMillis;
    long long _topSnapReportedMaxViewDurationMillis;
    long long _longformMediaDurationMillis;
    long long _longformReportedMaxViewDurationMillis;
    _Bool _loadedOnEntry;
    _Bool _loadedOnExit;
    double _visiblePageLoadTimeSeconds;
    double _halfOpenViewedSeconds;
    _Bool _isPixelCookieAvailable;
    NSNumber *_webViewInitialPageLoadStatusCode;
    _Bool _didCountSwipeUpForHalfOpenWebView;
    _Bool _deepLinkFellBackToWebview;
    _Bool _deepLinkFromCard;
    _Bool _deepLinkFellBackToAppStore;
    SCAdInteractionTimer *_longformTimeSpentTimer;
    _Bool _audibleOnLastChange;
    NSMutableArray *_audioQuadrantStateForMaxViewDurationSession;
    NSMutableArray *_maxMediaVolumeForMediaPlayback;
    double _currentMediaVolumePercent;
    double _startPlaybackTimestampForCurrentVolume;
    double _startPlaybackPercentForCurrentVolume;
    _Bool _topSnapActive;
    double _responseReceiveTimeInMillis;
    double _adFirstRenderTimestamp;
    long long _deltaInMillis;
    NSMutableArray *_collectionItemInteractions;
    double _currentTopSnapStartTimestamp;
    NSMutableArray *_audioQuadrantStateForCurrentSession;
}

@property(retain, nonatomic) NSMutableArray *audioQuadrantStateForCurrentSession; // @synthesize audioQuadrantStateForCurrentSession=_audioQuadrantStateForCurrentSession;
@property(nonatomic) double currentTopSnapStartTimestamp; // @synthesize currentTopSnapStartTimestamp=_currentTopSnapStartTimestamp;
- (void).cxx_destruct;
- (void)_updateVolume:(double)arg1 forIndex:(unsigned long long)arg2;
- (int)_getNextPlaybackIndexForPercent:(double)arg1;
- (void)_updateMediaVolumePercent:(double)arg1;
- (double)currentTimeInMillis;
- (long long)getTopSnapViewTimeMillis;
- (long long)getNextQuadrantIndexForTimestamp:(long long)arg1;
- (void)_stopTopSnapTimer;
- (void)_startTopSnapTimer:(double)arg1;
- (void)_setDefaultValue;
- (void)setDeepLinkFromCard:(_Bool)arg1 deepLinkFallBackToAppStore:(_Bool)arg2 deepLinkFallBackToWebview:(_Bool)arg3 interactionZoneItemIndex:(id)arg4;
- (void)setPixelCookieAvailability:(_Bool)arg1;
- (void)setLoadedOnEntry:(_Bool)arg1 loadedOnExit:(_Bool)arg2 visiblePageLoadTimeSeconds:(double)arg3 halfOpenViewedSeconds:(double)arg4 interactionZoneItemIndex:(id)arg5 initialPageStatusCode:(id)arg6;
- (void)setLongformMediaDurationMillis:(long long)arg1 longformMediaDurationMillis:(long long)arg2;
- (void)swipeUpToCard;
- (void)setTopSnapMediaDurationMillis:(long long)arg1 topSnapReportedViewDurationMillis:(long long)arg2 topSnapMedia:(long long)arg3;
- (void)resetForSwipeBackTracking;
- (void)adScreenshotTaken;
- (void)adLongPressed;
- (void)unobstructedOnTopSnap:(_Bool)arg1 currentMediaVolumePercent:(double)arg2;
- (void)obstructedOnTopSnap:(_Bool)arg1;
- (void)onAudibilityChange:(double)arg1;
- (void)swipedUpToVideoBoxHalfOpen;
- (void)swipedFromTopSnap:(_Bool)arg1 exitEvent:(id)arg2 currentMediaVolumePercent:(double)arg3;
- (void)adSnapHideOnTopSnap:(_Bool)arg1 skipEvent:(id)arg2;
- (void)adHideWithSkipEvent:(id)arg1;
- (void)adShowOnTopSnap:(_Bool)arg1 onBottomSnap:(_Bool)arg2 currentMediaVolumePercent:(double)arg3;
@property(readonly, nonatomic) NSArray *collectionItemInteractions;
@property(readonly, nonatomic) long long deepLinkFallBackToAppStoreCount;
@property(readonly, nonatomic) _Bool deepLinkFallBackToWebview;
@property(readonly, nonatomic) long long deepLinkFromCardCount;
@property(readonly, nonatomic) _Bool isPixelCookieAvailable;
@property(readonly, nonatomic) double halfOpenViewedSeconds;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds;
@property(readonly, copy, nonatomic) NSNumber *webViewInitialPageLoadStatusCode;
@property(readonly, nonatomic) _Bool loadedOnExit;
@property(readonly, nonatomic) _Bool loadedOnEntry;
@property(readonly, nonatomic) long long longformReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long longformMediaDurationMillis;
@property(readonly, nonatomic) double longformMaxViewedDurationInMillis;
@property(readonly, nonatomic) long long topSnapReportedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapUnCappedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapCappedMaxViewDurationMillis;
@property(readonly, nonatomic) long long topSnapTimeViewedMillis;
@property(readonly, nonatomic) long long topSnapMediaDurationMillis;
@property(readonly, nonatomic) long long topSnapMedia;
@property(readonly, nonatomic) NSArray *maxMediaVolumeForMediaPlayback;
@property(readonly, nonatomic) NSArray *audioQuadrantStates;
@property(readonly, nonatomic) _Bool isAudioOn;
@property(readonly, nonatomic) unsigned long long swipeCount;
@property(readonly, copy, nonatomic) NSString *skipEvent;
@property(readonly, nonatomic) long long adType;
@property(readonly, copy, nonatomic) NSString *adKey;
@property(readonly, nonatomic) long long snapIndex;
@property(readonly, nonatomic) double adFirstRenderTimestamp;
@property(readonly, nonatomic) long long deltaInMillis;
- (void)updateWithTopSnapMediaDurationInMillis:(long long)arg1 longformMediaDurationInMillis:(long long)arg2;
- (id)initWithAdType:(long long)arg1 adKey:(id)arg2 snapIndex:(long long)arg3 topSnapMediaDurationInMillis:(long long)arg4 responseReceiveTimeInMillis:(double)arg5 longformMediaDurationInMillis:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

