//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnlockableTrackerBase.h"

@class NSString;

@interface SCUnlockableViewTracker : SCUnlockableTrackerBase
{
    _Bool _canFire;
    NSString *_url;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)_getProtoSnapViewType:(long long)arg1;
- (id)_createProtoTrackWithDuration:(id)arg1 mediaDurationSec:(id)arg2 encGeoData:(id)arg3 unlockablesSnapInfo:(id)arg4 viewType:(long long)arg5 snappableInviteAction:(long long)arg6 sojuDeviceInfo:(id)arg7;
- (void)fireTrackWithDuration:(id)arg1 mediaDurationSec:(id)arg2 encGeoData:(id)arg3 unlockablesSnapInfo:(id)arg4 viewType:(long long)arg5 userSession:(id)arg6 snappableInviteAction:(long long)arg7;
- (id)init;

@end
