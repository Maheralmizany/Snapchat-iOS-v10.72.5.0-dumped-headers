//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"
#import "SOJUCommerceOrderProduct.h"

@class NSString, SOJUCommercePrintingMetadata, SOJUCommerceVariantImages;

@protocol SOJUCommerceOrderProductsCommerceOrderProduct <NSObject, NSCoding, NSCopying, SOJUCommerceOrderProduct>
@property(readonly, copy, nonatomic) SOJUCommercePrintingMetadata *printingMetadata;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList;
@property(readonly, copy, nonatomic) NSString *productImageUrl;
@property(readonly, copy, nonatomic) NSString *variantDescription;
@property(readonly, copy, nonatomic) NSString *variantId;
@property(readonly, copy, nonatomic) NSString *productId;
@property(readonly, copy, nonatomic) NSString *storeId;
@property(readonly, copy, nonatomic) NSString *platform;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *type;
@end

