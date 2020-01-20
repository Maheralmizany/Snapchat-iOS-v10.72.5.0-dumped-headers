//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessLensCommandProcessToTextureAction.h"

@class LSASpectaclesLut, SCLazy;

@interface SCImageProcessLensCommandProcessSpectaclesToTextureAction : SCImageProcessLensCommandProcessToTextureAction
{
    _Bool _requiresYUVOutput;
    _Bool _isPhoto;
    SCLazy *_primaryCameraLookupTable;
    SCLazy *_secondaryCameraLookupTable;
    SCLazy *_depthData;
    long long _stereoRenderMode;
    LSASpectaclesLut *_primaryCameraLut;
    LSASpectaclesLut *_leftLut;
    LSASpectaclesLut *_rightLut;
}

+ (long long)_versionFromMediaType:(unsigned long long)arg1;
+ (unsigned long long)_frameIndexFromStereoCamera:(unsigned long long)arg1;
+ (id)_lazyFromFuture:(id)arg1 performer:(id)arg2;
@property(retain, nonatomic) LSASpectaclesLut *rightLut; // @synthesize rightLut=_rightLut;
@property(retain, nonatomic) LSASpectaclesLut *leftLut; // @synthesize leftLut=_leftLut;
@property(retain, nonatomic) LSASpectaclesLut *primaryCameraLut; // @synthesize primaryCameraLut=_primaryCameraLut;
@property(nonatomic) long long stereoRenderMode; // @synthesize stereoRenderMode=_stereoRenderMode;
@property(nonatomic) _Bool isPhoto; // @synthesize isPhoto=_isPhoto;
@property(nonatomic) _Bool requiresYUVOutput; // @synthesize requiresYUVOutput=_requiresYUVOutput;
@property(retain, nonatomic) SCLazy *depthData; // @synthesize depthData=_depthData;
@property(retain, nonatomic) SCLazy *secondaryCameraLookupTable; // @synthesize secondaryCameraLookupTable=_secondaryCameraLookupTable;
@property(retain, nonatomic) SCLazy *primaryCameraLookupTable; // @synthesize primaryCameraLookupTable=_primaryCameraLookupTable;
- (void).cxx_destruct;
- (id)_rightLookupTable;
- (id)_leftLookupTable;
- (id)_spectaclesInfoWithPresentationTimestamp:(CDStruct_1b6d18a9)arg1 outputSize:(struct CGSize)arg2;
- (struct CGAffineTransform)viewPortTransformWithInputTransform:(struct CGAffineTransform)arg1 exportMode:(_Bool)arg2;
- (long long)drawingOrientationWithInputOrientation:(long long)arg1 exportMode:(_Bool)arg2;
- (id)executeWithContext:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 pixelWidth:(unsigned long long)arg3 pixelHeight:(unsigned long long)arg4 outputPixelWidth:(unsigned long long)arg5 outputPixelHeight:(unsigned long long)arg6 lensComponentManager:(id)arg7 command:(id)arg8 overriddenProcessingInfoConfiguration:(id)arg9 error:(id *)arg10;
- (id)processingInfoWithPresentationTimestamp:(CDStruct_1b6d18a9)arg1 forceUseTimestampAsCurrentTime:(_Bool)arg2 fieldOfView:(float)arg3 outputPixelWidth:(unsigned long long)arg4 outputPixelHeight:(unsigned long long)arg5 captureSource:(unsigned long long)arg6;
- (struct CGSize)_outputSizeFromOutputPixelWidth:(unsigned long long)arg1 outputPixelHeight:(unsigned long long)arg2;
- (id)initWithMetadata:(id)arg1 requiresYUVOutput:(_Bool)arg2 isPhoto:(_Bool)arg3 stereoRenderMode:(long long)arg4 performer:(id)arg5;

@end

