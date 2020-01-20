//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSOperationQueue, SCBatchCaptureSavingConfiguration;

@interface SCBatchCaptureSegmentExportSession : NSObject
{
    NSArray *_segments;
    NSOperationQueue *_operationQueue;
    long long _videoIndex;
    NSArray *_outputUrls;
    SCBatchCaptureSavingConfiguration *_savingConfiguration;
}

@property(retain, nonatomic) SCBatchCaptureSavingConfiguration *savingConfiguration; // @synthesize savingConfiguration=_savingConfiguration;
- (void).cxx_destruct;
- (void)_addExportOperationsForVideoSegment:(id)arg1 finishedOperation:(id)arg2;
- (void)_addExportOperationsForSegment:(id)arg1 finishOperation:(id)arg2;
- (void)dealloc;
- (void)cancel;
- (void)exportSegmentAtIndex:(long long)arg1 timeRange:(CDStruct_e83c9415)arg2 toOutputUrl:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)batchExportToOutputUrls:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBatchCaptureConfiguration:(id)arg1;

@end

