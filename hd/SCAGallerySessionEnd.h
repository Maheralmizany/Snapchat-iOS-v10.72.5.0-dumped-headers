//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGallerySessionEnd : SCAUserTrackedEvent
{
}

- (void)setViewTimeSec:(double)arg1;
- (void)setStoryUnlockCount:(long long)arg1;
- (void)setStorySendCount:(long long)arg1;
- (void)setStoryPostCount:(long long)arg1;
- (void)setStoryLockCount:(long long)arg1;
- (void)setStoryDeleteCount:(long long)arg1;
- (void)setStoryCreateCount:(long long)arg1;
- (void)setStoriesTabLoadLatencyMs:(long long)arg1;
- (void)setSnapUnlockCount:(long long)arg1;
- (void)setSnapSendCount:(long long)arg1;
- (void)setSnapPostCount:(long long)arg1;
- (void)setSnapLockCount:(long long)arg1;
- (void)setSnapDeleteCount:(long long)arg1;
- (void)setSnapCreateCount:(long long)arg1;
- (void)setRecentlyTakenSnapSendCount:(long long)arg1;
- (void)setRecentlyTakenDisplayedContentCount:(long long)arg1;
- (void)setRecentlyTakenCameraRollLoadLatencyMs:(long long)arg1;
- (void)setOpenSource:(long long)arg1;
- (void)setNearbyCount:(long long)arg1;
- (void)setMemoriesAllTabLoadLatencyMs:(long long)arg1;
- (void)setGallerySearchCount:(long long)arg1;
- (void)setFlashbackCount:(long long)arg1;
- (void)setCameraRollTabLoadLatencyMs:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

