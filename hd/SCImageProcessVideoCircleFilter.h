//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class CIColor, CIImage, CIVector, NSNumber;

@interface SCImageProcessVideoCircleFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputDestSize;
    NSNumber *inputRadius;
    CIColor *inputColor;
    NSNumber *inputMask;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setDefaults;
- (id)customAttributes;

@end
