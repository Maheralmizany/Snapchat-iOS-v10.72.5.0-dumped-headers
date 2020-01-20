//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJULastChatActions.h"

@class NSNumber, NSString;

@interface SOJULastChatActions : NSObject <SOJULastChatActions>
{
    NSString *_lastReader;
    NSNumber *_lastReadTimestamp;
    NSString *_lastWriter;
    NSNumber *_lastWriteTimestamp;
    NSString *_lastWriteType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *lastWriteType; // @synthesize lastWriteType=_lastWriteType;
@property(readonly, copy, nonatomic) NSNumber *lastWriteTimestamp; // @synthesize lastWriteTimestamp=_lastWriteTimestamp;
@property(readonly, copy, nonatomic) NSString *lastWriter; // @synthesize lastWriter=_lastWriter;
@property(readonly, copy, nonatomic) NSNumber *lastReadTimestamp; // @synthesize lastReadTimestamp=_lastReadTimestamp;
@property(readonly, copy, nonatomic) NSString *lastReader; // @synthesize lastReader=_lastReader;
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
- (id)initWithLastReader:(id)arg1 lastReadTimestamp:(id)arg2 lastWriter:(id)arg3 lastWriteTimestamp:(id)arg4 lastWriteType:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)lastWriteTimestampValue;
- (long long)lastReadTimestampValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

