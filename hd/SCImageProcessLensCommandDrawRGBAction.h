//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessLensCommandDrawAction.h"
#import "SCTraceEnabled.h"

@class NSString;

@interface SCImageProcessLensCommandDrawRGBAction : NSObject <SCTraceEnabled, SCImageProcessLensCommandDrawAction>
{
    _Bool _isInitialized;
    unsigned int _imageTextureOriginal;
    unsigned int _imageTextureProcessed;
}

- (void)_setupTexturesWithProgram:(id)arg1;
- (id)fragmentShaderString;
- (_Bool)executeWithContext:(id)arg1 processedTexture:(id)arg2 program:(id)arg3 command:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

