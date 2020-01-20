//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUConversationMessageResponse.h"

@class NSNumber, NSString;

@interface SOJUConversationMessageResponse : NSObject <SOJUConversationMessageResponse>
{
    NSString *_type;
    NSString *_idValue;
    NSString *_appEngineTarget;
    NSNumber *_success;
    NSString *_ackId;
    NSString *_convId;
    NSString *_failureReason;
    NSNumber *_timestamp;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, copy, nonatomic) NSString *convId; // @synthesize convId=_convId;
@property(readonly, copy, nonatomic) NSString *ackId; // @synthesize ackId=_ackId;
@property(readonly, copy, nonatomic) NSNumber *success; // @synthesize success=_success;
@property(readonly, copy, nonatomic) NSString *appEngineTarget; // @synthesize appEngineTarget=_appEngineTarget;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
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
- (id)initWithType:(id)arg1 idValue:(id)arg2 appEngineTarget:(id)arg3 success:(id)arg4 ackId:(id)arg5 convId:(id)arg6 failureReason:(id)arg7 timestamp:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)timestampValue;
- (long long)failureReasonEnum;
- (_Bool)successValue;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

