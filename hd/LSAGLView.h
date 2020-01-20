//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LSAGLView.h"
#import "LSRenderInContext.h"

@class EAGLContext, LSATexture, NSObject<OS_dispatch_semaphore>, NSString;

@interface LSAGLView : UIView <LSRenderInContext, LSAGLView>
{
    unsigned int _defaultFramebuffer;
    unsigned int _defaultRenderbuffer;
    struct CGSize _inputImageSize;
    long long _inputImageBytesPerRow;
    float _imageVertices[8];
    struct CGSize _boundsSizeAtFrameBufferEpoch;
    struct LSDrawTexture *_shDrawTexture;
    struct CGSize _sizeInPixels;
    _Bool _isGPUAllowed;
    LSATexture *_textureToDraw;
    EAGLContext *_context;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    long long _fillMode;
    long long _rotationMode;
}

+ (struct RectTransform)coreTransformFromRotationMode:(long long)arg1;
+ (const float *)_textureCoordinatesForRotation:(long long)arg1;
+ (Class)layerClass;
@property(nonatomic) long long rotationMode; // @synthesize rotationMode=_rotationMode;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
- (void).cxx_destruct;
- (void)_setInputSize:(struct CGSize)arg1 bytesPerRow:(long long)arg2;
- (void)_recalculateViewGeometry;
- (void)_correctTextureCoordsForBytesPerRow:(float *)arg1;
- (void)drawTexture:(id)arg1;
- (void)_drawRawTexture:(unsigned int)arg1 withTransformArray:(const struct RectTransformArray *)arg2;
- (void)_presentFramebuffer;
- (void)_prepareFramebuffer;
- (void)_deleteDrawTexture;
- (void)_createDrawTexture;
- (void)_deleteGLBuffers;
- (void)_createGLBuffers;
- (void)layoutSubviews;
- (void)didBecomeActive:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)renderInContext:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

