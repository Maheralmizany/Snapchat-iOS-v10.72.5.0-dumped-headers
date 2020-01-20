//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCVideoFrameDropCounter : NSObject
{
    long long _frameCount;
    CDStruct_1b6d18a9 _targetInterval;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _currentTime;
    unsigned long long _totalFrameDrop;
    unsigned long long _maxFrameDrop;
    _Bool _switchedCameraSinceLastFrame;
}

- (void)_logAndReportFrameDropIfNecessary:(unsigned long long)arg1;
- (void)didChangeCaptureDevicePosition;
- (id)toBlizzardEvent;
- (id)toDict;
- (void)processFrameTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithTargetFramerate:(double)arg1;

@end
