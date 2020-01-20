//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapConfigurationListener.h"
#import "SCMapPersonLocationsListener.h"
#import "SCMapPersonLocationsProviding.h"
#import "SCMapViewportListener.h"
#import "SCXClustererDelegate.h"

@class NSDictionary, NSSet, NSString, SCMapPersonLocationsListenerAnnouncer, SCXClusterer;

@interface SCMapZoomAwarePersonLocationClustersProvider : NSObject <SCMapConfigurationListener, SCMapPersonLocationsListener, SCMapViewportListener, SCXClustererDelegate, SCMapPersonLocationsProviding>
{
    id <SCMapPersonLocationsProviding> _basePersonLocationClustersProvider;
    double _mapMaximumZoomLevel;
    id <SCMapViewport> _mapViewport;
    double _minimumBitmojiWidth;
    double _maximumBitmojiWidth;
    SCMapPersonLocationsListenerAnnouncer *_announcer;
    double _lastZoomLevel;
    NSSet *_originalPersonLocationClusters;
    NSDictionary *_personLocationClustersByUserId;
    NSDictionary *_personLocationsByUserId;
    SCXClusterer *_crowdClusterer;
    SCXClusterer *_overlapClusterer;
}

@property(retain, nonatomic) SCXClusterer *overlapClusterer; // @synthesize overlapClusterer=_overlapClusterer;
@property(retain, nonatomic) SCXClusterer *crowdClusterer; // @synthesize crowdClusterer=_crowdClusterer;
- (void).cxx_destruct;
- (void)_updateWithPersonLocationClusters:(id)arg1;
- (struct SCMapCoordinateBounds)_coordinateBoundsForCluster:(id)arg1;
- (id)_personLocationsForCrowdCluster:(id)arg1;
- (CDUnknownBlockType)_newOverlapClustererZoomLevelWhereSlippyDistanceMeets;
- (CDUnknownBlockType)_newCrowdClustererZoomLevelWhereSlippyDistanceMeets;
- (void)_updateClustersIfZoomLevelChanged;
- (void)clustererDidUpdateClusters:(id)arg1;
- (void)mapViewport:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewportIsChanging:(id)arg1;
- (void)mapConfigurationDidUpdate:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (id)allPersonLocationClusters;
- (id)allPersonLocations;
- (id)personLocationClusterForUserId:(id)arg1;
- (id)personLocationForUserId:(id)arg1;
- (id)announcer;
- (double)zoomLevelWithLeastOverlapForUserId:(id)arg1 mapViewSize:(struct CGSize)arg2;
- (void)setMinimumBitmojiWidth:(double)arg1 maximumBitmojiWidth:(double)arg2;
- (id)initWithBasePersonLocationClustersProvider:(id)arg1 mapConfiguration:(id)arg2 mapViewport:(id)arg3 minimumBitmojiWidth:(double)arg4 maximumBitmojiWidth:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

