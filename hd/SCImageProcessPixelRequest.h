//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessRequest.h"

@class NSArray, NSData, NSString;

@interface SCImageProcessPixelRequest : NSObject <SCImageProcessRequest>
{
    NSArray *_commands;
    long long _orientation;
    struct CGAffineTransform _viewportTransform;
    CDUnknownBlockType _completionHandler;
    unsigned int _texture;
    unsigned int _framebuffer;
    unsigned int _colorRenderbuffer;
    unsigned int _intermediateTexture[2];
    CDStruct_1b6d18a9 _presentationTime;
    _Bool _useTransparentBackground;
    unsigned long long _status;
    NSData *_data;
    CDStruct_5e758c1a _pixelSize;
    CDStruct_5e758c1a _outputPixelSize;
}

@property(readonly, nonatomic) CDStruct_5e758c1a outputPixelSize; // @synthesize outputPixelSize=_outputPixelSize;
@property(readonly, nonatomic) CDStruct_5e758c1a pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)runProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
- (_Bool)_innerRunProgramsWithContext:(id)arg1 GPUAvailable:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) _Bool GPURequired;
- (void)cleanup;
- (void)setupIntermediateTextureWithContext:(id)arg1 intermediatePasses:(int)arg2 pixelWidth:(unsigned int)arg3 pixelHeight:(unsigned int)arg4;
- (void)setupOutputRendererWithContext:(id)arg1;
- (void)setupOutputFrameBufferWithContext:(id)arg1;
- (void)setupInputTextureWithContext:(id)arg1;
- (id)initWithData:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 outputPixelSize:(CDStruct_5e758c1a)arg3 presentationTime:(CDStruct_1b6d18a9)arg4 commands:(id)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 useTransparentBackground:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
