//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSString, SCApplicationLoginLogger;

@interface SCLogInCredentialsEntryBusinessLogic : SCBusinessLogic
{
    id <SCLogInCredentialsEntryDelegate> _delegate;
    id <SCLoginService> _logInService;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
    id <SCLogInInterceptorsCheck> _logInInterceptorsCheck;
    NSString *_usernameOrEmail;
    NSString *_password;
    NSString *_errorMessage;
    _Bool _hasInProgressLogIn;
    _Bool _securePassword;
    NSString *_reactivationMessage;
    NSString *_reactivationMessageNeedsConfirmation;
    NSString *_preWarmedUsernameOrEmail;
    SCApplicationLoginLogger *_applicationLoginLogger;
}

- (void).cxx_destruct;
- (_Bool)_canLogIn;
- (void)_warmUserPreLoginIfNecessary;
- (void)_handleLogInFailureWithError:(id)arg1;
- (void)_handleLogInSuccess:(id)arg1;
- (void)_logInWithConfirmReactivation:(_Bool)arg1;
- (void)_attemptLogInWithConfirmReactivation:(_Bool)arg1;
- (id)viewModel;
- (void)handleAction:(id)arg1;
- (void)begin;
- (id)initWithUsernameOrEmail:(id)arg1 password:(id)arg2 reactivationStatus:(id)arg3 delegate:(id)arg4 loginService:(id)arg5 transitionMomentLogger:(id)arg6 logInInterceptorsCheck:(id)arg7 applicationLoginLogger:(id)arg8;

@end

