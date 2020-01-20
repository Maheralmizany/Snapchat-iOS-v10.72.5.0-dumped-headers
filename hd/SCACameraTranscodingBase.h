//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraTranscodingBase : SCAUserTrackedEvent
{
}

- (void)setTranscodingType:(id)arg1;
- (void)setTranscodingStatus:(long long)arg1;
- (void)setTranscodingContext:(long long)arg1;
- (void)setStartTime:(long long)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setOutputMediaMetadata:(id)arg1;
- (void)setNightModeState:(long long)arg1;
- (void)setMetricType:(id)arg1;
- (void)setMediaSource:(long long)arg1;
- (void)setMediaQualityLevel:(long long)arg1;
- (void)setMediaDestination:(long long)arg1;
- (void)setLowLightStatus:(long long)arg1;
- (void)setLightSensorValue:(double)arg1;
- (void)setLatencyMillis:(long long)arg1;
- (void)setKeyEventTimes:(id)arg1;
- (void)setInputMediaMetadata:(id)arg1;
- (void)setInputMediaMetaData:(id)arg1;
- (void)setFkMediaOrchestrationAttemptId:(id)arg1;
- (void)setErrorTag:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setEndTime:(long long)arg1;
- (void)setEndStatus:(id)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCallers:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

