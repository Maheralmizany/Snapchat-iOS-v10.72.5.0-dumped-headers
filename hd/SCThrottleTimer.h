//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRunLoop, NSString, NSTimer, SCThrottleTarget;

@interface SCThrottleTimer : NSObject
{
    _Bool _isScheduled;
    _Bool _isThrottled;
    _Bool _repeats;
    double _timeInterval;
    id _userInfo;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    double _tolerance;
    NSTimer *_internalTimer;
    SCThrottleTarget *_target;
}

@property(retain, nonatomic) SCThrottleTarget *target; // @synthesize target=_target;
@property(retain, nonatomic) NSTimer *internalTimer; // @synthesize internalTimer=_internalTimer;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
@property(nonatomic) _Bool isThrottled; // @synthesize isThrottled=_isThrottled;
@property(nonatomic) _Bool isScheduled; // @synthesize isScheduled=_isScheduled;
- (void).cxx_destruct;
- (void)cancel;
- (void)fire;
- (void)reschedule;
- (void)schedule;
- (void)_onThrottleTargetDidTrigger:(id)arg1;
- (void)_removeTimer;
- (void)_createTimer;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
- (id)initWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;

@end

