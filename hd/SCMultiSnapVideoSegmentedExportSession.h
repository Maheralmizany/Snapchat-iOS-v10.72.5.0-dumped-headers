//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, NSMutableArray, SCMultiSnapVideoSegmentedExportSessionTask, SCQueuePerformer;

@interface SCMultiSnapVideoSegmentedExportSession : NSObject
{
    AVAsset *_videoAsset;
    SCQueuePerformer *_performer;
    SCMultiSnapVideoSegmentedExportSessionTask *_runningTask;
    NSMutableArray *_pendingTasks;
}

- (void).cxx_destruct;
- (void)_callbackForTask:(id)arg1;
- (void)_runTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_runNextTaskIfNeeded;
- (void)cancelExport;
- (void)batchExportSegmentsForTimeRanges:(id)arg1 outputUrls:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)exportSegmentsForTimeRanges:(id)arg1 outputUrls:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithVideoAsset:(id)arg1;

@end

