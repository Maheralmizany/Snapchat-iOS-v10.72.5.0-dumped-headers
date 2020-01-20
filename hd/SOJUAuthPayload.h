//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUAuthPayload.h"

@class NSString;

@interface SOJUAuthPayload : NSObject <SOJUAuthPayload>
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *reqToken; // @synthesize reqToken=_reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
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
- (id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

