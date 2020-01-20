//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAStoryStoryViewBase : SCAUserTrackedEvent
{
}

- (void)setViewSource:(long long)arg1;
- (void)setViewLocationPos:(long long)arg1;
- (void)setViewLocation:(long long)arg1;
- (void)setTimeViewed:(double)arg1;
- (void)setSubpageName:(id)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStorySessionId:(long long)arg1;
- (void)setStoryId:(id)arg1;
- (void)setSponsor:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSnapTime:(double)arg1;
- (void)setSnapIndexCount:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setPosterId:(id)arg1;
- (void)setPlaylistIndex:(long long)arg1;
- (void)setNumSnapsViewed:(long long)arg1;
- (void)setNumSnapsUniqueViewed:(long long)arg1;
- (void)setNumLongformViewed:(long long)arg1;
- (void)setMapZoomLevel:(double)arg1;
- (void)setMapStoryType:(long long)arg1;
- (void)setMapSourceType:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setIsPostable:(_Bool)arg1;
- (void)setHydraResultId:(id)arg1;
- (void)setGroupStoryId:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setGhost_cell_id:(id)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setFullView:(_Bool)arg1;
- (void)setFriendLinkHop:(long long)arg1;
- (void)setExplorerSwipeCount:(long long)arg1;
- (void)setExplorerSnapCount:(long long)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setDistanceFromUserMeter:(double)arg1;
- (void)setDistanceFromFriendMinMeter:(double)arg1;
- (void)setDeepLinkId:(id)arg1;
- (void)setCreatorId:(id)arg1;
- (void)setCellId:(id)arg1;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
