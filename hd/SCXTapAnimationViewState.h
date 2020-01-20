//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCXAnimation;

@interface SCXTapAnimationViewState : NSObject
{
    float _totalRadius;
    float _overallOpacity;
    int _pulsesPerInterval;
    NSString *_uuid;
    double _startTime;
    CDUnknownBlockType _scaleInterpolation;
    CDUnknownBlockType _opacityInterpolation;
    SCXAnimation *_overallOpacityAnimation;
    double _pulseInterval;
    double _circleGenInterval;
    double _circleLifetime;
    SCXAnimation *_shrinkAnimation;
    struct CLLocationCoordinate2D _coord;
}

@property(retain) SCXAnimation *shrinkAnimation; // @synthesize shrinkAnimation=_shrinkAnimation;
@property double circleLifetime; // @synthesize circleLifetime=_circleLifetime;
@property double circleGenInterval; // @synthesize circleGenInterval=_circleGenInterval;
@property int pulsesPerInterval; // @synthesize pulsesPerInterval=_pulsesPerInterval;
@property double pulseInterval; // @synthesize pulseInterval=_pulseInterval;
@property(retain) SCXAnimation *overallOpacityAnimation; // @synthesize overallOpacityAnimation=_overallOpacityAnimation;
@property float overallOpacity; // @synthesize overallOpacity=_overallOpacity;
@property(copy) CDUnknownBlockType opacityInterpolation; // @synthesize opacityInterpolation=_opacityInterpolation;
@property(copy) CDUnknownBlockType scaleInterpolation; // @synthesize scaleInterpolation=_scaleInterpolation;
@property float totalRadius; // @synthesize totalRadius=_totalRadius;
@property double startTime; // @synthesize startTime=_startTime;
@property struct CLLocationCoordinate2D coord; // @synthesize coord=_coord;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)endCompletedAnimations;
- (float)overallOpacityAtTime:(double)arg1;
- (float)opacityForProgress:(float)arg1 time:(double)arg2;
- (float)scaleForProgress:(float)arg1 time:(double)arg2;
- (id)progressAtTime:(double)arg1;
- (id)init;

@end

