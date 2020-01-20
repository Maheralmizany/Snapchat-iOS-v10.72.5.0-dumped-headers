//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdRemoteWebpageImpressionTrack.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdRemoteWebpageImpressionTrack : NSObject <SOJUAdRemoteWebpageImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_loadedOnEntry;
    NSNumber *_loadedOnExit;
    NSNumber *_visibleLoadTime;
    NSNumber *_deepLinkAppCount;
    NSNumber *_deepLinkedToAppInstallCount;
    NSNumber *_deepLinkedToAppInstallErrorCount;
    NSNumber *_swipeCount;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
    NSNumber *_longformAudioPlaybackVolume;
    NSNumber *_topsnapTimeViewedBeforeInteractionSeconds;
    SOJUAdTopsnapVolumes *_topsnapVolumes;
    NSNumber *_topsnapMaxContinuousTimeViewedSeconds;
    NSNumber *_topsnapAudibleTimeViewedSeconds;
    NSString *_topsnapMediaType;
    NSNumber *_pixelCookieSet;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *pixelCookieSet; // @synthesize pixelCookieSet=_pixelCookieSet;
@property(readonly, copy, nonatomic) NSString *topsnapMediaType; // @synthesize topsnapMediaType=_topsnapMediaType;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds; // @synthesize topsnapAudibleTimeViewedSeconds=_topsnapAudibleTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds; // @synthesize topsnapMaxContinuousTimeViewedSeconds=_topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes; // @synthesize topsnapVolumes=_topsnapVolumes;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds; // @synthesize topsnapTimeViewedBeforeInteractionSeconds=_topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, copy, nonatomic) NSNumber *longformAudioPlaybackVolume; // @synthesize longformAudioPlaybackVolume=_longformAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(readonly, copy, nonatomic) NSNumber *swipeCount; // @synthesize swipeCount=_swipeCount;
@property(readonly, copy, nonatomic) NSNumber *deepLinkedToAppInstallErrorCount; // @synthesize deepLinkedToAppInstallErrorCount=_deepLinkedToAppInstallErrorCount;
@property(readonly, copy, nonatomic) NSNumber *deepLinkedToAppInstallCount; // @synthesize deepLinkedToAppInstallCount=_deepLinkedToAppInstallCount;
@property(readonly, copy, nonatomic) NSNumber *deepLinkAppCount; // @synthesize deepLinkAppCount=_deepLinkAppCount;
@property(readonly, copy, nonatomic) NSNumber *visibleLoadTime; // @synthesize visibleLoadTime=_visibleLoadTime;
@property(readonly, copy, nonatomic) NSNumber *loadedOnExit; // @synthesize loadedOnExit=_loadedOnExit;
@property(readonly, copy, nonatomic) NSNumber *loadedOnEntry; // @synthesize loadedOnEntry=_loadedOnEntry;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds;
@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 longformTimeViewedSeconds:(id)arg3 swiped:(id)arg4 renderedTimestampInMilliSeconds:(id)arg5 deltaBetweenReceiveAndRenderMillis:(id)arg6 loadedOnEntry:(id)arg7 loadedOnExit:(id)arg8 visibleLoadTime:(id)arg9 deepLinkAppCount:(id)arg10 deepLinkedToAppInstallCount:(id)arg11 deepLinkedToAppInstallErrorCount:(id)arg12 swipeCount:(id)arg13 creativeId:(id)arg14 topsnapAudioPlaybackVolume:(id)arg15 longformAudioPlaybackVolume:(id)arg16 topsnapTimeViewedBeforeInteractionSeconds:(id)arg17 topsnapVolumes:(id)arg18 topsnapMaxContinuousTimeViewedSeconds:(id)arg19 topsnapAudibleTimeViewedSeconds:(id)arg20 topsnapMediaType:(id)arg21 pixelCookieSet:(id)arg22;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)pixelCookieSetValue;
- (long long)topsnapMediaTypeEnum;
- (float)topsnapAudibleTimeViewedSecondsValue;
- (float)topsnapMaxContinuousTimeViewedSecondsValue;
- (float)topsnapTimeViewedBeforeInteractionSecondsValue;
- (float)longformAudioPlaybackVolumeValue;
- (float)topsnapAudioPlaybackVolumeValue;
- (int)swipeCountValue;
- (int)deepLinkedToAppInstallErrorCountValue;
- (int)deepLinkedToAppInstallCountValue;
- (int)deepLinkAppCountValue;
- (float)visibleLoadTimeValue;
- (_Bool)loadedOnExitValue;
- (_Bool)loadedOnEntryValue;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
- (long long)renderedTimestampInMilliSecondsValue;
- (_Bool)swipedValue;
- (float)longformTimeViewedSecondsValue;
- (float)topsnapMediaDurationSecondsValue;
- (float)topsnapTimeViewedSecondsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

