//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSURL, NSValue, SCMultiSnapOverlayState;

@protocol SCSnapVideoFilterMultiSnapSegmentState <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SCMultiSnapOverlayState *overlayState;
@property(readonly, nonatomic) struct CGSize overlaySize;
@property(readonly, copy, nonatomic) NSNumber *timeRangeDurationCMTimescale;
@property(readonly, copy, nonatomic) NSNumber *timeRangeDurationCMTimeVal;
@property(readonly, copy, nonatomic) NSNumber *timeRangeStartCMTimescale;
@property(readonly, copy, nonatomic) NSNumber *timeRangeStartCMTimeVal;
@property(readonly, copy, nonatomic) NSValue *timeRange;
@property(readonly, nonatomic) long long segmentIndex;
@property(readonly, nonatomic) long long numSegments;
@property(readonly, nonatomic) double originalVideoDuration;
@property(readonly, copy, nonatomic) NSURL *sourceVideoURL;
@end

