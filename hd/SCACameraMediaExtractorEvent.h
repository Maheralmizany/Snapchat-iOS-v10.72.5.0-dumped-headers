//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraMediaExtractorEvent : SCAUserTrackedEvent
{
}

- (void)setMediaExtractorUseCase:(long long)arg1;
- (void)setMediaExtractorType:(id)arg1;
- (void)setMediaExtractorTrack:(id)arg1;
- (void)setMediaExtractorStatus:(long long)arg1;
- (void)setMediaExtractorMessage:(id)arg1;
- (void)setIsDefaultExtractor:(_Bool)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

