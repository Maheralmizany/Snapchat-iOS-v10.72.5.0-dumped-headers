//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLogInRouteActions.h"

@class NSString, SCBusinessLogicHarness, SCIdentityLoggerServices, SCLogInServices, SCScopeExposer;

@interface SCLogInUIRouteActions : NSObject <SCLogInRouteActions>
{
    id <SCUIContainer> _parentUIContainer;
    id <SCUIContainer> _uiContainer;
    SCLogInServices *_logInServices;
    SCIdentityLoggerServices *_loggerServices;
    id <SCLogInInterceptorsCheck> _logInInterceptorsCheck;
    SCScopeExposer *_abuseWarningScopeExposer;
    SCScopeExposer *_recoverPasswordScopeExposer;
    SCScopeExposer *_twoFAScopeExposer;
    SCBusinessLogicHarness *_credentialsEntryHarness;
    SCBusinessLogicHarness *_odlvLandingHarness;
    SCBusinessLogicHarness *_odlvVerifyingHarness;
}

- (void).cxx_destruct;
- (void)removePasswordRecovery;
- (void)showPasswordRecoveryWithDelegate:(id)arg1 usernameOrEmail:(id)arg2;
- (void)removeAbuseWarning;
- (void)showAbuseWarningWithId:(id)arg1 message:(id)arg2 delegate:(id)arg3;
- (void)showLoginOdlvVerifyingScreen:(id)arg1 challengge:(id)arg2 otpTypeSelected:(unsigned long long)arg3 obfuscatedContact:(id)arg4;
- (void)showLoginOdlvLandingScreen:(id)arg1 challenge:(id)arg2;
- (void)removeTwoFAVerification;
- (void)showTwoFAVerification:(id)arg1 delegate:(id)arg2;
- (void)showCredentialsEntryScreen:(id)arg1 usernameOrEmail:(id)arg2 password:(id)arg3 reactivationStatus:(id)arg4;
- (id)initWithUIContainer:(id)arg1 logInServices:(id)arg2 abuseWarningScopeExposer:(id)arg3 recoverPasswordScopeExposer:(id)arg4 twoFAScopeExposer:(id)arg5 loggerServices:(id)arg6 logInInterceptorsCheck:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

