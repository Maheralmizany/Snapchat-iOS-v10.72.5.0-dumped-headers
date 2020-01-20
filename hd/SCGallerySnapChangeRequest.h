//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSNumber, NSString, NSURL, SCCDGallerySnap, SCObjectPlaceholder, SOJUGalleryServletSensorBlob, SOJUSnapCreatorAttribution, SOJUStoryFrame;

@interface SCGallerySnapChangeRequest : NSObject
{
    SCCDGallerySnap *_gallerySnap;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (void)deleteAllGallerySnaps;
+ (void)deleteGallerySnaps:(id)arg1;
+ (id)creationRequestWithGallerySnap:(id)arg1;
+ (id)changeRequestForGallerySnap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int width;
@property(copy, nonatomic) NSString *transferBatchId;
@property(copy, nonatomic) NSArray *toolVersions;
@property(copy, nonatomic) NSString *timeZoneName;
@property(copy, nonatomic) NSURL *thumbnailURI;
@property(nonatomic) int thumbnailUploadState;
@property(copy, nonatomic) NSString *thumbnailRedirectURI;
@property(nonatomic) int source;
@property(copy, nonatomic) NSNumber *sojuMediaType;
@property(copy, nonatomic) NSString *snapId;
@property(copy, nonatomic) NSString *servletMediaFormat;
@property(copy, nonatomic) SOJUGalleryServletSensorBlob *sensorBlob;
@property(copy, nonatomic) NSString *saverUserId;
@property(copy, nonatomic) NSString *retryFromSnapId;
@property(copy, nonatomic) NSDate *placeholderCreateTime;
@property(copy, nonatomic) NSString *overlayRedirectURI;
@property(nonatomic) int orientation;
@property(copy, nonatomic) NSString *multiSnapGroupId;
@property(nonatomic) int mediaType;
@property(copy, nonatomic) NSString *mediaRedirectURI;
@property(copy, nonatomic) NSString *mediaId;
@property(nonatomic) int mediaFormat;
@property(copy, nonatomic) NSArray *mediaAttributes;
@property(nonatomic) _Bool isTemporary;
@property(nonatomic) float interestingnessScore;
@property(nonatomic) _Bool infiniteDuration;
@property(nonatomic) int height;
@property(nonatomic) _Bool hasThumbnail;
@property(nonatomic) _Bool hasSynced;
@property(nonatomic) _Bool hasOverlayImage;
@property(nonatomic) _Bool hasLocation;
@property(nonatomic) _Bool hasInterestingnessScore;
@property(copy, nonatomic) SOJUStoryFrame *framing;
@property(copy, nonatomic) NSString *externalId;
@property(nonatomic) float duration;
@property(copy, nonatomic) NSString *duplicatedFromSnapId;
@property(copy, nonatomic) NSString *deviceId;
@property(copy, nonatomic) NSString *deviceFirmwareInfo;
@property(copy, nonatomic) SOJUSnapCreatorAttribution *creatorAttribution;
@property(copy, nonatomic) NSDate *createTimeUtc;
@property(nonatomic) int cloudMediaState;
@property(copy, nonatomic) NSDate *captureTimeUtc;
@property(copy, nonatomic) NSString *cameraRollId;
@property(nonatomic) _Bool cameraFrontFacing;
@property(copy, nonatomic) NSArray *attribution;
- (void)setWithGallerySnap:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedGallerySnap;
- (void)setSyncedEntryHighlighted:(id)arg1;
- (void)setSyncedEntry:(id)arg1;
- (void)setOwnerDeleted:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setMiniThumbnail:(id)arg1;
- (void)setEntryHighlighted:(id)arg1;
- (void)setEntry:(id)arg1;
- (void)setDetail:(id)arg1;
- (id)initWithGallerySnap:(id)arg1;

@end
