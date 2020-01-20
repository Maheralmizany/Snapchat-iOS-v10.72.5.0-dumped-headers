//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCManagedStillImageCapturer;

@protocol SCManagedStillImageCapturerDelegate <NSObject>
- (_Bool)managedStillImageCapturerShouldProcessFileInput:(SCManagedStillImageCapturer *)arg1;
- (_Bool)managedStillImageCapturerIsUnderDeviceMotion:(SCManagedStillImageCapturer *)arg1;

@optional
- (void)managedStillImageCapturerDidCapturePhoto:(SCManagedStillImageCapturer *)arg1;
- (void)managedStillImageCapturerWillCapturePhoto:(SCManagedStillImageCapturer *)arg1;
@end
