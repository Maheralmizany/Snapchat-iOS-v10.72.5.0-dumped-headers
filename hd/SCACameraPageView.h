//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraPageView : SCAUserTrackedEvent
{
}

- (void)setWithGeolocation:(_Bool)arg1;
- (void)setWithFilterLensSwipe:(_Bool)arg1;
- (void)setViewTimeSec:(double)arg1;
- (void)setPageName:(long long)arg1;
- (void)setFilterLensStoreCount:(long long)arg1;
- (void)setFilterLensCount:(long long)arg1;
- (void)setFilterGeolensCount:(long long)arg1;
- (void)setFilterGeofilterCount:(long long)arg1;
- (void)setExitEvent:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

