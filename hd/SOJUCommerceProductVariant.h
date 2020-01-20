//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUCommerceProductVariant.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUCommerceCurrencyAmount, SOJUCommerceVariantImages;

@interface SOJUCommerceProductVariant : NSObject <SOJUCommerceProductVariant>
{
    NSString *_idValue;
    NSArray *_images;
    SOJUCommerceCurrencyAmount *_price;
    NSString *_productId;
    NSNumber *_requiresShipping;
    NSNumber *_taxable;
    NSString *_title;
    NSDictionary *_variantCategoryMap;
    NSNumber *_available;
    SOJUCommerceVariantImages *_imageList;
    SOJUCommerceCurrencyAmount *_strikethroughPrice;
    NSString *_pixelItemId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *pixelItemId; // @synthesize pixelItemId=_pixelItemId;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *strikethroughPrice; // @synthesize strikethroughPrice=_strikethroughPrice;
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList; // @synthesize imageList=_imageList;
@property(readonly, copy, nonatomic) NSNumber *available; // @synthesize available=_available;
@property(readonly, copy, nonatomic) NSDictionary *variantCategoryMap; // @synthesize variantCategoryMap=_variantCategoryMap;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSNumber *taxable; // @synthesize taxable=_taxable;
@property(readonly, copy, nonatomic) NSNumber *requiresShipping; // @synthesize requiresShipping=_requiresShipping;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
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
- (id)initWithIdValue:(id)arg1 images:(id)arg2 price:(id)arg3 productId:(id)arg4 requiresShipping:(id)arg5 taxable:(id)arg6 title:(id)arg7 variantCategoryMap:(id)arg8 available:(id)arg9 imageList:(id)arg10 strikethroughPrice:(id)arg11 pixelItemId:(id)arg12;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)availableValue;
- (_Bool)taxableValue;
- (_Bool)requiresShippingValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

