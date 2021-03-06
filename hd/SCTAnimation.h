//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCTAnimationTimingFunction;

@interface SCTAnimation : NSObject
{
    SCTAnimationTimingFunction *_timingFunction;
    double _fromInterval;
    double _toInterval;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) double toInterval; // @synthesize toInterval=_toInterval;
@property(readonly, nonatomic) double fromInterval; // @synthesize fromInterval=_fromInterval;
- (void).cxx_destruct;
- (void)updateForInterval:(double)arg1;
- (double)deltaAtInterval:(double)arg1;
- (id)initWithCurve:(unsigned long long)arg1 fromInterval:(double)arg2 toInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;

@end

