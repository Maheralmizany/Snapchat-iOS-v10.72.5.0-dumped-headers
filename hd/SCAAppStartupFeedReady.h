//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppStartupFeedReady : SCAUserTrackedEvent
{
}

- (void)setWithUserInFeed:(_Bool)arg1;
- (void)setWithTriggeredByNotification:(_Bool)arg1;
- (void)setWithResultSuccessful:(_Bool)arg1;
- (void)setWithDiskEncrypted:(_Bool)arg1;
- (void)setTimeSpentWaitingMs:(long long)arg1;
- (void)setTimeSinceAppStartMs:(long long)arg1;
- (void)setSplits:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setPerformanceMode:(id)arg1;
- (void)setNotificationType:(id)arg1;
- (void)setLatencyMillis:(long long)arg1;
- (void)setHasFeedItemsChanged:(_Bool)arg1;
- (void)setFailureReason:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
