//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCEagleSearchMetadataBuilder : NSObject
{
    double _goodQualityScore;
    double _badQualityScore;
    double _faceScore;
    double _snapcodeScore;
    double _nsfwScore;
    double _speedMetersPerSec;
    double _altitudeMeters;
}

+ (id)eagleSearchMetadataFromExistingEagleSearchMetadata:(id)arg1;
+ (id)eagleSearchMetadata;
- (id)withAltitudeMeters:(double)arg1;
- (id)withSpeedMetersPerSec:(double)arg1;
- (id)withNsfwScore:(double)arg1;
- (id)withSnapcodeScore:(double)arg1;
- (id)withFaceScore:(double)arg1;
- (id)withBadQualityScore:(double)arg1;
- (id)withGoodQualityScore:(double)arg1;
- (id)build;

@end

