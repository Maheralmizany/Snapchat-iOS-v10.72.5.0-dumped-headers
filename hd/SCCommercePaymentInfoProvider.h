//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommercePaymentInfoFetching.h"
#import "SCCommercePaymentInfoMutating.h"

@class NSArray, NSDate, SCCommercePaymentMethodTokenizer, SCQueuePerformer;

@interface SCCommercePaymentInfoProvider : NSObject <SCCommercePaymentInfoFetching, SCCommercePaymentInfoMutating>
{
    id <SCCommerceNetworkRequestHandling> _requestHandler;
    SCCommercePaymentMethodTokenizer *_tokenizer;
    SCQueuePerformer *_queuePerformer;
    NSArray *_paymentMethods;
    NSDate *_lastFetch;
}

- (void).cxx_destruct;
- (void)_replacePaymentMethodWithId:(id)arg1 withPaymentMethod:(id)arg2;
- (void)_postPaymentMethod:(id)arg1 oldPaymentId:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)deletePaymentMethod:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updatePaymentMethod:(id)arg1 paymentIdentifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addPaymentMethod:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchPaymentMethodsCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)_shouldRefetch;
- (id)initWithRequestHandler:(id)arg1;

@end

