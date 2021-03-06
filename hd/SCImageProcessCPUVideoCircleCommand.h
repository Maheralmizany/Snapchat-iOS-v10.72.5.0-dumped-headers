//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessCPUCommand.h"

@class CIContext, CIFilter;

@interface SCImageProcessCPUVideoCircleCommand : SCImageProcessCPUCommand
{
    struct CGColorSpace *_colorSpace;
    struct CGSize _outputSize;
    double _radius;
    struct CGColor *_color;
    _Bool _mask;
    CIContext *_context;
    CIFilter *_filter;
}

+ (id)commandWithSideLength:(double)arg1 padding:(double)arg2 color:(struct CGColor *)arg3 mask:(_Bool)arg4;
@property(retain, nonatomic) CIFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) CIContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)commandName;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)initWithOutputSize:(struct CGSize)arg1 radius:(double)arg2 color:(struct CGColor *)arg3 mask:(_Bool)arg4;

@end

