//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapVideoFilterState.h"

@class NSArray, NSData, NSString, NSURL, SCCroppingState, SCSnapVideoFilterAudioState, SCSnapVideoFilterMultiSnapSegmentState;

@interface SCSnapVideoFilterState : NSObject <SCSnapVideoFilterState>
{
    _Bool _useOverlayImageAsMask;
    _Bool _highQuality;
    _Bool _audioEnabled;
    _Bool _videoCircleRenderer;
    _Bool _videoCircleColorBlack;
    _Bool _videoCircleMask;
    int _cameraDirection;
    unsigned long long _mediaSource;
    unsigned long long _mediaDestination;
    NSString *_uuid;
    NSString *_transcodingTaskId;
    NSURL *_videoURL;
    NSData *_overridingAudioData;
    NSString *_filterName;
    long long _overlayImageFileSizeBits;
    NSData *_thumbnailData;
    NSURL *_overlayImageURL;
    NSData *_overlayImagePNGData;
    NSData *_overlayImageForThumbnailPNGData;
    double _videoPlaybackRate;
    double _videoTargetAspectRatio;
    long long _videoTargetOrientation;
    long long _thumbnailOrientation;
    NSArray *_videoTrackedImageStates;
    SCSnapVideoFilterAudioState *_audioState;
    NSArray *_timeRanges;
    SCCroppingState *_croppingState;
    double _croppingAspectRatio;
    SCSnapVideoFilterMultiSnapSegmentState *_multiSnapSegmentState;
    NSString *_drawingData;
    NSData *_snapImagePNGData;
    double _imageDuration;
    long long _frameRate;
    long long _bitrate;
    long long _qualityLevel;
    long long _snapSource;
    struct CGSize _videoCirclePadding;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) int cameraDirection; // @synthesize cameraDirection=_cameraDirection;
@property(readonly, nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(readonly, nonatomic) long long qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(readonly, nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) double imageDuration; // @synthesize imageDuration=_imageDuration;
@property(readonly, copy, nonatomic) NSData *snapImagePNGData; // @synthesize snapImagePNGData=_snapImagePNGData;
@property(readonly, copy, nonatomic) NSString *drawingData; // @synthesize drawingData=_drawingData;
@property(readonly, copy, nonatomic) SCSnapVideoFilterMultiSnapSegmentState *multiSnapSegmentState; // @synthesize multiSnapSegmentState=_multiSnapSegmentState;
@property(readonly, nonatomic) double croppingAspectRatio; // @synthesize croppingAspectRatio=_croppingAspectRatio;
@property(readonly, copy, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(readonly, copy, nonatomic) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
@property(readonly, nonatomic) _Bool videoCircleMask; // @synthesize videoCircleMask=_videoCircleMask;
@property(readonly, nonatomic) struct CGSize videoCirclePadding; // @synthesize videoCirclePadding=_videoCirclePadding;
@property(readonly, nonatomic) _Bool videoCircleColorBlack; // @synthesize videoCircleColorBlack=_videoCircleColorBlack;
@property(readonly, nonatomic) _Bool videoCircleRenderer; // @synthesize videoCircleRenderer=_videoCircleRenderer;
@property(readonly, copy, nonatomic) SCSnapVideoFilterAudioState *audioState; // @synthesize audioState=_audioState;
@property(readonly, copy, nonatomic) NSArray *videoTrackedImageStates; // @synthesize videoTrackedImageStates=_videoTrackedImageStates;
@property(readonly, nonatomic) long long thumbnailOrientation; // @synthesize thumbnailOrientation=_thumbnailOrientation;
@property(readonly, nonatomic) long long videoTargetOrientation; // @synthesize videoTargetOrientation=_videoTargetOrientation;
@property(readonly, nonatomic) double videoTargetAspectRatio; // @synthesize videoTargetAspectRatio=_videoTargetAspectRatio;
@property(readonly, nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) _Bool highQuality; // @synthesize highQuality=_highQuality;
@property(readonly, copy, nonatomic) NSData *overlayImageForThumbnailPNGData; // @synthesize overlayImageForThumbnailPNGData=_overlayImageForThumbnailPNGData;
@property(readonly, copy, nonatomic) NSData *overlayImagePNGData; // @synthesize overlayImagePNGData=_overlayImagePNGData;
@property(readonly, copy, nonatomic) NSURL *overlayImageURL; // @synthesize overlayImageURL=_overlayImageURL;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, nonatomic) long long overlayImageFileSizeBits; // @synthesize overlayImageFileSizeBits=_overlayImageFileSizeBits;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(readonly, nonatomic) _Bool useOverlayImageAsMask; // @synthesize useOverlayImageAsMask=_useOverlayImageAsMask;
@property(readonly, copy, nonatomic) NSData *overridingAudioData; // @synthesize overridingAudioData=_overridingAudioData;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSString *transcodingTaskId; // @synthesize transcodingTaskId=_transcodingTaskId;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(readonly, nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaSource:(unsigned long long)arg1 mediaDestination:(unsigned long long)arg2 uuid:(id)arg3 transcodingTaskId:(id)arg4 videoURL:(id)arg5 overridingAudioData:(id)arg6 useOverlayImageAsMask:(_Bool)arg7 filterName:(id)arg8 overlayImageFileSizeBits:(long long)arg9 thumbnailData:(id)arg10 overlayImageURL:(id)arg11 overlayImagePNGData:(id)arg12 overlayImageForThumbnailPNGData:(id)arg13 highQuality:(_Bool)arg14 audioEnabled:(_Bool)arg15 videoPlaybackRate:(double)arg16 videoTargetAspectRatio:(double)arg17 videoTargetOrientation:(long long)arg18 thumbnailOrientation:(long long)arg19 videoTrackedImageStates:(id)arg20 audioState:(id)arg21 videoCircleRenderer:(_Bool)arg22 videoCircleColorBlack:(_Bool)arg23 videoCirclePadding:(struct CGSize)arg24 videoCircleMask:(_Bool)arg25 timeRanges:(id)arg26 croppingState:(id)arg27 croppingAspectRatio:(double)arg28 multiSnapSegmentState:(id)arg29 drawingData:(id)arg30 snapImagePNGData:(id)arg31 imageDuration:(double)arg32 frameRate:(long long)arg33 bitrate:(long long)arg34 qualityLevel:(long long)arg35 snapSource:(long long)arg36 cameraDirection:(int)arg37;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

