//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommerceCheckoutCoordinating.h"

@class NSString, SCQueuePerformer;

@interface SCCommerceCheckoutCoordinator : NSObject <SCCommerceCheckoutCoordinating>
{
    id <SCCommerceNetworkRequestHandling> _requestHandler;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)finalizeCheckout:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)_executeCreateOrUpdateCheckout:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4 logVerb:(id)arg5;
- (void)updateCheckout:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (void)createCheckout:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)initWithRequestHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
