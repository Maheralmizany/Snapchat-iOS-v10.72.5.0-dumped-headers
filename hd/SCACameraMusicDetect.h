//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraMusicDetect : SCAUserTrackedEvent
{
}

- (void)setSource:(long long)arg1;
- (void)setSongTitle:(id)arg1;
- (void)setLatency:(long long)arg1;
- (void)setHasGeolens:(_Bool)arg1;
- (void)setGenre:(id)arg1;
- (void)setFilterLensId:(id)arg1;
- (void)setCameraOrientation:(long long)arg1;
- (void)setArtistName:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

