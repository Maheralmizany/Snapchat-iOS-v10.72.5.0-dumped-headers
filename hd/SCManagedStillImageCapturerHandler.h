//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedStillImageCapturerDelegate.h"

@class NSString, SCCaptureResource;

@interface SCManagedStillImageCapturerHandler : NSObject <SCManagedStillImageCapturerDelegate>
{
    SCCaptureResource *_captureResource;
}

- (void).cxx_destruct;
- (_Bool)managedStillImageCapturerShouldProcessFileInput:(id)arg1;
- (_Bool)managedStillImageCapturerIsUnderDeviceMotion:(id)arg1;
- (void)managedStillImageCapturerDidCapturePhoto:(id)arg1;
- (void)managedStillImageCapturerWillCapturePhoto:(id)arg1;
- (id)initWithCaptureResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

