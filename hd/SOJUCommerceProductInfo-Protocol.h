//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUCommerceCustomBitmojiInfo, SOJUCommerceSnapCodeInfo, SOJUCommerceStoreInfo, SOJUCommerceUnlockableInfo, SOJUCommerceVariantImages;

@protocol SOJUCommerceProductInfo <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *productUrl;
@property(readonly, copy, nonatomic) NSArray *imageDetailsList;
@property(readonly, copy, nonatomic) SOJUCommerceCustomBitmojiInfo *customBitmojiInfo;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *isPdpShareable;
@property(readonly, copy, nonatomic) SOJUCommerceSnapCodeInfo *productScanCardInfo;
@property(readonly, copy, nonatomic) SOJUCommerceUnlockableInfo *unlockableInfo;
@property(readonly, copy, nonatomic) NSNumber *checkoutItemLimit;
@property(readonly, copy, nonatomic) NSString *snapcodeUrl;
@property(readonly, copy, nonatomic) NSNumber *shouldUseWebviewDeprecated;
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList;
@property(readonly, copy, nonatomic) SOJUCommerceStoreInfo *storeInfo;
@property(readonly, copy, nonatomic) NSArray *productVariantCategories;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *storeId;
@property(readonly, copy, nonatomic) NSString *commercePartner;
@property(readonly, copy, nonatomic) NSString *vendor;
@property(readonly, copy, nonatomic) NSArray *variants;
@property(readonly, copy, nonatomic) NSArray *images;
@property(readonly, copy, nonatomic) NSString *descriptionHtml;
@property(readonly, copy, nonatomic) NSString *idValue;
@end

