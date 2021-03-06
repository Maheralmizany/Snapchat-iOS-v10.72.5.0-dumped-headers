//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLArgumentEncoder.h"

@class NSString;

@interface SCMockMetalArgumentEncoder : NSObject <MTLArgumentEncoder>
{
    id <MTLDevice> _device;
    NSString *_label;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
}

@property(readonly) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(readonly) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

