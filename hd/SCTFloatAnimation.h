//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTAnimation.h"

@interface SCTFloatAnimation : SCTAnimation
{
    double _fromValue;
    double _toValue;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)updateForInterval:(double)arg1;
- (id)initWithCurve:(unsigned long long)arg1 fromInterval:(double)arg2 toInterval:(double)arg3 fromValue:(double)arg4 toValue:(double)arg5 callback:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

@end

