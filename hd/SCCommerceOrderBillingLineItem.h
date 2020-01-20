//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUCommerceCurrencyAmount, SOJUCommerceOrderProductsCommerceOrderProduct;

@interface SCCommerceOrderBillingLineItem : NSObject
{
    NSString *_billingItemId;
    SOJUCommerceOrderProductsCommerceOrderProduct *_product;
    NSNumber *_quantity;
    SOJUCommerceCurrencyAmount *_price;
    SOJUCommerceCurrencyAmount *_unitPrice;
    SOJUCommerceCurrencyAmount *_strikethroughPrice;
    SOJUCommerceCurrencyAmount *_taxPrice;
}

@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *taxPrice; // @synthesize taxPrice=_taxPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *strikethroughPrice; // @synthesize strikethroughPrice=_strikethroughPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(readonly, copy, nonatomic) SOJUCommerceCurrencyAmount *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) SOJUCommerceOrderProductsCommerceOrderProduct *product; // @synthesize product=_product;
@property(readonly, copy, nonatomic) NSString *billingItemId; // @synthesize billingItemId=_billingItemId;
- (void).cxx_destruct;
- (id)initWithSOJUModel:(id)arg1;
- (id)initWithBillingItemId:(id)arg1 product:(id)arg2 quantity:(id)arg3 price:(id)arg4 unitPrice:(id)arg5 strikethroughPrice:(id)arg6 taxPrice:(id)arg7;

@end
