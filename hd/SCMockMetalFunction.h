//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLFunction.h"

@class NSArray, NSDictionary, NSString;

@interface SCMockMetalFunction : NSObject <MTLFunction>
{
    id <MTLDevice> _device;
    NSDictionary *_functionConstantsDictionary;
    unsigned long long _functionType;
    NSString *_label;
    NSString *_name;
    long long _patchControlPointCount;
    unsigned long long _patchType;
    NSArray *_stageInputAttributes;
    NSArray *_vertexAttributes;
}

@property(readonly) NSArray *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
@property(readonly) NSArray *stageInputAttributes; // @synthesize stageInputAttributes=_stageInputAttributes;
@property(readonly) unsigned long long patchType; // @synthesize patchType=_patchType;
@property(readonly) long long patchControlPointCount; // @synthesize patchControlPointCount=_patchControlPointCount;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly) unsigned long long functionType; // @synthesize functionType=_functionType;
@property(readonly) NSDictionary *functionConstantsDictionary; // @synthesize functionConstantsDictionary=_functionConstantsDictionary;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)initWithFunctionType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

