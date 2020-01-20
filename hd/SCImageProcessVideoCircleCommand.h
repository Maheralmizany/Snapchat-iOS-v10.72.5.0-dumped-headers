//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@interface SCImageProcessVideoCircleCommand : SCImageProcessCommand
{
    struct CGColor *_color;
    int _uniformRadius;
    int _uniformColor;
    double _radius;
}

+ (id)commandWithSideLength:(double)arg1 padding:(double)arg2 color:(struct CGColor *)arg3 mask:(_Bool)arg4;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)commandName;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithRadius:(double)arg1 color:(struct CGColor *)arg2 mask:(_Bool)arg3;

@end
