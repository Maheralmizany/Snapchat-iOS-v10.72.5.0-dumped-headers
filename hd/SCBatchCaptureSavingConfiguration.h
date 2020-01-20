//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface SCBatchCaptureSavingConfiguration : NSObject
{
    NSArray *_segments;
    NSMutableArray *_segmentMediaStartIndexes;
    long long _totalMediasCount;
    _Bool _isSavingAll;
    long long _segmentIndexToSave;
}

@property(nonatomic) long long segmentIndexToSave; // @synthesize segmentIndexToSave=_segmentIndexToSave;
@property(nonatomic) _Bool isSavingAll; // @synthesize isSavingAll=_isSavingAll;
- (void).cxx_destruct;
- (id)_segmentMetadatasForSegment:(id)arg1;
- (id)_timeRangesForSegment:(id)arg1;
- (long long)_segmentIndexForMediaIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSegmentsToSave;
- (long long)segmentIndexForMediaIndex:(long long)arg1;
- (long long)startIndexOfMediasToSaveForSegmentIndex:(long long)arg1;
- (long long)numberOfMediasToSaveForSegmentIndex:(long long)arg1;
- (id)segmentMetadataOfMediasToSave;
- (id)localTimeRangesOfMediasToSave;
- (id)timeRangesOfMediasToSave;
- (long long)numberOfMediasToSave;
- (id)initWithBatchCaptureConfiguration:(id)arg1;

@end
