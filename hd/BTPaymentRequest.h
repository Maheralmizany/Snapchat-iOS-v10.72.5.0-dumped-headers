//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class BTPostalAddress, NSSet, NSString;

@interface BTPaymentRequest : NSObject <NSCopying>
{
    _Bool _shouldHideCallToAction;
    _Bool _noShipping;
    _Bool _presentViewControllersFromTop;
    _Bool _showDefaultPaymentMethodNonceFirst;
    NSString *_summaryTitle;
    NSString *_summaryDescription;
    NSString *_displayAmount;
    NSString *_callToActionText;
    NSString *_amount;
    NSString *_currencyCode;
    BTPostalAddress *_shippingAddress;
    NSSet *_additionalPayPalScopes;
}

@property(retain, nonatomic) NSSet *additionalPayPalScopes; // @synthesize additionalPayPalScopes=_additionalPayPalScopes;
@property(retain, nonatomic) BTPostalAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(nonatomic) _Bool showDefaultPaymentMethodNonceFirst; // @synthesize showDefaultPaymentMethodNonceFirst=_showDefaultPaymentMethodNonceFirst;
@property(nonatomic) _Bool presentViewControllersFromTop; // @synthesize presentViewControllersFromTop=_presentViewControllersFromTop;
@property(nonatomic) _Bool noShipping; // @synthesize noShipping=_noShipping;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(nonatomic) _Bool shouldHideCallToAction; // @synthesize shouldHideCallToAction=_shouldHideCallToAction;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
@property(copy, nonatomic) NSString *displayAmount; // @synthesize displayAmount=_displayAmount;
@property(copy, nonatomic) NSString *summaryDescription; // @synthesize summaryDescription=_summaryDescription;
@property(copy, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
