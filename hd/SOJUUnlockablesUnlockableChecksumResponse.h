//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUnlockablesUnlockableChecksumResponse.h"

@class NSData, NSNumber, NSString;

@interface SOJUUnlockablesUnlockableChecksumResponse : NSObject <SOJUUnlockablesUnlockableChecksumResponse>
{
    NSNumber *_idValue;
    NSData *_checksum;
    NSNumber *_clientCacheTtlMinutes;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *clientCacheTtlMinutes; // @synthesize clientCacheTtlMinutes=_clientCacheTtlMinutes;
@property(readonly, copy, nonatomic) NSData *checksum; // @synthesize checksum=_checksum;
@property(readonly, copy, nonatomic) NSNumber *idValue; // @synthesize idValue=_idValue;
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
- (id)initWithIdValue:(id)arg1 checksum:(id)arg2 clientCacheTtlMinutes:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)clientCacheTtlMinutesValue;
- (long long)idValueValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

