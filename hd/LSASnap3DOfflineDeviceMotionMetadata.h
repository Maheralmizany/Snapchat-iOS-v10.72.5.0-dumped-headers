//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LSASnap3DOfflineDeviceMotionMetadata : NSObject
{
    long long _deviceMotionStyle;
    unsigned long long _videoFrameRate;
    double _videoDuration;
}

@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) unsigned long long videoFrameRate; // @synthesize videoFrameRate=_videoFrameRate;
@property(readonly, nonatomic) long long deviceMotionStyle; // @synthesize deviceMotionStyle=_deviceMotionStyle;
- (id)initWithDeviceMotionStyle:(long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDuration:(double)arg3;

@end

