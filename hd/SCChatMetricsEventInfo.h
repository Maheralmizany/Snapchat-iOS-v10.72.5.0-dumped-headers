//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMetricsEventInfo.h"

@class NSArray, NSDate, NSNumber, NSString, SCABloopsChatChatSendMetadata, SCACreativeKitSnapMetadata;

@interface SCChatMetricsEventInfo : NSObject <SCChatMetricsEventInfo>
{
    _Bool _isForwarded;
    NSArray *_mischiefIds;
    NSNumber *_userPresentCount;
    NSNumber *_recipientCount;
    NSArray *_recipientUsernames;
    NSDate *_releaseTimestamp;
    NSString *_sourceStickerPack;
    long long _sourceDrawerPosition;
    long long _sourceDrawerViewMode;
    NSNumber *_durationInSeconds;
    id _snapCommonLoggingParameters;
    long long _chatSource;
    long long _pageSource;
    long long _mediaDrawerTab;
    long long _stickerSource;
    SCACreativeKitSnapMetadata *_creativeKitMetadata;
    SCABloopsChatChatSendMetadata *_bloopsChatChatSendMetadata;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) SCABloopsChatChatSendMetadata *bloopsChatChatSendMetadata; // @synthesize bloopsChatChatSendMetadata=_bloopsChatChatSendMetadata;
@property(readonly, copy, nonatomic) SCACreativeKitSnapMetadata *creativeKitMetadata; // @synthesize creativeKitMetadata=_creativeKitMetadata;
@property(readonly, nonatomic) _Bool isForwarded; // @synthesize isForwarded=_isForwarded;
@property(readonly, nonatomic) long long stickerSource; // @synthesize stickerSource=_stickerSource;
@property(readonly, nonatomic) long long mediaDrawerTab; // @synthesize mediaDrawerTab=_mediaDrawerTab;
@property(readonly, nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
@property(readonly, nonatomic) long long chatSource; // @synthesize chatSource=_chatSource;
@property(readonly, nonatomic) id snapCommonLoggingParameters; // @synthesize snapCommonLoggingParameters=_snapCommonLoggingParameters;
@property(readonly, copy, nonatomic) NSNumber *durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, nonatomic) long long sourceDrawerViewMode; // @synthesize sourceDrawerViewMode=_sourceDrawerViewMode;
@property(readonly, nonatomic) long long sourceDrawerPosition; // @synthesize sourceDrawerPosition=_sourceDrawerPosition;
@property(readonly, copy, nonatomic) NSString *sourceStickerPack; // @synthesize sourceStickerPack=_sourceStickerPack;
@property(readonly, copy, nonatomic) NSDate *releaseTimestamp; // @synthesize releaseTimestamp=_releaseTimestamp;
@property(readonly, copy, nonatomic) NSArray *recipientUsernames; // @synthesize recipientUsernames=_recipientUsernames;
@property(readonly, copy, nonatomic) NSNumber *recipientCount; // @synthesize recipientCount=_recipientCount;
@property(readonly, copy, nonatomic) NSNumber *userPresentCount; // @synthesize userPresentCount=_userPresentCount;
@property(readonly, copy, nonatomic) NSArray *mischiefIds; // @synthesize mischiefIds=_mischiefIds;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
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
- (id)initWithMischiefIds:(id)arg1 userPresentCount:(id)arg2 recipientCount:(id)arg3 recipientUsernames:(id)arg4 releaseTimestamp:(id)arg5 sourceStickerPack:(id)arg6 sourceDrawerPosition:(long long)arg7 sourceDrawerViewMode:(long long)arg8 durationInSeconds:(id)arg9 snapCommonLoggingParameters:(id)arg10 chatSource:(long long)arg11 pageSource:(long long)arg12 mediaDrawerTab:(long long)arg13 stickerSource:(long long)arg14 isForwarded:(_Bool)arg15 creativeKitMetadata:(id)arg16 bloopsChatChatSendMetadata:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
