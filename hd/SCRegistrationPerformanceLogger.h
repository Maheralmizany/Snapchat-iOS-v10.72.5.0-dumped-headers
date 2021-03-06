//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCRegistrationPerformanceLogger : NSObject
{
    NSString *_lastActionBeforeRegistrationCompleted;
    long long _lastActionTimestampBeforeRegistrationCompleted;
    long long _lastActionPageBeforeRegistrationCompleted;
    _Bool _didLogCameraStartupTimeFromReg;
    _Bool _didLogFriendsFeedPageStartupTimeFromReg;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool didLogFriendsFeedPageStartupTimeFromReg; // @synthesize didLogFriendsFeedPageStartupTimeFromReg=_didLogFriendsFeedPageStartupTimeFromReg;
@property(nonatomic) _Bool didLogCameraStartupTimeFromReg; // @synthesize didLogCameraStartupTimeFromReg=_didLogCameraStartupTimeFromReg;
- (void).cxx_destruct;
- (id)_newDeviceDimensionValue;
- (void)_logGrapheneEventWithTransitionTimeMs:(long long)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)_logRegistrationPerformanceEvent:(id)arg1;
- (id)_getRegistrationMetadata;
- (void)startTrackingCameraTimer:(id)arg1 page:(long long)arg2;
- (void)logFriendsFeedTimeIfFromRegistration:(long long)arg1;
- (void)logCameraStartupTimeIfFromRegistration:(long long)arg1;

@end

