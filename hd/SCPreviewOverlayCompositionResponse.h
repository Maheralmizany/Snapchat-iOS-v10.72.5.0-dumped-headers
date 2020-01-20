//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSData, UIImage;

@interface SCPreviewOverlayCompositionResponse : NSObject <NSCopying, NSCoding>
{
    UIImage *_screenshotOrOverlay;
    NSData *_overlayPngData;
    UIImage *_rotationalOverlay;
    UIImage *_overlayImageForMask;
    UIImage *_videoThumbnailImageWithOverlay;
    UIImage *_lensAppliedImage;
    NSArray *_videoTrackedImages;
    UIImage *_unifiedCameraObjectAppliedImage;
}

@property(readonly, copy, nonatomic) UIImage *unifiedCameraObjectAppliedImage; // @synthesize unifiedCameraObjectAppliedImage=_unifiedCameraObjectAppliedImage;
@property(readonly, copy, nonatomic) NSArray *videoTrackedImages; // @synthesize videoTrackedImages=_videoTrackedImages;
@property(readonly, copy, nonatomic) UIImage *lensAppliedImage; // @synthesize lensAppliedImage=_lensAppliedImage;
@property(readonly, copy, nonatomic) UIImage *videoThumbnailImageWithOverlay; // @synthesize videoThumbnailImageWithOverlay=_videoThumbnailImageWithOverlay;
@property(readonly, copy, nonatomic) UIImage *overlayImageForMask; // @synthesize overlayImageForMask=_overlayImageForMask;
@property(readonly, copy, nonatomic) UIImage *rotationalOverlay; // @synthesize rotationalOverlay=_rotationalOverlay;
@property(readonly, copy, nonatomic) NSData *overlayPngData; // @synthesize overlayPngData=_overlayPngData;
@property(readonly, copy, nonatomic) UIImage *screenshotOrOverlay; // @synthesize screenshotOrOverlay=_screenshotOrOverlay;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScreenshotOrOverlay:(id)arg1 overlayPngData:(id)arg2 rotationalOverlay:(id)arg3 overlayImageForMask:(id)arg4 videoThumbnailImageWithOverlay:(id)arg5 lensAppliedImage:(id)arg6 videoTrackedImages:(id)arg7 unifiedCameraObjectAppliedImage:(id)arg8;
- (id)initWithCoder:(id)arg1;

@end

