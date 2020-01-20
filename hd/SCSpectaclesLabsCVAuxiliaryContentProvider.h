//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSpectaclesAuxiliaryContentProvider.h"

@class NSString, SCSpectaclesAuxiliaryContentLoader, SCUserSession;

@interface SCSpectaclesLabsCVAuxiliaryContentProvider : NSObject <SCSpectaclesAuxiliaryContentProvider>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    SCSpectaclesAuxiliaryContentLoader *_auxiliaryContentLoader;
}

+ (id)_imuDataRawWithContentsOfFile:(id)arg1;
+ (long long)_lcvCameraFromStereoCamera:(unsigned long long)arg1;
@property(retain, nonatomic) SCSpectaclesAuxiliaryContentLoader *auxiliaryContentLoader; // @synthesize auxiliaryContentLoader=_auxiliaryContentLoader;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void).cxx_destruct;
- (id)stabilizationFramesFromIMUFile:(id)arg1 contentSize:(struct CGSize)arg2;
- (void)_writePictureFrameData:(id)arg1 eulerAngles:(id)arg2 depthFileHandler:(id)arg3;
- (void)extractDepthFromContentFile:(id)arg1 primaryCamera:(unsigned long long)arg2 calibrationFile:(id)arg3 imuFile:(id)arg4 depthFileHandler:(id)arg5 outputAdjustmentFile:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_showMessage:(id)arg1;
- (void)cancelDepthDownloadForSnapId:(id)arg1;
- (void)downloadDepthForSnapId:(id)arg1 depthFileHandler:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadDepthAvailabilityForSnapId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)extractLookupTableFromCalibrationFile:(id)arg1 forContentOfType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)skyClassifierPath;
- (void)requestSkyClassifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

