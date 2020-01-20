//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSURL;

@interface SCImageToVideoWriter : NSObject
{
    _Bool _processing;
    double _maximumEdgeResolution;
    NSArray *_imageArray;
    id <SCPerforming> _processPerformer;
    double _duration;
    NSURL *_outputURL;
    AVAssetWriter *_videoWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_adaptor;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _progress;
    struct CGSize _size;
}

@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) AVAssetWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(retain, nonatomic) id <SCPerforming> processPerformer; // @synthesize processPerformer=_processPerformer;
@property(copy, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) double maximumEdgeResolution; // @synthesize maximumEdgeResolution=_maximumEdgeResolution;
- (void).cxx_destruct;
- (struct __CVBuffer *)createCVPixelBufferFromCGImage:(struct CGImage *)arg1 orientation:(long long)arg2 andSize:(struct CGSize)arg3;
- (void)cleanup;
- (void)completeWithURL:(id)arg1 error:(id)arg2;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (_Bool)writeImage:(id)arg1 at:(CDStruct_1b6d18a9)arg2;
- (void)writeFrames;
- (void)writeToVideoURLWithSize:(struct CGSize)arg1 duration:(double)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)generateOutputMovieURL;
- (void)dealloc;
- (id)initWithImageArray:(id)arg1;

@end

