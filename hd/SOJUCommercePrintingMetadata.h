//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCommercePrintingMetadata.h"

@class NSString;

@interface SOJUCommercePrintingMetadata : NSObject <SOJUCommercePrintingMetadata>
{
    NSString *_snapId;
    NSString *_encryptionKey;
    NSString *_encryptionIv;
    NSString *_url;
    NSString *_requestId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *encryptionIv; // @synthesize encryptionIv=_encryptionIv;
@property(readonly, copy, nonatomic) NSString *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
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
- (id)initWithSnapId:(id)arg1 encryptionKey:(id)arg2 encryptionIv:(id)arg3 url:(id)arg4 requestId:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
