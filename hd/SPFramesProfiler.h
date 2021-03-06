//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSNumber;

@interface SPFramesProfiler : NSObject
{
    NSNumber *_prepareTime;
    NSNumber *_prepareSetTargetTime;
    NSNumber *_prepareRestartTime;
    NSNumber *_prepareF2FConstructorTime;
    NSNumber *_prepareLoadTime;
    NSNumber *_fps;
    NSNumber *_userWaitingTime;
    NSNumber *_prefetchingTime;
    NSNumber *_videoProcessingBeforeStartTime;
    NSNumber *_totalVideoProcessing;
    NSNumber *_processingThreads;
    NSNumber *_inputBufferSize;
    NSNumber *_playerFreezesCounter;
    NSNumber *_avgPreloadFrameTime;
    NSNumber *_avgWaitingProcessingFrameTime;
    NSNumber *_avgWarpingFrameTime;
    NSNumber *_avgCompressionFrameTime;
    NSNumber *_avgWaitingWritingFrameTime;
    NSNumber *_avgConversionFrameTime;
    NSNumber *_avgWritingFrameTime;
    NSDate *_startDate;
    NSMutableArray *_frameTimes;
    NSMutableArray *_frames;
    double _totalTime;
}

@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) NSMutableArray *frameTimes; // @synthesize frameTimes=_frameTimes;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSNumber *avgWritingFrameTime; // @synthesize avgWritingFrameTime=_avgWritingFrameTime;
@property(readonly, nonatomic) NSNumber *avgConversionFrameTime; // @synthesize avgConversionFrameTime=_avgConversionFrameTime;
@property(readonly, nonatomic) NSNumber *avgWaitingWritingFrameTime; // @synthesize avgWaitingWritingFrameTime=_avgWaitingWritingFrameTime;
@property(readonly, nonatomic) NSNumber *avgCompressionFrameTime; // @synthesize avgCompressionFrameTime=_avgCompressionFrameTime;
@property(retain, nonatomic) NSNumber *avgWarpingFrameTime; // @synthesize avgWarpingFrameTime=_avgWarpingFrameTime;
@property(readonly, nonatomic) NSNumber *avgWaitingProcessingFrameTime; // @synthesize avgWaitingProcessingFrameTime=_avgWaitingProcessingFrameTime;
@property(retain, nonatomic) NSNumber *avgPreloadFrameTime; // @synthesize avgPreloadFrameTime=_avgPreloadFrameTime;
@property(retain, nonatomic) NSNumber *playerFreezesCounter; // @synthesize playerFreezesCounter=_playerFreezesCounter;
@property(retain, nonatomic) NSNumber *inputBufferSize; // @synthesize inputBufferSize=_inputBufferSize;
@property(retain, nonatomic) NSNumber *processingThreads; // @synthesize processingThreads=_processingThreads;
@property(retain, nonatomic) NSNumber *totalVideoProcessing; // @synthesize totalVideoProcessing=_totalVideoProcessing;
@property(retain, nonatomic) NSNumber *videoProcessingBeforeStartTime; // @synthesize videoProcessingBeforeStartTime=_videoProcessingBeforeStartTime;
@property(retain, nonatomic) NSNumber *prefetchingTime; // @synthesize prefetchingTime=_prefetchingTime;
@property(retain, nonatomic) NSNumber *userWaitingTime; // @synthesize userWaitingTime=_userWaitingTime;
@property(retain, nonatomic) NSNumber *fps; // @synthesize fps=_fps;
@property(retain, nonatomic) NSNumber *prepareLoadTime; // @synthesize prepareLoadTime=_prepareLoadTime;
@property(retain, nonatomic) NSNumber *prepareF2FConstructorTime; // @synthesize prepareF2FConstructorTime=_prepareF2FConstructorTime;
@property(retain, nonatomic) NSNumber *prepareRestartTime; // @synthesize prepareRestartTime=_prepareRestartTime;
@property(retain, nonatomic) NSNumber *prepareSetTargetTime; // @synthesize prepareSetTargetTime=_prepareSetTargetTime;
@property(retain, nonatomic) NSNumber *prepareTime; // @synthesize prepareTime=_prepareTime;
- (void).cxx_destruct;
- (unsigned long long)framesCount;
- (void)resumeProfiling;
- (void)pauseProfiling;
- (void)stopProfiling;
- (void)appendFrame:(id)arg1;
- (void)startProfiling;
- (id)init;

@end

