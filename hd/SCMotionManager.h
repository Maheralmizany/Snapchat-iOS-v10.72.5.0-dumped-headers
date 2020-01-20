//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADisplayLink, CMMotionManager, SCMotionManagerListenerAnnouncer, SCMotionResponseCurve;

@interface SCMotionManager : NSObject
{
    CMMotionManager *_manager;
    SCMotionManagerListenerAnnouncer *_announcer;
    long long _numberOfListeners;
    _Bool _stopped;
    double _rawRotationX;
    double _rawRotationY;
    double _rawRotationZ;
    double _rotation;
    double _gravity;
    struct CGVector _translationVector;
    SCMotionResponseCurve *_panX;
    SCMotionResponseCurve *_panY;
    CADisplayLink *_displayLink;
}

+ (double)normalizeAngle:(double)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_stopMotionUpdates;
- (void)_startMotionUpdates;
- (void)_updateMotion;
- (double)gravity;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

@end
