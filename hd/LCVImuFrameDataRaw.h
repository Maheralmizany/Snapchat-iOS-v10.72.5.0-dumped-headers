//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LCVAccelerationData, LCVRotationRateData;

@interface LCVImuFrameDataRaw : NSObject
{
    double _timestamp;
    LCVRotationRateData *_rotationRate;
    LCVAccelerationData *_acceleration;
}

@property(retain, nonatomic) LCVAccelerationData *acceleration; // @synthesize acceleration=_acceleration;
@property(retain, nonatomic) LCVRotationRateData *rotationRate; // @synthesize rotationRate=_rotationRate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)init;

@end
