//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCXRenderer.h"

@class NSString;

@interface SCXSlingshotRenderer : NSObject <SCXRenderer>
{
    _Bool _readyToRender;
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragShader;
    unsigned int _vao;
    unsigned int _vbo;
    unsigned int _positionAttribute;
    unsigned int _uvAttribute;
    unsigned int _weightAttribute;
    unsigned int _transformUniformLocation;
    unsigned int _stretchUniformLocation;
    unsigned int _timeUniformLocation;
    unsigned int _vertexCount;
}

- (void)complete;
- (void)render:(id)arg1;
- (void)prepare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

