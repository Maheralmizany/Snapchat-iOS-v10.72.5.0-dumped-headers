//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@interface SCImageProcessBlendRGBCommand : SCImageProcessCommand
{
    int _imageTexture2;
    unsigned int _blendTexture;
    struct CGImage *_image;
    struct CGSize _outputSize;
}

+ (id)commandWithImage:(struct CGImage *)arg1 outputSize:(struct CGSize)arg2;
- (id)commandName;
- (_Bool)unloadWithError:(id *)arg1;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 outputSize:(struct CGSize)arg2;

@end

