//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface SOJUGeoGeoLocationBuilder : NSObject
{
    NSNumber *_timestamp;
    NSNumber *_lat;
    NSNumber *_lon;
    NSNumber *_altitude;
    NSNumber *_horizontalAccuracy;
    NSNumber *_speed;
}

+ (id)withJUGeoGeoLocation:(id)arg1;
- (void).cxx_destruct;
- (id)setSpeed:(id)arg1;
- (id)setHorizontalAccuracy:(id)arg1;
- (id)setAltitude:(id)arg1;
- (id)setLon:(id)arg1;
- (id)setLat:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;
- (id)setSpeedValue:(double)arg1;
- (id)setHorizontalAccuracyValue:(double)arg1;
- (id)setAltitudeValue:(double)arg1;
- (id)setLonValue:(double)arg1;
- (id)setLatValue:(double)arg1;
- (id)setTimestampValue:(double)arg1;

@end

