//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAOperaSnapPlayback : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setViewTimeMs:(long long)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setStalledOnStart:(_Bool)arg1;
- (void)setStalledOnExit:(_Bool)arg1;
- (void)setStallInfo:(id)arg1;
- (void)setStallDurationOnStartMs:(long long)arg1;
- (void)setSnapViewIndex:(long long)arg1;
- (void)setProductMediaType:(long long)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaybackItemType:(long long)arg1;
- (void)setPlaybackEvents:(id)arg1;
- (void)setOperaVersion:(long long)arg1;
- (void)setOperaStalls:(id)arg1;
- (void)setOperaSessionId:(id)arg1;
- (void)setMidPlaybackStallDurationTotalMs:(long long)arg1;
- (void)setMidPlaybackStallCount:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaPlaybackSessionId:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaGroupId:(id)arg1;
- (void)setMediaEncodingVariant:(id)arg1;
- (void)setMediaEncoding:(id)arg1;
- (void)setMediaDurationMs:(long long)arg1;
- (void)setLongformVideo:(_Bool)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setDroppedFrameCount:(long long)arg1;
- (void)setContentType:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
