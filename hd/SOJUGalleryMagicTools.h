//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryMagicTools.h"

@class NSArray, NSNumber, NSString, SOJUPurikuraMetadataResponse;

@interface SOJUGalleryMagicTools : NSObject <SOJUGalleryMagicTools>
{
    NSNumber *_totalEditCount;
    NSNumber *_finalEditCount;
    NSNumber *_resetCount;
    NSNumber *_sessionCount;
    NSNumber *_hasMagicImage;
    NSArray *_magicToolMetadata;
    NSString *_finalEditSequence;
    SOJUPurikuraMetadataResponse *_purikuraMetadata;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUPurikuraMetadataResponse *purikuraMetadata; // @synthesize purikuraMetadata=_purikuraMetadata;
@property(readonly, copy, nonatomic) NSString *finalEditSequence; // @synthesize finalEditSequence=_finalEditSequence;
@property(readonly, copy, nonatomic) NSArray *magicToolMetadata; // @synthesize magicToolMetadata=_magicToolMetadata;
@property(readonly, copy, nonatomic) NSNumber *hasMagicImage; // @synthesize hasMagicImage=_hasMagicImage;
@property(readonly, copy, nonatomic) NSNumber *sessionCount; // @synthesize sessionCount=_sessionCount;
@property(readonly, copy, nonatomic) NSNumber *resetCount; // @synthesize resetCount=_resetCount;
@property(readonly, copy, nonatomic) NSNumber *finalEditCount; // @synthesize finalEditCount=_finalEditCount;
@property(readonly, copy, nonatomic) NSNumber *totalEditCount; // @synthesize totalEditCount=_totalEditCount;
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
- (id)initWithTotalEditCount:(id)arg1 finalEditCount:(id)arg2 resetCount:(id)arg3 sessionCount:(id)arg4 hasMagicImage:(id)arg5 magicToolMetadata:(id)arg6 finalEditSequence:(id)arg7 purikuraMetadata:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)hasMagicImageValue;
- (int)sessionCountValue;
- (int)resetCountValue;
- (int)finalEditCountValue;
- (int)totalEditCountValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

