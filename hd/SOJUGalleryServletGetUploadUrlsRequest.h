//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUGalleryServletGetUploadUrlsRequest.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletGetUploadUrlsRequest : NSObject <SOJUGalleryServletGetUploadUrlsRequest>
{
    NSArray *_ids;
    NSNumber *_type;
    NSNumber *_storageVersionDeprecated;
    NSString *_storageType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *storageType; // @synthesize storageType=_storageType;
@property(readonly, copy, nonatomic) NSNumber *storageVersionDeprecated; // @synthesize storageVersionDeprecated=_storageVersionDeprecated;
@property(readonly, copy, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *ids; // @synthesize ids=_ids;
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
- (id)initWithIds:(id)arg1 type:(id)arg2 storageVersionDeprecated:(id)arg3 storageType:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)storageTypeEnum;
- (int)storageVersionDeprecatedValue;
- (long long)typeEnum;
- (int)typeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
