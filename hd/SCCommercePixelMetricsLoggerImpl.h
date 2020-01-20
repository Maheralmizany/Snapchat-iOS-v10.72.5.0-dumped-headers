//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommercePixelMetricsLogger.h"

@class NSString, SCFeatureSettingsManager, SCQueuePerformer, SCRequestManager;

@interface SCCommercePixelMetricsLoggerImpl : NSObject <SCCommercePixelMetricsLogger>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCRequestManager *_requestManager;
    id <SCIdentityUserAdaptor> _identityUserAdaptor;
    id <SCPixelClient> _pixelClient;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)logStartCheckoutWithCheckout:(id)arg1 hasPaymentMethods:(_Bool)arg2 pixelInfo:(id)arg3;
- (void)logAddBillingWithItemIds:(id)arg1 pixelInfo:(id)arg2 success:(_Bool)arg3;
- (void)logAddToCartWithProduct:(id)arg1 variant:(id)arg2;
- (void)logViewContentWithProduct:(id)arg1 variant:(id)arg2;
- (id)initWithRequestManager:(id)arg1 identityUserAdaptor:(id)arg2 featureSettingsManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

