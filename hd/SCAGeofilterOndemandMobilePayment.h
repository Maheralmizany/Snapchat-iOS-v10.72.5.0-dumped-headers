//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAGeofilterOndemandEventBase.h"

@interface SCAGeofilterOndemandMobilePayment : SCAGeofilterOndemandEventBase
{
}

- (void)setProductId:(id)arg1;
- (void)setPaymentState:(id)arg1;
- (void)setPaymentSource:(id)arg1;
- (void)setOfferCurrency:(id)arg1;
- (void)setOfferAmountValue:(double)arg1;
- (void)setLineItemId:(id)arg1;
- (void)setIsPurchased:(_Bool)arg1;
- (void)setErrorReason:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

