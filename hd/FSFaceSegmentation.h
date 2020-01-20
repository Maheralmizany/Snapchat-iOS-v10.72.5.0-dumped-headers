//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EyesSegmentationNN, FaceSegmentationNN, NSDictionary, NSError, NSObject<OS_dispatch_queue>, ProtectedCoreML;

@interface FSFaceSegmentation : NSObject
{
    NSDictionary *_resourcesPaths;
    FaceSegmentationNN *_mainNN;
    EyesSegmentationNN *_eyesSegmentationNN;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_mainNNError;
    NSError *_eyesSegmentationNNError;
    id <FSFaceSegmentationMetricsLogger> _metricsLogger;
    ProtectedCoreML *_protectedCoreML;
}

@property(retain, nonatomic) ProtectedCoreML *protectedCoreML; // @synthesize protectedCoreML=_protectedCoreML;
@property(retain, nonatomic) id <FSFaceSegmentationMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(retain, nonatomic) NSError *eyesSegmentationNNError; // @synthesize eyesSegmentationNNError=_eyesSegmentationNNError;
@property(retain, nonatomic) NSError *mainNNError; // @synthesize mainNNError=_mainNNError;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) EyesSegmentationNN *eyesSegmentationNN; // @synthesize eyesSegmentationNN=_eyesSegmentationNN;
@property(retain, nonatomic) FaceSegmentationNN *mainNN; // @synthesize mainNN=_mainNN;
@property(retain, nonatomic) NSDictionary *resourcesPaths; // @synthesize resourcesPaths=_resourcesPaths;
- (void).cxx_destruct;
- (id)segmentImage:(id)arg1 landmarks:(id)arg2 gtFaceZones:(struct FaceZones)arg3 error:(id *)arg4;
- (void)multiArrayToMat:(id)arg1 mat:(struct Mat *)arg2;
- (id)matToMultiArray:(struct Mat *)arg1 error:(id *)arg2;
- (void)initializeEyesSegmentationNN;
- (void)initializeMainModelNN;
@property(readonly, nonatomic) NSError *initializationError;
- (void)segmentImage:(id)arg1 landmarks:(id)arg2 gtFaceZones:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)releaseModels;
- (void)initializeModels;
@property(readonly, nonatomic) _Bool modelsReady;
- (id)initWithPaths:(id)arg1 protectedCoreML:(id)arg2 error:(id *)arg3;

@end

