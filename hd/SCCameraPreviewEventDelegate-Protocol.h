//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, PreviewViewController;

@protocol SCCameraPreviewEventDelegate <NSObject>
- (void)previewViewController:(PreviewViewController *)arg1 didRenderFirstFrameForVideoURL:(NSURL *)arg2;
- (void)previewViewControllerDidAppear:(PreviewViewController *)arg1;
@end

