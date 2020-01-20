//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCQueuePerformer, SCSentinel, SCUserSession;

@interface SCArSegmentationImageGenerator : NSObject
{
    SCSentinel *_sentinel;
    _Bool _didResumeBlendingPerformer;
    SCQueuePerformer *_blendingPerformer;
    SCQueuePerformer *_segmentationPerformer;
    long long _mediaOrientation;
    SCUserSession *_userSession;
    NSString *_selectedContextFilterId;
    int _deviceMode;
    struct map<SCContextFilterDetectedObjectType, cv::Mat, std::__1::less<SCContextFilterDetectedObjectType>, std::__1::allocator<std::__1::pair<const SCContextFilterDetectedObjectType, cv::Mat>>> _segmentationMasks;
    struct Mat _inputImageMat;
    NSArray *_detectedTypes;
}

+ (struct CGSize)_getProcessingSizeForInputSize:(const Size__3d8b223e *)arg1 minDimension:(int)arg2;
+ (int)_getDeviceMode;
+ (_Bool)shouldEnableHighEndModel;
+ (_Bool)shouldEnableGeneratorForUserSession:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_modelsReady;
- (id)_getContextImageFromDownloadedSky:(id)arg1 imageMat:(const struct Mat *)arg2 skyMaskMat:(const struct Mat *)arg3;
- (struct Mat)_toCVMatWithResize:(id)arg1;
- (void)generateContextImageFromInput:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_segmentInputImage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clear;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 imageFuture:(id)arg2 mediaOrientation:(long long)arg3;
- (id)initWithUserSession:(id)arg1 image:(id)arg2 mediaOrientation:(long long)arg3;

@end
