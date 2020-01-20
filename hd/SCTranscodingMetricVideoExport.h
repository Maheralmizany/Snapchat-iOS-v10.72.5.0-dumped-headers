//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCTranscodingMetricBase.h"

@interface SCTranscodingMetricVideoExport : SCTranscodingMetricBase
{
    long long _numSegments;
    long long _segmentIndex;
    double _segmentStartTime;
    double _segmentDuration;
}

@property(nonatomic) double segmentDuration; // @synthesize segmentDuration=_segmentDuration;
@property(nonatomic) double segmentStartTime; // @synthesize segmentStartTime=_segmentStartTime;
@property(nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(nonatomic) long long numSegments; // @synthesize numSegments=_numSegments;
- (id)metricType;

@end

