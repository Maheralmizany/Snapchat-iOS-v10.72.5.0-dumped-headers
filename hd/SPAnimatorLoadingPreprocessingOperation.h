//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class FSFaceSegmentationPreprocessor, NSArray, NSData, NSError, NSValue, SPAnimatorLoadingPreprocessingResult, SPFaceDetectionResult, SPImage, UIImage;

@interface SPAnimatorLoadingPreprocessingOperation : NSOperation
{
    id <SPSettings> _settings;
    FSFaceSegmentationPreprocessor *_faceSegmentationPreprocessor;
    UIImage *_resultImage;
    SPFaceDetectionResult *_faceDetectionResult;
    NSValue *_cropRectValueOnSource;
    NSArray *_resultLandmarks;
    SPAnimatorLoadingPreprocessingResult *_preprocessingResult;
    NSError *_error;
    SPImage *_sourceImage;
    UIImage *_preparedImage;
    NSData *_predefinedFaceZonesData;
    NSArray *_sourceLandmarks;
}

@property(retain, nonatomic) NSArray *sourceLandmarks; // @synthesize sourceLandmarks=_sourceLandmarks;
@property(retain, nonatomic) NSData *predefinedFaceZonesData; // @synthesize predefinedFaceZonesData=_predefinedFaceZonesData;
@property(retain, nonatomic) UIImage *preparedImage; // @synthesize preparedImage=_preparedImage;
@property(retain, nonatomic) SPImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) SPAnimatorLoadingPreprocessingResult *preprocessingResult; // @synthesize preprocessingResult=_preprocessingResult;
@property(retain, nonatomic) NSArray *resultLandmarks; // @synthesize resultLandmarks=_resultLandmarks;
@property(retain, nonatomic) NSValue *cropRectValueOnSource; // @synthesize cropRectValueOnSource=_cropRectValueOnSource;
@property(retain, nonatomic) SPFaceDetectionResult *faceDetectionResult; // @synthesize faceDetectionResult=_faceDetectionResult;
@property(retain, nonatomic) UIImage *resultImage; // @synthesize resultImage=_resultImage;
@property(retain, nonatomic) FSFaceSegmentationPreprocessor *faceSegmentationPreprocessor; // @synthesize faceSegmentationPreprocessor=_faceSegmentationPreprocessor;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)main;
- (id)initWithImage:(id)arg1 preparedImage:(id)arg2 landmarks:(id)arg3 predefinedFaceZonesData:(id)arg4;

@end
