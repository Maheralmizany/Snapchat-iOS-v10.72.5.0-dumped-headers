//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAUnifiedCameraAction : SCAUserTrackedEvent
{
}

- (void)setY:(long long)arg1;
- (void)setX:(long long)arg1;
- (void)setVersion:(id)arg1;
- (void)setUserActionTimestamp:(long long)arg1;
- (void)setUiFrameStats:(id)arg1;
- (void)setTarget:(long long)arg1;
- (void)setSwipePositions:(id)arg1;
- (void)setScreenWidth:(long long)arg1;
- (void)setScreenHeight:(long long)arg1;
- (void)setLastResponseTimestamp:(long long)arg1;
- (void)setFirstResponseTimestamp:(long long)arg1;
- (void)setCameraType:(id)arg1;
- (void)setCameraStateTransition:(id)arg1;
- (void)setCameraFrameStats:(id)arg1;
- (void)setAction:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

