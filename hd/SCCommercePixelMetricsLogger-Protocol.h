//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SOJUCommerceCheckout, SOJUCommerceProductInfo, SOJUCommerceProductVariant, SOJUCommerceStorePixelInfo;

@protocol SCCommercePixelMetricsLogger <NSObject>
- (void)logStartCheckoutWithCheckout:(SOJUCommerceCheckout *)arg1 hasPaymentMethods:(_Bool)arg2 pixelInfo:(SOJUCommerceStorePixelInfo *)arg3;
- (void)logAddBillingWithItemIds:(NSArray *)arg1 pixelInfo:(SOJUCommerceStorePixelInfo *)arg2 success:(_Bool)arg3;
- (void)logAddToCartWithProduct:(SOJUCommerceProductInfo *)arg1 variant:(SOJUCommerceProductVariant *)arg2;
- (void)logViewContentWithProduct:(SOJUCommerceProductInfo *)arg1 variant:(SOJUCommerceProductVariant *)arg2;
@end
