//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSDictionary, NSObject<OS_dispatch_queue>;

@interface LSAVideoWriter : NSObject
{
    AVAssetWriterInput *_audioInput;
    AVAssetWriterInput *_pixelInput;
    struct queue<LS::CFRefHolder<opaqueCMSampleBuffer *>, std::__1::deque<LS::CFRefHolder<opaqueCMSampleBuffer *>, std::__1::allocator<LS::CFRefHolder<opaqueCMSampleBuffer *>>>> *_enqueuedPixelData;
    struct queue<LS::CFRefHolder<opaqueCMSampleBuffer *>, std::__1::deque<LS::CFRefHolder<opaqueCMSampleBuffer *>, std::__1::allocator<LS::CFRefHolder<opaqueCMSampleBuffer *>>>> *_enqueuedAudioData;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _started;
    _Bool _finished;
    struct CGSize _size;
    NSDictionary *_pixelBufferAttributes;
    _Bool _writerCreationFailed;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInputPixelBufferAdaptor *_pixelAdapter;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct AudioInfo _audioInfo;
}

@property(readonly, nonatomic) struct AudioInfo audioInfo; // @synthesize audioInfo=_audioInfo;
@property struct __CVPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
@property(retain) AVAssetWriterInputPixelBufferAdaptor *pixelAdapter; // @synthesize pixelAdapter=_pixelAdapter;
@property(retain) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property _Bool writerCreationFailed; // @synthesize writerCreationFailed=_writerCreationFailed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct opaqueCMSampleBuffer *)_popNextEnqueuedSampleBuffer:(id)arg1;
- (void)_finalizeEnqueuedSamples;
- (_Bool)_flushEnqueuedAudioData;
- (_Bool)_flushEnqueuedPixelData;
- (CFRefHolder_41721aff)_createCMSampleBufferFrom:(const CFRefHolder_b549d14f *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (_Bool)finishWritingAtTime:(CDStruct_1b6d18a9)arg1 error:(id *)arg2;
- (void)writeAudioBuffer:(const CFRefHolder_41721aff *)arg1;
- (void)writePixelBuffer:(const CFRefHolder_b549d14f *)arg1 forTime:(CDStruct_1b6d18a9)arg2;
- (CFRefHolder_b549d14f)createPixelBufferForWriting;
- (void)startSessionAtTimeIfRequired:(CDStruct_1b6d18a9)arg1;
- (void)createWriterAsync:(id)arg1;
- (id)initWithURL:(id)arg1 outputSize:(struct CGSize)arg2 audioInfo:(struct AudioInfo)arg3;
- (id)initWithURL:(id)arg1 outputSize:(struct CGSize)arg2;

@end

