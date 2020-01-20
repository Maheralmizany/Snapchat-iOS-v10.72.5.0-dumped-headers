//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverModerationBrandSafety.h"

@class NSNumber, NSString;

@interface SOJUDiscoverModerationBrandSafety : NSObject <SOJUDiscoverModerationBrandSafety>
{
    NSNumber *_isBrandUnsafe;
    NSNumber *_isSponsoredContent;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *isSponsoredContent; // @synthesize isSponsoredContent=_isSponsoredContent;
@property(readonly, copy, nonatomic) NSNumber *isBrandUnsafe; // @synthesize isBrandUnsafe=_isBrandUnsafe;
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
- (id)initWithIsBrandUnsafe:(id)arg1 isSponsoredContent:(id)arg2;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isSponsoredContentValue;
- (_Bool)isBrandUnsafeValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

