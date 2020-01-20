//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIDetector;

@interface SCAvatarBuilderMirrorFaceDetector : NSObject
{
    CIDetector *_faceDetector;
}

+ (struct CGRect)transformRectInImageToUpOrientation:(struct CGRect)arg1 imageOrientation:(long long)arg2 imageWidth:(double)arg3 imageHeight:(double)arg4;
- (void).cxx_destruct;
- (struct CGRect)_enlargeBounds:(struct CGRect)arg1 extent:(struct CGRect)arg2 orientation:(long long)arg3;
- (struct CGRect)_CIToUICoordinateSpace:(struct CGRect)arg1 extent:(struct CGRect)arg2;
- (id)_getLargestAreaFace:(id)arg1;
- (id)_getExifOrientation:(id)arg1;
- (struct CGRect)detectMostProminentFace:(id)arg1;
- (id)init;

@end
