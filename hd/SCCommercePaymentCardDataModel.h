//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCCommerceAddressDataModel;

@interface SCCommercePaymentCardDataModel : NSObject <NSCopying>
{
    SCCommerceAddressDataModel *_billingAddress;
    NSString *_cardNumber;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    NSString *_cvv;
    NSString *_brandname;
}

@property(readonly, copy, nonatomic) NSString *brandname; // @synthesize brandname=_brandname;
@property(readonly, copy, nonatomic) NSString *cvv; // @synthesize cvv=_cvv;
@property(readonly, copy, nonatomic) NSString *expiryYear; // @synthesize expiryYear=_expiryYear;
@property(readonly, copy, nonatomic) NSString *expiryMonth; // @synthesize expiryMonth=_expiryMonth;
@property(readonly, copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(readonly, copy, nonatomic) SCCommerceAddressDataModel *billingAddress; // @synthesize billingAddress=_billingAddress;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBillingAddress:(id)arg1 cardNumber:(id)arg2 expiryMonth:(id)arg3 expiryYear:(id)arg4 cvv:(id)arg5 brandname:(id)arg6;

@end

