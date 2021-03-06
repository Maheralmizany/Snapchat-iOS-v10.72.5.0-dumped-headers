//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"
#import "SCVideoTranscodingImageProcessor.h"

@class NSArray, NSString, SCImageProcessQueue;

@interface SCVideoExportImageProcessor : NSObject <SCVideoTranscodingImageProcessor, SCTraceEnabled>
{
    SCImageProcessQueue *_imageProcessQueue;
    long long _orientation;
    struct CGAffineTransform _viewportTransform;
    struct CGAffineTransform _cpuBufferTransform;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    struct CGSize _outputSize;
    CDStruct_1b6d18a9 _magicMomentFrameTime;
}

- (void).cxx_destruct;
- (void)cancelProcessing;
- (void)processImageWithInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 presentationTime:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)warmUpProcessing;
- (id)initWithImageProcessQueue:(id)arg1 orientation:(long long)arg2 viewportTransform:(struct CGAffineTransform)arg3 cpuBufferTransform:(struct CGAffineTransform)arg4 GPUCommands:(id)arg5 CPUCommands:(id)arg6 outputSize:(struct CGSize)arg7 magicMomentFrameTime:(CDStruct_1b6d18a9)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

