//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCSnapCropUtils : NSObject
{
}

+ (id)cropImageIfNeeded:(id)arg1 croppingAspectRatio:(double)arg2;
+ (double)croppingAspectRatioWithCroppingState:(id)arg1 captionState:(id)arg2 stickerStates:(id)arg3 drawingMetadata:(id)arg4 geoFilterSelected:(_Bool)arg5;
+ (double)getRoundedScaleWithTargetScale:(double)arg1 fillScale:(double)arg2;
+ (struct CGRect)defaultMaxMediaAreaFrame;
+ (struct CGSize)maxMediaAreaSize;
+ (double)croppingAspectRatioWithCroppingState:(id)arg1 gallerySnap:(id)arg2 gallerySnapOverlay:(id)arg3;

@end

