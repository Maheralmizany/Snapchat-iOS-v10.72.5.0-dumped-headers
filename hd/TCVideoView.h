//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ADLDirectRendererCallback.h"
#import "GLKViewDelegate.h"

@class ADLService, EAGLContext, GLKView, NSString;

@interface TCVideoView : UIView <GLKViewDelegate, ADLDirectRendererCallback>
{
    ADLService *_service;
    NSString *_sinkId;
    int _rendererId;
    float _contentScale;
    EAGLContext *_renderingContext;
    EAGLContext *_textureUploadContext;
    GLKView *_videoView;
    float _saturation;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct TextureSet _textureSets[3];
    int _foregroundTextureSet;
    int _uploadingTextureSet;
    // Error parsing type: Ai, name: _readyTextureSet
    // Error parsing type: AB, name: _hasValidTexture
    unsigned int _uytex;
    unsigned int _uutex;
    unsigned int _uvtex;
    unsigned int _uychn;
    unsigned int _uuchn;
    unsigned int _uvchn;
    unsigned int _utexsize;
    unsigned int _uviewsize;
    unsigned int _widthscale;
    unsigned int _usaturation;
}

- (void).cxx_destruct;
- (void)setSaturationBoost:(float)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)onFrame:(id)arg1;
- (void)uploadYUVTexture:(id)arg1;
- (void)uploadSampleBuffer:(struct __CVBuffer *)arg1;
- (id)rendererId;
- (id)sinkId;
- (void)stop;
- (void)startWithSink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initSelf;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

