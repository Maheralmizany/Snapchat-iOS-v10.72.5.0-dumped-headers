//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCABloopsFaceProcessingInternalMetrics : SCAMapSerializable
{
}

- (void)setBloopsTotalPhotoProcessingTime:(long long)arg1;
- (void)setBloopsSegmentationTime:(long long)arg1;
- (void)setBloopsNeutralizationTime:(long long)arg1;
- (void)setBloopsNeutralizationApplied:(_Bool)arg1;
- (void)setBloopsKeyPointsTime:(long long)arg1;
- (void)setBloopsHeadYawAngle:(double)arg1;
- (void)setBloopsHeadRollAngle:(double)arg1;
- (void)setBloopsHeadPitchAngle:(double)arg1;
- (void)setBloopsHairstyleSelectionFeatures:(id)arg1;
- (void)setBloopsHairTechnicalMetadata:(id)arg1;
- (void)setBloopsFaceRectWidth:(double)arg1;
- (void)setBloopsFaceRectHeight:(double)arg1;
- (void)setBloopsFaceIlluminationLevel:(double)arg1;
- (void)setBloopsFaceEvenIlluminationFactor:(double)arg1;
- (void)setBloopsFaceDetectionTime:(long long)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

