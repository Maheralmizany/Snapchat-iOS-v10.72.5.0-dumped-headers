//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SPPhotoCapturerFrameDelegate.h"

@class NSArray, NSDate, NSObject<OS_dispatch_group>, NSString, SPCameraFaceViewModel, SPImage, SPLandmarksExtractor, SPPhotoCapturer;

@interface SPCameraViewModel : AIFKVONSObject <SPPhotoCapturerFrameDelegate>
{
    _Bool _disableDetectors;
    _Bool _anyFaceInRect;
    SPPhotoCapturer *_photoCapturer;
    SPLandmarksExtractor *_landmarksExtractor;
    unsigned long long _faceMode;
    NSArray *_cameraFaceViewModels;
    SPCameraFaceViewModel *_singleFaceViewModel;
    NSArray *_duoFacesViewModel;
    SPImage *_ffImage;
    double _firstFrameTime;
    NSDate *_lastChangeModeDate;
    unsigned long long _faceInitialMode;
    NSObject<OS_dispatch_group> *_landmarksProcessingGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *landmarksProcessingGroup; // @synthesize landmarksProcessingGroup=_landmarksProcessingGroup;
@property(nonatomic) unsigned long long faceInitialMode; // @synthesize faceInitialMode=_faceInitialMode;
@property(nonatomic) _Bool anyFaceInRect; // @synthesize anyFaceInRect=_anyFaceInRect;
@property(retain, nonatomic) NSDate *lastChangeModeDate; // @synthesize lastChangeModeDate=_lastChangeModeDate;
@property(nonatomic) double firstFrameTime; // @synthesize firstFrameTime=_firstFrameTime;
@property(nonatomic) _Bool disableDetectors; // @synthesize disableDetectors=_disableDetectors;
@property(retain, nonatomic) SPImage *ffImage; // @synthesize ffImage=_ffImage;
@property(readonly, nonatomic) NSArray *duoFacesViewModel; // @synthesize duoFacesViewModel=_duoFacesViewModel;
@property(readonly, nonatomic) SPCameraFaceViewModel *singleFaceViewModel; // @synthesize singleFaceViewModel=_singleFaceViewModel;
@property(retain, nonatomic) NSArray *cameraFaceViewModels; // @synthesize cameraFaceViewModels=_cameraFaceViewModels;
@property(nonatomic) unsigned long long faceMode; // @synthesize faceMode=_faceMode;
@property(retain, nonatomic) SPLandmarksExtractor *landmarksExtractor; // @synthesize landmarksExtractor=_landmarksExtractor;
@property(retain, nonatomic) SPPhotoCapturer *photoCapturer; // @synthesize photoCapturer=_photoCapturer;
- (void).cxx_destruct;
- (void)checkLandmarksInImage:(id)arg1;
- (void)noFacesFound;
- (void)endCapturingFrames;
- (void)beginCapturingFrames;
- (void)photoCapturer:(id)arg1 didOutputMetadataObjects:(id)arg2;
- (void)photoCapturer:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)resetLastImage;
- (void)takePhoto:(CDUnknownBlockType)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
@property(readonly, nonatomic) _Bool isFaceMetadataAvailable;
- (id)initWithFaceInitialMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

