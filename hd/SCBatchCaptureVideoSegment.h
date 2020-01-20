//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBatchCaptureSegment.h"

@class NSURL, SCMultiSnapConfiguration, UIImage;

@interface SCBatchCaptureVideoSegment : SCBatchCaptureSegment
{
    _Bool _isVideoSegment;
    _Bool _isMultiSnap;
    _Bool _isInfiniteDuration;
    UIImage *_thumbnail;
    NSURL *_assetURL;
    UIImage *_frameImage;
    NSURL *_rawVideoDataFileURL;
    SCMultiSnapConfiguration *_multiSnapConfiguration;
    long long _codecType;
    CDStruct_1b6d18a9 _startTimeOffset;
    CDStruct_e83c9415 _contentTimeRange;
}

@property(nonatomic) _Bool isInfiniteDuration; // @synthesize isInfiniteDuration=_isInfiniteDuration;
@property(nonatomic) _Bool isMultiSnap; // @synthesize isMultiSnap=_isMultiSnap;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(retain, nonatomic) SCMultiSnapConfiguration *multiSnapConfiguration; // @synthesize multiSnapConfiguration=_multiSnapConfiguration;
@property(retain, nonatomic) NSURL *rawVideoDataFileURL; // @synthesize rawVideoDataFileURL=_rawVideoDataFileURL;
- (void)setContentTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)contentTimeRange;
- (CDStruct_1b6d18a9)startTimeOffset;
- (id)frameImage;
- (id)assetURL;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (_Bool)isVideoSegment;
- (void).cxx_destruct;
- (long long)forceSplittedTimeRangesCount;
- (id)forceSplittedTimeRanges;
- (void)setStartTimeOffset:(CDStruct_1b6d18a9)arg1;
- (id)description;
- (void)setFrameImage:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

