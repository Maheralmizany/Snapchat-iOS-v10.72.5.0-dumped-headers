//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVCapturePhotoOutput.h"

#import "SPCaptureOutput.h"

@class NSString, SPCapturePhotoCaptureDelegate;

@interface SPCapturePhotoOutput : AVCapturePhotoOutput <SPCaptureOutput>
{
    _Bool _takingPhoto;
    _Bool _HRSI;
    SPCapturePhotoCaptureDelegate *_photoCaptureDelegate;
}

@property(retain, nonatomic) SPCapturePhotoCaptureDelegate *photoCaptureDelegate; // @synthesize photoCaptureDelegate=_photoCaptureDelegate;
@property(nonatomic) _Bool HRSI; // @synthesize HRSI=_HRSI;
@property(nonatomic) _Bool takingPhoto; // @synthesize takingPhoto=_takingPhoto;
- (void).cxx_destruct;
- (void)takePhotoWithOrientation:(long long)arg1 flashMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHRSI:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

