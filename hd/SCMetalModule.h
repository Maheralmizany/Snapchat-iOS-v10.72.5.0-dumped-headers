//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProcessingModule.h"

@class NSString;

@interface SCMetalModule : NSObject <SCProcessingModule>
{
    id <MTLLibrary> _library;
    id <MTLFunction> _function;
    id <MTLComputePipelineState> _computePipelineState;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_textureCache;
    id <SCMetalRenderCommand> _metalRenderCommand;
}

@property(readonly, nonatomic) id <SCMetalRenderCommand> metalRenderCommand; // @synthesize metalRenderCommand=_metalRenderCommand;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLComputePipelineState> computePipelineState; // @synthesize computePipelineState=_computePipelineState;
@property(readonly, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
- (struct opaqueCMSampleBuffer *)render:(struct RenderData)arg1;
- (id)initWithMetalRenderCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

