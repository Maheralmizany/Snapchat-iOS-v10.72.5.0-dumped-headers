//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAdFilterImpressionTrack.h"

@class NSNumber, NSString, SOJUAdAdFlagData, SOJUAdUnlockableAttachmentImpression;

@interface SOJUAdFilterImpressionTrack : NSObject <SOJUAdFilterImpressionTrack>
{
    NSString *_geofilterId;
    NSNumber *_totalSwipedViewMillis;
    NSString *_encGeoData;
    NSNumber *_swipedOverCount;
    NSNumber *_withSnapSend;
    NSNumber *_withStoryPost;
    NSNumber *_withMemoriesSave;
    NSNumber *_filterIndexPos;
    NSString *_geofilterType;
    NSString *_rawAdData;
    NSNumber *_filterGeofilterIndexPos;
    NSNumber *_firstSeenTimestamp;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_rankingId;
    NSString *_rankingData;
    NSNumber *_snapSendRecipientCount;
    NSNumber *_snapSendCount;
    NSNumber *_storyPostCount;
    NSNumber *_memoriesSaveCount;
    NSNumber *_captureTimeMillis;
    NSNumber *_postCaptureTimeMillis;
    NSNumber *_maxSwipeTimeMillis;
    NSNumber *_maxContinuousTimeMillis;
    NSNumber *_totalTimeMillis;
    NSNumber *_reactionTimestamp;
    NSNumber *_shareTimestamp;
    NSNumber *_swipeUpTimestamp;
    NSNumber *_saveTimestamp;
    NSNumber *_screenshotTimestamp;
    SOJUAdUnlockableAttachmentImpression *_attachmentImpression;
    NSNumber *_withAttachmentOpen;
    NSString *_attachmentType;
    SOJUAdAdFlagData *_adFlagData;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUAdAdFlagData *adFlagData; // @synthesize adFlagData=_adFlagData;
@property(readonly, copy, nonatomic) NSString *attachmentType; // @synthesize attachmentType=_attachmentType;
@property(readonly, copy, nonatomic) NSNumber *withAttachmentOpen; // @synthesize withAttachmentOpen=_withAttachmentOpen;
@property(readonly, copy, nonatomic) SOJUAdUnlockableAttachmentImpression *attachmentImpression; // @synthesize attachmentImpression=_attachmentImpression;
@property(readonly, copy, nonatomic) NSNumber *screenshotTimestamp; // @synthesize screenshotTimestamp=_screenshotTimestamp;
@property(readonly, copy, nonatomic) NSNumber *saveTimestamp; // @synthesize saveTimestamp=_saveTimestamp;
@property(readonly, copy, nonatomic) NSNumber *swipeUpTimestamp; // @synthesize swipeUpTimestamp=_swipeUpTimestamp;
@property(readonly, copy, nonatomic) NSNumber *shareTimestamp; // @synthesize shareTimestamp=_shareTimestamp;
@property(readonly, copy, nonatomic) NSNumber *reactionTimestamp; // @synthesize reactionTimestamp=_reactionTimestamp;
@property(readonly, copy, nonatomic) NSNumber *totalTimeMillis; // @synthesize totalTimeMillis=_totalTimeMillis;
@property(readonly, copy, nonatomic) NSNumber *maxContinuousTimeMillis; // @synthesize maxContinuousTimeMillis=_maxContinuousTimeMillis;
@property(readonly, copy, nonatomic) NSNumber *maxSwipeTimeMillis; // @synthesize maxSwipeTimeMillis=_maxSwipeTimeMillis;
@property(readonly, copy, nonatomic) NSNumber *postCaptureTimeMillis; // @synthesize postCaptureTimeMillis=_postCaptureTimeMillis;
@property(readonly, copy, nonatomic) NSNumber *captureTimeMillis; // @synthesize captureTimeMillis=_captureTimeMillis;
@property(readonly, copy, nonatomic) NSNumber *memoriesSaveCount; // @synthesize memoriesSaveCount=_memoriesSaveCount;
@property(readonly, copy, nonatomic) NSNumber *storyPostCount; // @synthesize storyPostCount=_storyPostCount;
@property(readonly, copy, nonatomic) NSNumber *snapSendCount; // @synthesize snapSendCount=_snapSendCount;
@property(readonly, copy, nonatomic) NSNumber *snapSendRecipientCount; // @synthesize snapSendRecipientCount=_snapSendRecipientCount;
@property(readonly, copy, nonatomic) NSString *rankingData; // @synthesize rankingData=_rankingData;
@property(readonly, copy, nonatomic) NSString *rankingId; // @synthesize rankingId=_rankingId;
@property(readonly, copy, nonatomic) NSString *encryptedSponsoredUnlockableTargetingInfoData; // @synthesize encryptedSponsoredUnlockableTargetingInfoData=_encryptedSponsoredUnlockableTargetingInfoData;
@property(readonly, copy, nonatomic) NSNumber *firstSeenTimestamp; // @synthesize firstSeenTimestamp=_firstSeenTimestamp;
@property(readonly, copy, nonatomic) NSNumber *filterGeofilterIndexPos; // @synthesize filterGeofilterIndexPos=_filterGeofilterIndexPos;
@property(readonly, copy, nonatomic) NSString *rawAdData; // @synthesize rawAdData=_rawAdData;
@property(readonly, copy, nonatomic) NSString *geofilterType; // @synthesize geofilterType=_geofilterType;
@property(readonly, copy, nonatomic) NSNumber *filterIndexPos; // @synthesize filterIndexPos=_filterIndexPos;
@property(readonly, copy, nonatomic) NSNumber *withMemoriesSave; // @synthesize withMemoriesSave=_withMemoriesSave;
@property(readonly, copy, nonatomic) NSNumber *withStoryPost; // @synthesize withStoryPost=_withStoryPost;
@property(readonly, copy, nonatomic) NSNumber *withSnapSend; // @synthesize withSnapSend=_withSnapSend;
@property(readonly, copy, nonatomic) NSNumber *swipedOverCount; // @synthesize swipedOverCount=_swipedOverCount;
@property(readonly, copy, nonatomic) NSString *encGeoData; // @synthesize encGeoData=_encGeoData;
@property(readonly, copy, nonatomic) NSNumber *totalSwipedViewMillis; // @synthesize totalSwipedViewMillis=_totalSwipedViewMillis;
@property(readonly, copy, nonatomic) NSString *geofilterId; // @synthesize geofilterId=_geofilterId;
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
- (id)initWithGeofilterId:(id)arg1 totalSwipedViewMillis:(id)arg2 encGeoData:(id)arg3 swipedOverCount:(id)arg4 withSnapSend:(id)arg5 withStoryPost:(id)arg6 withMemoriesSave:(id)arg7 filterIndexPos:(id)arg8 geofilterType:(id)arg9 rawAdData:(id)arg10 filterGeofilterIndexPos:(id)arg11 firstSeenTimestamp:(id)arg12 encryptedSponsoredUnlockableTargetingInfoData:(id)arg13 rankingId:(id)arg14 rankingData:(id)arg15 snapSendRecipientCount:(id)arg16 snapSendCount:(id)arg17 storyPostCount:(id)arg18 memoriesSaveCount:(id)arg19 captureTimeMillis:(id)arg20 postCaptureTimeMillis:(id)arg21 maxSwipeTimeMillis:(id)arg22 maxContinuousTimeMillis:(id)arg23 totalTimeMillis:(id)arg24 reactionTimestamp:(id)arg25 shareTimestamp:(id)arg26 swipeUpTimestamp:(id)arg27 saveTimestamp:(id)arg28 screenshotTimestamp:(id)arg29 attachmentImpression:(id)arg30 withAttachmentOpen:(id)arg31 attachmentType:(id)arg32 adFlagData:(id)arg33;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)attachmentTypeEnum;
- (_Bool)withAttachmentOpenValue;
- (long long)screenshotTimestampValue;
- (long long)saveTimestampValue;
- (long long)swipeUpTimestampValue;
- (long long)shareTimestampValue;
- (long long)reactionTimestampValue;
- (long long)totalTimeMillisValue;
- (long long)maxContinuousTimeMillisValue;
- (long long)maxSwipeTimeMillisValue;
- (long long)postCaptureTimeMillisValue;
- (long long)captureTimeMillisValue;
- (long long)memoriesSaveCountValue;
- (long long)storyPostCountValue;
- (long long)snapSendCountValue;
- (long long)snapSendRecipientCountValue;
- (long long)firstSeenTimestampValue;
- (long long)filterGeofilterIndexPosValue;
- (long long)geofilterTypeEnum;
- (long long)filterIndexPosValue;
- (_Bool)withMemoriesSaveValue;
- (_Bool)withStoryPostValue;
- (_Bool)withSnapSendValue;
- (long long)swipedOverCountValue;
- (long long)totalSwipedViewMillisValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

