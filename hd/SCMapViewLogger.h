//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapPersonLocationsListener.h"

@class NSMutableSet, NSString, SCMapGestureLogger, SCMapLoggerSession, SCStopwatch, SCXBitmojiLayer, SCXRenderLayer;

@interface SCMapViewLogger : NSObject <SCMapPersonLocationsListener>
{
    NSString *_currentUserId;
    id <SCMapViewLoggerTooltipState> _mapViewLoggerTooltipStateProvider;
    NSString *_mapPageViewName;
    SCMapGestureLogger *_gestureLogger;
    id <SCMapPeopleFriendsProvider> _mapPeopleProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    id <SCMapStatusViewedStateProvider> _mapStatusViewedStateProvider;
    id <SCMapViewport> _mapViewport;
    id <SCPageViewLogging> _pageViewLogger;
    id <SCCurrentPageTracker> _currentPageTracker;
    SCStopwatch *_stopwatch;
    _Bool _inMap;
    SCMapLoggerSession *_session;
    SCXBitmojiLayer *_bitmojiLayer;
    SCXRenderLayer *_renderLayer;
    NSMutableSet *_seenFriendUserIds;
    NSMutableSet *_seenBestFriendUserIds;
    unsigned long long _maxFriendsInViewport;
    NSMutableSet *_seenPoiIds;
    NSMutableSet *_seenStatusIds;
    unsigned long long _maxStatusesInViewport;
    NSMutableSet *_highlightedUniqueFriendUserIds;
    NSMutableSet *_highlightedBestFriendUserIds;
    NSMutableSet *_highlightedUniqueClusterIds;
    unsigned long long _clustersInHighlightZoneCount;
    unsigned long long _clustersHighlightedCount;
}

@property(readonly, nonatomic) unsigned long long clustersHighlightedCount; // @synthesize clustersHighlightedCount=_clustersHighlightedCount;
@property(readonly, nonatomic) unsigned long long clustersInHighlightZoneCount; // @synthesize clustersInHighlightZoneCount=_clustersInHighlightZoneCount;
@property(readonly, nonatomic) NSMutableSet *highlightedUniqueClusterIds; // @synthesize highlightedUniqueClusterIds=_highlightedUniqueClusterIds;
@property(readonly, nonatomic) NSMutableSet *highlightedBestFriendUserIds; // @synthesize highlightedBestFriendUserIds=_highlightedBestFriendUserIds;
@property(readonly, nonatomic) NSMutableSet *highlightedUniqueFriendUserIds; // @synthesize highlightedUniqueFriendUserIds=_highlightedUniqueFriendUserIds;
@property(readonly, nonatomic) unsigned long long maxStatusesInViewport; // @synthesize maxStatusesInViewport=_maxStatusesInViewport;
@property(readonly, nonatomic) NSMutableSet *seenStatusIds; // @synthesize seenStatusIds=_seenStatusIds;
@property(readonly, nonatomic) NSMutableSet *seenPoiIds; // @synthesize seenPoiIds=_seenPoiIds;
@property(readonly, nonatomic) unsigned long long maxFriendsInViewport; // @synthesize maxFriendsInViewport=_maxFriendsInViewport;
@property(readonly, nonatomic) NSMutableSet *seenBestFriendUserIds; // @synthesize seenBestFriendUserIds=_seenBestFriendUserIds;
@property(readonly, nonatomic) NSMutableSet *seenFriendUserIds; // @synthesize seenFriendUserIds=_seenFriendUserIds;
@property(nonatomic) _Bool inMap; // @synthesize inMap=_inMap;
@property(readonly, nonatomic) __weak SCXRenderLayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(readonly, nonatomic) __weak SCXBitmojiLayer *bitmojiLayer; // @synthesize bitmojiLayer=_bitmojiLayer;
@property(nonatomic) __weak SCMapLoggerSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)personLocationsProviderDidUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_bestFriendsOnMap;
- (id)_friendsOnMap;
- (id)_friendsInViewport;
- (void)_updateStatusesInViewportStatistics;
- (void)_updatePoisInViewportStatistics;
- (void)_updateHighlightedFriendsStatistics;
- (void)_updateFriendsInViewportStatistics;
- (void)_stopSnapchatSessionLoggingWithCloseType:(long long)arg1;
- (void)_startSnapchatSessionLogging;
- (void)_onMapExitedWithCloseType:(long long)arg1;
- (void)_onMapEnteredWithOpenType:(long long)arg1 source:(long long)arg2;
- (void)didShowGameStartDialog;
- (void)didTapToOpenLeaderboard;
- (void)didFinishFirstMapLoad:(id)arg1;
- (void)exploreDidScreenshotItem:(id)arg1;
- (void)exploreButtonDidAppearWithCount:(unsigned long long)arg1 announcementId:(id)arg2;
- (void)userDidTakeScreenshotWithAction:(long long)arg1;
- (void)didTapOnCompassButton;
- (void)viewedPersonCluster:(id)arg1 highlighted:(_Bool)arg2 source:(long long)arg3 actionType:(long long)arg4;
- (void)regionDidChange;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActiveWithSource:(long long)arg1;
- (void)viewDidDisappearWithCloseType:(long long)arg1;
- (void)onboardingViewDidAppearWithOpenType:(long long)arg1 source:(long long)arg2;
- (void)viewDidAppearWithOpenType:(long long)arg1 source:(long long)arg2;
- (id)initWithCurrentUserId:(id)arg1 mapViewLoggerTooltipStateProvider:(id)arg2 mapGestureLogger:(id)arg3 mapLoggerSession:(id)arg4 mapPageViewName:(id)arg5 mapPeopleProvider:(id)arg6 mapPersonLocationsProvider:(id)arg7 mapStatusViewedStateProvider:(id)arg8 mapViewport:(id)arg9 renderLayer:(id)arg10 bitmojiLayer:(id)arg11 pageViewLogger:(id)arg12 currentPageTracker:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
