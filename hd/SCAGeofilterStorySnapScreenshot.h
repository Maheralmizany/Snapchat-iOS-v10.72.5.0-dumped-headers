//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGeofilterStorySnapScreenshot : SCAUserTrackedEvent
{
}

- (void)setWithGallery:(_Bool)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setRollMinDegree:(double)arg1;
- (void)setRollMaxDegree:(double)arg1;
- (void)setPosterId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setLensOptionId:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setGeoFence:(id)arg1;
- (void)setFilterGeolensId:(id)arg1;
- (void)setFilterGeofilterId:(id)arg1;
- (void)setEncGeoData:(id)arg1;
- (void)setEncFilterGeolensId:(id)arg1;
- (void)setEncFilterGeofilterId:(id)arg1;
- (void)setCamera:(long long)arg1;
- (void)setAdsnapPlacementId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
