//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCameraView, SPImage;

@protocol SPCameraViewDelegate <NSObject>
- (void)cameraView:(SPCameraView *)arg1 didChangeAllowTakePhoto:(_Bool)arg2;
- (void)cameraView:(SPCameraView *)arg1 didProcessCurrentImage:(SPImage *)arg2 fromBackCamera:(_Bool)arg3;
@end
