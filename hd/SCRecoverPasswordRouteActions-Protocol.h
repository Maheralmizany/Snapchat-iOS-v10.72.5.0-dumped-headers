//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SCPhoneNumber;

@protocol SCRecoverPasswordRouteActions
- (void)removePasswordResetSuccessScreen;
- (void)showPasswordResetSuccessScreen:(id <SCPasswordResetSuccessDelegate>)arg1;
- (void)removeChooseNewPasswordScreen;
- (void)showChooseNewPasswordScreenWithPasswordResetToken:(NSString *)arg1 usernameOrEmail:(NSString *)arg2 delegate:(id <SCChooseNewPasswordDelegate>)arg3;
- (void)removePhoneCodeEntryScreen;
- (void)showPhoneCodeEntryScreenForPhoneReceivingCode:(SCPhoneNumber *)arg1 initialPhoneCodeDeliveryMechanism:(unsigned long long)arg2 usernameOrEmail:(NSString *)arg3 passwordResetToken:(NSString *)arg4 delegate:(id <SCPhoneCodeDelegate><SCPasswordResetPhoneCodeVerifierDelegate>)arg5;
- (void)removeRecoverPasswordViaEmailScreen;
- (void)showRecoverPasswordViaEmailWithDelegate:(id <SCRecoverPasswordViaEmailDelegate>)arg1 usernameOrEmail:(NSString *)arg2;
- (void)removePhoneEntryScreen;
- (void)showRecoverPasswordPhoneEntryWithDelegate:(id <SCRecoverPasswordPhoneEntryDelegate>)arg1 phoneNumber:(SCPhoneNumber *)arg2 usernameOrEmail:(NSString *)arg3;
- (void)removeRecoverPasswordAlert;
- (void)showRecoverPasswordAlertWithDelegate:(id <SCRecoverPasswordAlertDelegate>)arg1 usernameOrEmail:(NSString *)arg2;
@end

