//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUMessageParcel.h"

@class NSArray, NSData, NSString;

@interface SOJUMessageParcel : NSObject <SOJUMessageParcel>
{
    NSString *_idValue;
    NSString *_type;
    NSString *_contents;
    NSData *_payloadDeprecated;
    NSArray *_media;
    NSString *_tag;
    NSString *_tagVersion;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *tagVersion; // @synthesize tagVersion=_tagVersion;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSArray *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSData *payloadDeprecated; // @synthesize payloadDeprecated=_payloadDeprecated;
@property(readonly, copy, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
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
- (id)initWithIdValue:(id)arg1 type:(id)arg2 contents:(id)arg3 payloadDeprecated:(id)arg4 media:(id)arg5 tag:(id)arg6 tagVersion:(id)arg7;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

