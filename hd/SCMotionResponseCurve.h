//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMotionResponseCurve : NSObject
{
    unsigned long long _direction;
    double _sign;
    double _domain;
    double _range;
    double _input;
    double _output;
}

- (double)evaluate:(double)arg1;
- (id)init;

@end

