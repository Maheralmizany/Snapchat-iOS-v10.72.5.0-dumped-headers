//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLoginOdlvChallenge, SCLoginReactivationStatus, SCTwoFAContext;

@protocol SCLogInRouteActions <NSObject>
- (void)removePasswordRecovery;
- (void)showPasswordRecoveryWithDelegate:(id <SCRecoverPasswordDelegate>)arg1 usernameOrEmail:(NSString *)arg2;
- (void)removeAbuseWarning;
- (void)showAbuseWarningWithId:(NSString *)arg1 message:(NSString *)arg2 delegate:(id <SCAbuseWarningWorkflowDelegate>)arg3;
- (void)removeTwoFAVerification;
- (void)showTwoFAVerification:(SCTwoFAContext *)arg1 delegate:(id <SCTwoFADelegate>)arg2;
- (void)showLoginOdlvVerifyingScreen:(id <SCLoginOdlvVerifyingDelegate>)arg1 challengge:(SCLoginOdlvChallenge *)arg2 otpTypeSelected:(unsigned long long)arg3 obfuscatedContact:(NSString *)arg4;
- (void)showLoginOdlvLandingScreen:(id <SCLoginOdlvLandingDelegate>)arg1 challenge:(SCLoginOdlvChallenge *)arg2;
- (void)showCredentialsEntryScreen:(id <SCLogInCredentialsEntryDelegate>)arg1 usernameOrEmail:(NSString *)arg2 password:(NSString *)arg3 reactivationStatus:(SCLoginReactivationStatus *)arg4;
@end
