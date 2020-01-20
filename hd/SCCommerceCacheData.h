//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class SOJUCommerceAccountInfo, SOJUCommerceOrderList, SOJUCommerceProductInfoList, SOJUPaymentsPaymentMethodList;

@interface SCCommerceCacheData : NSObject <NSCoding>
{
    SOJUCommerceAccountInfo *_accountInfo;
    SOJUPaymentsPaymentMethodList *_sojuPayments;
    SOJUCommerceProductInfoList *_productList;
    SOJUCommerceOrderList *_orderList;
}

@property(readonly, nonatomic) SOJUCommerceOrderList *orderList; // @synthesize orderList=_orderList;
@property(readonly, nonatomic) SOJUCommerceProductInfoList *productList; // @synthesize productList=_productList;
@property(readonly, nonatomic) SOJUPaymentsPaymentMethodList *sojuPayments; // @synthesize sojuPayments=_sojuPayments;
@property(readonly, nonatomic) SOJUCommerceAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrderList:(id)arg1;
- (id)initWithProductList:(id)arg1;
- (id)initWithAccount:(id)arg1 paymentMethods:(id)arg2;

@end

