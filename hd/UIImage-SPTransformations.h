//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (SPTransformations)
- (id)sp_imageByApplyGaussBlurWithRadius:(double)arg1;
- (id)sp_imageWithDisplayScaleByCombiningWithImage:(id)arg1 secondImageRect:(struct CGRect)arg2;
- (id)sp_imageByCombiningWithImage:(id)arg1 secondImageRect:(struct CGRect)arg2;
- (id)sp_imageByCombiningWithImage:(id)arg1;
- (id)sp_flippedImageByAxis:(unsigned long long)arg1;
- (id)sp_rotateImageByDegrees:(double)arg1;
- (id)sp_scaleImageToSize:(struct CGSize)arg1 scaleFactor:(double)arg2;
- (id)sp_scaleImageToSize:(struct CGSize)arg1;
- (id)aif_viScaleImageToSize:(struct CGSize)arg1;
- (id)sp_imageCroppedToRectInterest:(struct CGRect)arg1 rotationAngle:(double)arg2;
- (id)sp_imageCroppedToRectInterest:(struct CGRect)arg1;
- (id)sp_imageCroppedToRect:(struct CGRect)arg1;
- (id)sp_imageWithInPortraitUpOrientationForced:(_Bool)arg1;
- (id)sp_imageWithInPortraitUpOrientation;
@end

