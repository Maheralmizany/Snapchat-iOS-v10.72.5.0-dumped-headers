//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPhoneCodeVerifier.h"

@class SCPhoneNumber;

@interface SCPhoneRegistrationPhoneCodeVerifier : NSObject <SCPhoneCodeVerifier>
{
    id <SCAuthenticatedPhoneService> _phoneService;
    SCPhoneNumber *_phoneNumber;
    id <SCPhoneRegistrationPhoneCodeVerifierDelegate> _delegate;
    id <SCUserVerificationPhoneCodeVerifyEventLogger> _logger;
}

- (void).cxx_destruct;
- (void)requestPhoneCodeWithDeliveryMechanism:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_phoneVerificationFailed:(id)arg1 connectionFailure:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_phoneVerificationSucceeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyPhoneCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPhoneNumber:(id)arg1 authenticatedPhoneService:(id)arg2 logger:(id)arg3 delegate:(id)arg4;

@end
