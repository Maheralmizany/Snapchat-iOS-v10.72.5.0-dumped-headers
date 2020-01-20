//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCALoadMessage : SCAUserTrackedEvent
{
}

- (void)setUserPresentStartTimestamp:(long long)arg1;
- (void)setStepLatenciesMs:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setMediaSizeBytes:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setLoadMessageUserPresentTotalLatencyMs:(long long)arg1;
- (void)setLoadMessageStatus:(long long)arg1;
- (void)setLoadMessageStartTimestamp:(long long)arg1;
- (void)setLoadMessageEndTimestamp:(long long)arg1;
- (void)setLoadMessageAttemptType:(long long)arg1;
- (void)setLoadMessageAttemptId:(id)arg1;
- (void)setLensSizeBytes:(long long)arg1;
- (void)setIsGroupConversation:(_Bool)arg1;
- (void)setFailedStep:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
