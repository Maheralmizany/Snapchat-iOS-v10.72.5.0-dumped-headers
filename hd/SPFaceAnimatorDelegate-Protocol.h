//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPFaceAnimator;

@protocol SPFaceAnimatorDelegate <NSObject>

@optional
- (void)faceAnimatorDidResume:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidPause:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidReleaseMemory:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidFinishProcess:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidStartProcess:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidFinishPreparing:(SPFaceAnimator *)arg1;
- (void)faceAnimatorDidStartPreparing:(SPFaceAnimator *)arg1;
@end

