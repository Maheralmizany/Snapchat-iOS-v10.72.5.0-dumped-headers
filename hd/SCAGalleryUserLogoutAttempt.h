//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGalleryUserLogoutAttempt : SCAUserTrackedEvent
{
}

- (void)setSnapPendingCount:(long long)arg1;
- (void)setSnapDeleteCount:(long long)arg1;
- (void)setIsUserInitiated:(_Bool)arg1;
- (void)setActionTaken:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

