//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUChatv3SnapStateMessage.h"

@class NSDictionary, NSNumber, NSString, SOJUHeader;

@interface SOJUChatv3SnapStateMessage : NSObject <SOJUChatv3SnapStateMessage>
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSDictionary *_knownChatSequenceNumbers;
    NSNumber *_mischiefVersion;
    NSNumber *_seqNum;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSString *_chatMessageId;
    NSString *_state;
    NSNumber *_screenshotCount;
    NSString *_senderChatMediaId;
    NSNumber *_openTimestamp;
    NSNumber *_screenCaptureShotCount;
    NSNumber *_screenCaptureRecordingCount;
    NSNumber *_chatMessageSeqNum;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *chatMessageSeqNum; // @synthesize chatMessageSeqNum=_chatMessageSeqNum;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureRecordingCount; // @synthesize screenCaptureRecordingCount=_screenCaptureRecordingCount;
@property(readonly, copy, nonatomic) NSNumber *screenCaptureShotCount; // @synthesize screenCaptureShotCount=_screenCaptureShotCount;
@property(readonly, copy, nonatomic) NSNumber *openTimestamp; // @synthesize openTimestamp=_openTimestamp;
@property(readonly, copy, nonatomic) NSString *senderChatMediaId; // @synthesize senderChatMediaId=_senderChatMediaId;
@property(readonly, copy, nonatomic) NSNumber *screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *chatMessageId; // @synthesize chatMessageId=_chatMessageId;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSNumber *seqNum; // @synthesize seqNum=_seqNum;
@property(readonly, copy, nonatomic) NSNumber *mischiefVersion; // @synthesize mischiefVersion=_mischiefVersion;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNumbers; // @synthesize knownChatSequenceNumbers=_knownChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *retried; // @synthesize retried=_retried;
@property(readonly, copy, nonatomic) SOJUHeader *header; // @synthesize header=_header;
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
- (id)initWithHeader:(id)arg1 retried:(id)arg2 knownChatSequenceNumbers:(id)arg3 mischiefVersion:(id)arg4 seqNum:(id)arg5 timestamp:(id)arg6 type:(id)arg7 idValue:(id)arg8 appEngineTarget:(id)arg9 chatMessageId:(id)arg10 state:(id)arg11 screenshotCount:(id)arg12 senderChatMediaId:(id)arg13 openTimestamp:(id)arg14 screenCaptureShotCount:(id)arg15 screenCaptureRecordingCount:(id)arg16 chatMessageSeqNum:(id)arg17;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)chatMessageSeqNumValue;
- (long long)screenCaptureRecordingCountValue;
- (long long)screenCaptureShotCountValue;
- (long long)openTimestampValue;
- (long long)screenshotCountValue;
- (long long)stateEnum;
- (long long)typeEnum;
- (long long)timestampValue;
- (long long)seqNumValue;
- (long long)mischiefVersionValue;
- (_Bool)retriedValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

