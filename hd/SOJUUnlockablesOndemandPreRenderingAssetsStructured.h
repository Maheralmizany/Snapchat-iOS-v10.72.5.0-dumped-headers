//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUUnlockablesOndemandPreRenderingAssetsStructured.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesOndemandPreRenderingAssetsStructured : NSObject <SOJUUnlockablesOndemandPreRenderingAssetsStructured>
{
    NSString *_templateId;
    NSString *_categoryId;
    NSString *_platform;
    NSString *_imagePngBase64;
    NSArray *_textBoxArray;
    NSArray *_imageBoxArray;
    NSArray *_stickerBoxArray;
    NSString *_templateInstanceId;
    NSString *_productType;
    NSNumber *_userCanMakePayments;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *userCanMakePayments; // @synthesize userCanMakePayments=_userCanMakePayments;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *templateInstanceId; // @synthesize templateInstanceId=_templateInstanceId;
@property(readonly, copy, nonatomic) NSArray *stickerBoxArray; // @synthesize stickerBoxArray=_stickerBoxArray;
@property(readonly, copy, nonatomic) NSArray *imageBoxArray; // @synthesize imageBoxArray=_imageBoxArray;
@property(readonly, copy, nonatomic) NSArray *textBoxArray; // @synthesize textBoxArray=_textBoxArray;
@property(readonly, copy, nonatomic) NSString *imagePngBase64; // @synthesize imagePngBase64=_imagePngBase64;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
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
- (id)initWithTemplateId:(id)arg1 categoryId:(id)arg2 platform:(id)arg3 imagePngBase64:(id)arg4 textBoxArray:(id)arg5 imageBoxArray:(id)arg6 stickerBoxArray:(id)arg7 templateInstanceId:(id)arg8 productType:(id)arg9 userCanMakePayments:(id)arg10;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)userCanMakePaymentsValue;
- (long long)productTypeEnum;
- (long long)platformEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

