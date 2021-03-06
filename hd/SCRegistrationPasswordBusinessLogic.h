//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSString, SCFideliusLoggedOutManager, SCFideliusTempDeviceUserInfo, SCIdentityLoggerServices, SCLazy, SCRegistrationPasswordViewModel, SCUnauthenticatedUser;

@interface SCRegistrationPasswordBusinessLogic : SCBusinessLogic
{
    SCRegistrationPasswordViewModel *_viewModel;
    id <SCRegistrationPasswordDelegate> _delegate;
    SCLazy *_registerService;
    SCIdentityLoggerServices *_loggerServices;
    SCFideliusLoggedOutManager *_fideliusLoggedOutManager;
    SCFideliusTempDeviceUserInfo *_fideliusTempIdentity;
    SCUnauthenticatedUser *_unauthenticatedUser;
    NSString *_password;
    _Bool _isRegistering;
    _Bool _isPasswordHidden;
    NSString *_errorMessage;
    NSString *_errorAlertTitle;
    NSString *_errorAlertMessage;
}

- (void).cxx_destruct;
- (id)_fideliusClientInitForRegistration;
- (void)_exit;
- (void)_handleRegisterFailureWithError:(id)arg1 title:(id)arg2;
- (void)_handleRegisterSuccessWithRegistrationResponse:(id)arg1;
- (void)_submitPassword;
- (void)_checkPasswordValidityRealTimeWithPassword:(id)arg1;
- (_Bool)_canContinue;
- (void)handleAction:(id)arg1;
- (id)viewModel;
- (void)begin;
- (id)initWithDelegate:(id)arg1 unauthenticatedUser:(id)arg2 registerService:(id)arg3 loggerServices:(id)arg4 fideliusLoggedOutManager:(id)arg5;

@end

