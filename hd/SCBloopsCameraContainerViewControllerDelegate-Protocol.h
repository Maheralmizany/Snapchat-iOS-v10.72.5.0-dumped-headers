//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCBloopsCameraContainerViewController, SPImage;

@protocol SCBloopsCameraContainerViewControllerDelegate <NSObject>
- (void)cameraControlViewController:(SCBloopsCameraContainerViewController *)arg1 didProcessImage:(SPImage *)arg2 fromBackCamera:(_Bool)arg3;
- (void)cameraContainerViewControllerDidClose:(SCBloopsCameraContainerViewController *)arg1;

@optional
- (void)cameraContainerViewControllerViewDidLoad;
@end

