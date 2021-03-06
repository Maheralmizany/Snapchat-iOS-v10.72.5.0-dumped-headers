//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MediaCacheInfoDataSource.h"
#import "MediaDataSource.h"
#import "MediaDelegate.h"
#import "MediaImageProcessingDelegate.h"
#import "MediaUploadDelegate.h"
#import "NSCoding.h"
#import "SnapVideoFilterDelegate.h"

@class CLLocation, EphemeralMediaDelegateAnnouncer, Media, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL, SCCameraDeepLinkMetadata, SCContextContextHint, SCMEAddCheckinRequest, SCR2StorySnapClientMetadata, SCSnapCommonLoggingParameters, SCSnapVideoFilterState, SOJUMultiSnapMetadata, SnapVideoFilter;

@interface EphemeralMedia : NSObject <SnapVideoFilterDelegate, MediaDataSource, MediaDelegate, MediaCacheInfoDataSource, MediaImageProcessingDelegate, NSCoding, MediaUploadDelegate>
{
    _Bool _infiniteDuration;
    _Bool _isLastLoopableStorySnap;
    _Bool _cameraFrontFacing;
    _Bool _forceTranscodeOnServer;
    _Bool _shouldIncludeLocationData;
    Media *_media;
    Media *_thumbnailMedia;
    NSURL *_mediaUploadURL;
    SCMEAddCheckinRequest *_checkinRequest;
    NSString *__id;
    NSString *_captionText;
    NSString *_attachmentUrl;
    long long _animatedSnapType;
    NSString *_clientId;
    NSString *_venueId;
    long long _ephemeralMediaState;
    NSDate *_firstPostDate;
    NSString *_geoFilterId;
    NSString *_encryptedGeoData;
    NSArray *_unlockablesVendorTags;
    NSArray *_allGeoFilterIds;
    NSString *_storyFilterId;
    NSString *_storyLensId;
    long long _geoFilterImpressions;
    CLLocation *_postLocation;
    CLLocation *_captureLocation;
    NSArray *_captureLocationHistory;
    NSString *_placeID;
    unsigned long long _numberOfTimesReloaded;
    double _time;
    double _timeStartedViewing;
    long long _type;
    SnapVideoFilter *_videoFilter;
    double _videoTimeSoFar;
    NSDate *_viewedTimestamp;
    long long _orientation;
    NSString *_ephemeralMediaKey;
    NSString *_ephemeralMediaIv;
    NSString *_gallerySnapId;
    EphemeralMediaDelegateAnnouncer *_delegateAnnouncer;
    NSString *_mediaChecksum;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCContextContextHint *_contextHint;
    NSArray *_notifiedUsernames;
    NSDictionary *_userTaggingInfo;
    SOJUMultiSnapMetadata *_multiSnapMetadata;
    SCR2StorySnapClientMetadata *_storySnapClientMetadata;
    NSData *_lensMetadata;
    NSString *_unlockablesSnapInfo;
    long long _sendSource;
    NSDate *_captureDate;
    long long _snapSource;
    SCCameraDeepLinkMetadata *_deepLinkMetadata;
    NSMutableDictionary *_secretShareLoggingParams;
    NSMutableDictionary *_shareLoggingParams;
    NSMutableDictionary *_eventLoggingParams;
    NSMutableArray *_viewingTimestamps;
    SCSnapVideoFilterState *_videoFilterState;
    NSString *_encryptedVenueId;
}

@property(copy, nonatomic) NSString *encryptedVenueId; // @synthesize encryptedVenueId=_encryptedVenueId;
@property(copy, nonatomic) SCSnapVideoFilterState *videoFilterState; // @synthesize videoFilterState=_videoFilterState;
@property(retain, nonatomic) NSMutableArray *viewingTimestamps; // @synthesize viewingTimestamps=_viewingTimestamps;
@property(retain, nonatomic) NSMutableDictionary *eventLoggingParams; // @synthesize eventLoggingParams=_eventLoggingParams;
@property(retain, nonatomic) NSMutableDictionary *shareLoggingParams; // @synthesize shareLoggingParams=_shareLoggingParams;
@property(retain, nonatomic) NSMutableDictionary *secretShareLoggingParams; // @synthesize secretShareLoggingParams=_secretShareLoggingParams;
@property(copy, nonatomic) SCCameraDeepLinkMetadata *deepLinkMetadata; // @synthesize deepLinkMetadata=_deepLinkMetadata;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(copy, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) long long sendSource; // @synthesize sendSource=_sendSource;
@property(copy, nonatomic) NSString *unlockablesSnapInfo; // @synthesize unlockablesSnapInfo=_unlockablesSnapInfo;
@property(copy, nonatomic) NSData *lensMetadata; // @synthesize lensMetadata=_lensMetadata;
@property(copy, nonatomic) SCR2StorySnapClientMetadata *storySnapClientMetadata; // @synthesize storySnapClientMetadata=_storySnapClientMetadata;
@property(retain, nonatomic) SOJUMultiSnapMetadata *multiSnapMetadata; // @synthesize multiSnapMetadata=_multiSnapMetadata;
@property(nonatomic) _Bool shouldIncludeLocationData; // @synthesize shouldIncludeLocationData=_shouldIncludeLocationData;
@property(retain, nonatomic) NSDictionary *userTaggingInfo; // @synthesize userTaggingInfo=_userTaggingInfo;
@property(retain, nonatomic) NSArray *notifiedUsernames; // @synthesize notifiedUsernames=_notifiedUsernames;
@property(retain, nonatomic) SCContextContextHint *contextHint; // @synthesize contextHint=_contextHint;
@property(copy, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(retain, nonatomic) NSString *mediaChecksum; // @synthesize mediaChecksum=_mediaChecksum;
@property(nonatomic) _Bool forceTranscodeOnServer; // @synthesize forceTranscodeOnServer=_forceTranscodeOnServer;
@property(retain, nonatomic) EphemeralMediaDelegateAnnouncer *delegateAnnouncer; // @synthesize delegateAnnouncer=_delegateAnnouncer;
@property(readonly, copy, nonatomic) NSString *gallerySnapId; // @synthesize gallerySnapId=_gallerySnapId;
@property(retain, nonatomic) NSString *ephemeralMediaIv; // @synthesize ephemeralMediaIv=_ephemeralMediaIv;
@property(retain, nonatomic) NSString *ephemeralMediaKey; // @synthesize ephemeralMediaKey=_ephemeralMediaKey;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool cameraFrontFacing; // @synthesize cameraFrontFacing=_cameraFrontFacing;
@property(retain, nonatomic) NSDate *viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
@property(nonatomic) double videoTimeSoFar; // @synthesize videoTimeSoFar=_videoTimeSoFar;
@property(retain, nonatomic) SnapVideoFilter *videoFilter; // @synthesize videoFilter=_videoFilter;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double timeStartedViewing; // @synthesize timeStartedViewing=_timeStartedViewing;
@property(nonatomic) _Bool isLastLoopableStorySnap; // @synthesize isLastLoopableStorySnap=_isLastLoopableStorySnap;
@property(nonatomic) _Bool infiniteDuration; // @synthesize infiniteDuration=_infiniteDuration;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long numberOfTimesReloaded; // @synthesize numberOfTimesReloaded=_numberOfTimesReloaded;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *captureLocationHistory; // @synthesize captureLocationHistory=_captureLocationHistory;
@property(retain, nonatomic) CLLocation *captureLocation; // @synthesize captureLocation=_captureLocation;
@property(retain, nonatomic) CLLocation *postLocation; // @synthesize postLocation=_postLocation;
@property(nonatomic) long long geoFilterImpressions; // @synthesize geoFilterImpressions=_geoFilterImpressions;
@property(retain, nonatomic) NSString *storyLensId; // @synthesize storyLensId=_storyLensId;
@property(retain, nonatomic) NSString *storyFilterId; // @synthesize storyFilterId=_storyFilterId;
@property(retain, nonatomic) NSArray *allGeoFilterIds; // @synthesize allGeoFilterIds=_allGeoFilterIds;
@property(retain, nonatomic) NSArray *unlockablesVendorTags; // @synthesize unlockablesVendorTags=_unlockablesVendorTags;
@property(retain, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(retain, nonatomic) NSString *geoFilterId; // @synthesize geoFilterId=_geoFilterId;
@property(retain, nonatomic) NSDate *firstPostDate; // @synthesize firstPostDate=_firstPostDate;
@property(nonatomic) long long ephemeralMediaState; // @synthesize ephemeralMediaState=_ephemeralMediaState;
@property(copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) long long animatedSnapType; // @synthesize animatedSnapType=_animatedSnapType;
@property(copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(retain, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(retain, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(copy, nonatomic) SCMEAddCheckinRequest *checkinRequest; // @synthesize checkinRequest=_checkinRequest;
- (void).cxx_destruct;
- (_Bool)withAnimatedForODP;
- (void)fallbackToSendAsImageWithFilter:(id)arg1 error:(id)arg2;
- (id)requestKeyWithIds;
- (void)markViewingTimestamp;
- (id)logId;
- (_Bool)timeToSendHasExpired;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
- (void)_resumeWithMediaOrchestrationId:(id)arg1;
- (void)_uploadWithMediaOrchestrator;
- (void)uploadMedia;
- (id)username;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)regenerateKeyIvIfNeeded;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (void)mediaUploadDidStart:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (id)uploadRequestKeyForMedia:(id)arg1;
- (id)uploadMediaIdForMedia:(id)arg1;
- (_Bool)isAudioStitch;
- (_Bool)isPsychomantis;
- (_Bool)isSpectaclesVideo;
- (_Bool)isVideoStreaming;
- (_Bool)isImage;
- (_Bool)isVideoWithSound;
- (_Bool)isVideoWithNoSound;
- (_Bool)isVideo;
- (_Bool)isMediaAlreadyEncrypted:(id)arg1;
- (_Bool)shouldEncryptOnDiskForMedia:(id)arg1;
- (id)encryptionIvForMedia:(id)arg1;
- (id)encryptionKeyForMedia:(id)arg1;
- (id)expirationForMedia:(id)arg1;
- (id)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (id)mediaIdForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
@property(retain, nonatomic) NSURL *mediaUploadURL; // @synthesize mediaUploadURL=_mediaUploadURL;
- (void)targetSetVideoFilter:(id)arg1;
@property(retain, nonatomic) Media *thumbnailMedia; // @synthesize thumbnailMedia=_thumbnailMedia;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
- (void)didDecodeObject;
- (void)willEncodeObject;
- (void)_ephemeralMediaDidDecodeObject;
- (void)_ephemeralMediaWillEncodeObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggingParametersForEvent:(id)arg1;
- (void)setLoggingParameters:(id)arg1 forEvent:(id)arg2;
- (void)addEventLoggingParameters:(id)arg1;
- (id)eventLoggingParameters;
- (id)secretShareLoggingParameters;
- (void)addSecretShareLoggingParameters:(id)arg1;
- (id)shareLoggingParameters;
- (void)addShareLoggingParameters:(id)arg1;
- (id)typeParams;
- (id)initWithGallerySnap:(id)arg1 clientId:(id)arg2;
- (id)initWithGallerySnap:(id)arg1;
- (id)initWithClientId;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (void)videoProcessingDidFinishMultiSnapOverlay:(id)arg1;
- (void)setMentionedUserIds:(id)arg1 usernames:(id)arg2 sources:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

