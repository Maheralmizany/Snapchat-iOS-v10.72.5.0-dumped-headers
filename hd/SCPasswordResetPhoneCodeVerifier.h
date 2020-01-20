//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPhoneCodeVerifier.h"

@class NSDictionary, NSString, SCLoginStateTransitionLogger, SCPhoneNumber, SCRegistrationEventLogger, SCUnauthenticatedPhoneService;

@interface SCPasswordResetPhoneCodeVerifier : NSObject <SCPhoneCodeVerifier>
{
    SCUnauthenticatedPhoneService *_unauthenticatedPhoneService;
    SCPhoneNumber *_phoneReceivingCode;
    NSString *_usernameOrEmail;
    NSString *_passwordResetToken;
    id <SCPasswordResetPhoneCodeVerifierDelegate> _delegate;
    unsigned long long _verificationAttempt;
    unsigned long long _requestPhoneCodeAttempt;
    NSDictionary *_loggingContext;
    SCLoginStateTransitionLogger *_loginStateTransitionLogger;
    SCRegistrationEventLogger *_registrationEventLogger;
}

- (void).cxx_destruct;
- (void)_logPhoneCodeRequestSucceeded;
- (void)_logPhoneCodeRequestBegan;
- (void)_logPhoneCodeVerificationFailedWithResult:(unsigned long long)arg1;
- (void)_logPhoneCodeVerificationSucceeded;
- (void)_logPhoneCodeVerificationBegan;
- (void)requestPhoneCodeWithDeliveryMechanism:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verifyPhoneCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPhoneReceivingCode:(id)arg1 passwordResetToken:(id)arg2 usernameOrEmail:(id)arg3 unauthenticatedPhoneService:(id)arg4 loginStateTransitionLogger:(id)arg5 registrationEventLogger:(id)arg6 delegate:(id)arg7;

@end

