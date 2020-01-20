//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStickerSearchMetadata.h"

@class NSDictionary, NSString;

@interface SOJUStickerSearchMetadata : NSObject <SOJUStickerSearchMetadata>
{
    NSDictionary *_stickerTags;
    NSDictionary *_emojiTags;
    NSDictionary *_synonyms;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSDictionary *synonyms; // @synthesize synonyms=_synonyms;
@property(readonly, copy, nonatomic) NSDictionary *emojiTags; // @synthesize emojiTags=_emojiTags;
@property(readonly, copy, nonatomic) NSDictionary *stickerTags; // @synthesize stickerTags=_stickerTags;
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
- (id)initWithStickerTags:(id)arg1 emojiTags:(id)arg2 synonyms:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

