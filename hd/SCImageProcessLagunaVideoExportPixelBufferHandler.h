//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessVideoExportPixelBufferHandler.h"

@class NSArray;

@interface SCImageProcessLagunaVideoExportPixelBufferHandler : SCImageProcessVideoExportPixelBufferHandler
{
    NSArray *_circleGPUCommands;
    NSArray *_circleCPUCommands;
}

- (void).cxx_destruct;
- (id)_bufferAttachments;
- (id)_additionalCPUCommands;
- (id)_additionalGPUCommands;
- (id)initWithImageProcessQueue:(id)arg1 GPUCommands:(id)arg2 CPUCommands:(id)arg3 leftStereoGPUCommands:(id)arg4 rightStereoGPUCommands:(id)arg5 assetReader:(id)arg6 assetWriter:(id)arg7 readerOutput:(id)arg8 writerInput:(id)arg9 pixelBufferAdaptor:(id)arg10 stereoPixelBufferAdaptor:(id)arg11 orientation:(long long)arg12 viewportTransform:(struct CGAffineTransform)arg13 cpuBufferTransform:(struct CGAffineTransform)arg14 queue:(id)arg15 firstSampleBuffer:(struct opaqueCMSampleBuffer *)arg16 maxFrameRate:(int)arg17 frameSkipProvider:(id)arg18 presentationTimeScale:(double)arg19 videoSourceSize:(struct CGSize)arg20 videoCircleColor:(id)arg21 videoCirclePadding:(struct CGSize)arg22 videoCircleMask:(_Bool)arg23 magicMomentActive:(_Bool)arg24 magicMomentFrames:(long long)arg25;

@end

