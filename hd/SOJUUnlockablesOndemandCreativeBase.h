//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUnlockablesOndemandCreativeBase.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesOndemandCreativeBase : NSObject <SOJUUnlockablesOndemandCreativeBase>
{
    NSString *_imageUrl;
    NSString *_thumbnailUrl;
    NSArray *_backgroundImageUrls;
    NSString *_defaultFontName;
    NSString *_defaultFontUrl;
    NSNumber *_defaultWidth;
    NSNumber *_defaultHeight;
    NSString *_productType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSNumber *defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(readonly, copy, nonatomic) NSNumber *defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(readonly, copy, nonatomic) NSString *defaultFontUrl; // @synthesize defaultFontUrl=_defaultFontUrl;
@property(readonly, copy, nonatomic) NSString *defaultFontName; // @synthesize defaultFontName=_defaultFontName;
@property(readonly, copy, nonatomic) NSArray *backgroundImageUrls; // @synthesize backgroundImageUrls=_backgroundImageUrls;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
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
- (id)initWithImageUrl:(id)arg1 thumbnailUrl:(id)arg2 backgroundImageUrls:(id)arg3 defaultFontName:(id)arg4 defaultFontUrl:(id)arg5 defaultWidth:(id)arg6 defaultHeight:(id)arg7 productType:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)productTypeEnum;
- (int)defaultHeightValue;
- (int)defaultWidthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

