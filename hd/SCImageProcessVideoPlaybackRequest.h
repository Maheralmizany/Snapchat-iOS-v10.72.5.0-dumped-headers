//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessRequest.h"

@class NSArray, NSString, SCImageProcessCommand, SCImageProcessPlaybackRenderer, UIColor;

@interface SCImageProcessVideoPlaybackRequest : NSObject <SCImageProcessRequest>
{
    struct __CVBuffer *_pixelBuffer;
    SCImageProcessPlaybackRenderer *_renderer;
    long long _orientation;
    NSArray *_outputCommands;
    SCImageProcessCommand *_backgroundAnimationCommand;
    NSArray *_midOutputCommands;
    CDUnknownBlockType _completionHandler;
    struct __CVBuffer *_luminanceTextureRef;
    struct __CVBuffer *_chrominanceTextureRef;
    struct CGAffineTransform _viewportTransform;
    CDStruct_1b6d18a9 _presentationTime;
    unsigned int _intermediateTexture[2];
    UIColor *_backgroundColor;
    unsigned int _yTextureId;
    unsigned int _uvTextureId;
    unsigned long long _status;
}

@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)_processIntermediateCommands:(id)arg1 textures:(unsigned int *)arg2 outputPixelBytesPerRow:(unsigned int)arg3 context:(id)arg4 runContext:(id)arg5 initialTextureIndex:(int)arg6 clearInitialTexture:(_Bool)arg7 drawLastCommandToOutputTexture:(_Bool)arg8 paintBackgroundColor:(_Bool)arg9 nextInputTextureIndex:(int *)arg10 error:(id *)arg11;
- (void)cancel;
- (_Bool)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_innerRunProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool GPURequired;
- (void)cleanupTextures;
- (void)setupIntermediateTexturesIfNeededWithContext:(id)arg1 intermediatePasses:(long long)arg2 pixelWidth:(unsigned int)arg3 pixelHeight:(unsigned int)arg4;
- (void)_setupInputTextureUsingOpenGLWithContext:(id)arg1;
- (void)_setupInputTextureWithYTexture:(unsigned int)arg1 uvTexture:(unsigned int)arg2;
- (void)setupInputTextureWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 renderer:(id)arg2 backgroundAnimationCommand:(id)arg3 orientation:(long long)arg4 presentationTime:(CDStruct_1b6d18a9)arg5 viewportTransform:(struct CGAffineTransform)arg6 outputCommands:(id)arg7 midOutputCommands:(id)arg8 backgroundColor:(id)arg9 completionHandler:(CDUnknownBlockType)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

