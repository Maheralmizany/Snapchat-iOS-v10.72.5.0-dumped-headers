//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCaptureResource, SCManagedCaptureDevice;

@interface SCManagedCaptureDeviceDefaultZoomHandler : NSObject
{
    SCCaptureResource *_captureResource;
    SCManagedCaptureDevice *_currentDevice;
}

@property(nonatomic) __weak SCManagedCaptureDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property(nonatomic) __weak SCCaptureResource *captureResource; // @synthesize captureResource=_captureResource;
- (void).cxx_destruct;
- (void)_setZoomFactor:(double)arg1 forManagedCaptureDevice:(id)arg2;
- (void)softwareZoomWithDevice:(id)arg1;
- (void)setZoomFactor:(double)arg1 forDevice:(id)arg2 immediately:(_Bool)arg3;
- (id)initWithCaptureResource:(id)arg1;

@end

