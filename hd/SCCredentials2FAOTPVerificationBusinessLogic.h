//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSString;

@interface SCCredentials2FAOTPVerificationBusinessLogic : SCBusinessLogic
{
    id <SCCredentials2FAOTPVerificationDelegate> _delegate;
    id <SCLoginService> _logInService;
    id <SCUnauthenticatedTwoFAService> _unauthenticatedTwoFAService;
    _Bool _smsEnabled;
    _Bool _requestingCode;
    _Bool _hasInProgressLogIn;
    NSString *_phoneNumber;
    NSString *_usernameOrEmail;
    NSString *_twoFAPreAuthToken;
    NSString *_errorMessage;
    _Bool _rememberThisDevice;
    NSString *_verificationCode;
    unsigned long long _verificationCodeLength;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
}

- (void).cxx_destruct;
- (void)_failedToRequestCodeWithErrorMessage:(id)arg1;
- (void)_codeRequested;
- (void)_requestCode;
- (void)_loginWithCode:(id)arg1;
- (void)_handleLogInFailureWithError:(id)arg1;
- (void)_handleLogInSuccess:(id)arg1;
- (id)_sendSmsInsteadTitle;
- (_Bool)_sendSmsInsteadEnabled;
- (_Bool)_sendSmsInsteadHidden;
- (void)handleAction:(id)arg1;
- (_Bool)_continueButtonEnabled;
- (id)viewModel;
- (id)initWithDelegate:(id)arg1 logInService:(id)arg2 usernameOrEmail:(id)arg3 smsEnabled:(_Bool)arg4 phoneNumber:(id)arg5 twoFAPreAuthToken:(id)arg6 unauthenticatedTwoFAService:(id)arg7 verificationCodeLength:(unsigned long long)arg8 transitionMomentLogger:(id)arg9;

@end
