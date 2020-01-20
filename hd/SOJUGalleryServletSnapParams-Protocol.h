//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUCoordinate, SOJUGalleryMultiSnapSegment, SOJUGalleryServletSensorBlob, SOJUGallerySnapSource, SOJUStoryFrame;

@protocol SOJUGalleryServletSnapParams <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSArray *mediaAttributes;
@property(readonly, copy, nonatomic) NSArray *toolVersions;
@property(readonly, copy, nonatomic) SOJUGalleryServletSensorBlob *sensorBlob;
@property(readonly, copy, nonatomic) NSString *multiSnapGroupId;
@property(readonly, copy, nonatomic) SOJUGalleryMultiSnapSegment *multiSnapSegment;
@property(readonly, copy, nonatomic) NSNumber *mediaFormatProvided;
@property(readonly, copy, nonatomic) NSString *mediaTranscoderVersion;
@property(readonly, copy, nonatomic) NSString *mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *captureTime;
@property(readonly, copy, nonatomic) NSNumber *overlayImageSize;
@property(readonly, copy, nonatomic) NSNumber *thumbnailSize;
@property(readonly, copy, nonatomic) NSNumber *infiniteDuration;
@property(readonly, copy, nonatomic) NSString *miniThumbnailBytes;
@property(readonly, copy, nonatomic) NSNumber *isInfiniteDurationDeprecated;
@property(readonly, copy, nonatomic) NSNumber *customStickerPresent;
@property(readonly, copy, nonatomic) NSString *deviceId;
@property(readonly, copy, nonatomic) NSNumber *contentScore;
@property(readonly, copy, nonatomic) SOJUStoryFrame *framing;
@property(readonly, copy, nonatomic) SOJUGallerySnapSource *source;
@property(readonly, copy, nonatomic) NSNumber *cameraFrontFacing;
@property(readonly, copy, nonatomic) NSNumber *cameraHardwareMountingDegrees;
@property(readonly, copy, nonatomic) NSNumber *backlogTotal;
@property(readonly, copy, nonatomic) NSNumber *backlogIndex;
@property(readonly, copy, nonatomic) NSNumber *size;
@property(readonly, copy, nonatomic) NSNumber *duration;
@property(readonly, copy, nonatomic) NSNumber *height;
@property(readonly, copy, nonatomic) NSNumber *width;
@property(readonly, copy, nonatomic) NSNumber *battery;
@property(readonly, copy, nonatomic) NSNumber *speed;
@property(readonly, copy, nonatomic) NSNumber *temperature;
@property(readonly, copy, nonatomic) NSString *timeZone;
@property(readonly, copy, nonatomic) SOJUCoordinate *location;
@property(readonly, copy, nonatomic) NSNumber *overlayOrientation;
@property(readonly, copy, nonatomic) NSNumber *orientation;
@property(readonly, copy, nonatomic) NSNumber *createTime;
@property(readonly, copy, nonatomic) NSString *thumbnailMd5hash;
@property(readonly, copy, nonatomic) NSString *overlayImageMd5hash;
@property(readonly, copy, nonatomic) NSString *overlay;
@property(readonly, copy, nonatomic) NSNumber *mediaType;
@property(readonly, copy, nonatomic) NSString *mediaPhotoDnaHash;
@property(readonly, copy, nonatomic) NSString *mediaMd5hash;
@property(readonly, copy, nonatomic) NSString *encryption;
@property(readonly, copy, nonatomic) NSString *mediaId;
@property(readonly, copy, nonatomic) NSString *sojuCopyFromSnapId;
@property(readonly, copy, nonatomic) NSString *snapId;
@end

