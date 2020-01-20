//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCLoginOdlvChallenge, SCLoginOdlvSolution, SOJUSecurityFideliusClientInit;

@protocol SCLoginService <NSObject>
- (void)loginWithUsernameOrEmail:(NSString *)arg1 password:(NSString *)arg2 preAuthToken:(NSString *)arg3 twoFAMethod:(int)arg4 odlvPreAuthToken:(NSString *)arg5 otpType:(long long)arg6 confirmReactivation:(_Bool)arg7 rememberDevice:(_Bool)arg8 fromDeepLink:(_Bool)arg9 fideliusClientInit:(SOJUSecurityFideliusClientInit *)arg10 successBlock:(void (^)(SOJULoginResponse *))arg11 failureBlock:(void (^)(SCLogInError *))arg12;
- (void)warmUserPreLogin:(NSString *)arg1;
- (void)logInWithOdlvChallenge:(SCLoginOdlvChallenge *)arg1 solution:(SCLoginOdlvSolution *)arg2 success:(void (^)(SCLoginSuccess *))arg3 failure:(void (^)(SCLogInError *))arg4;
- (void)complete2FALogInWithUsernameOrEmail:(NSString *)arg1 confirmationCode:(NSString *)arg2 twoFAPreAuthToken:(NSString *)arg3 rememberDevice:(_Bool)arg4 twoFAMethod:(int)arg5 success:(void (^)(SCLoginSuccess *))arg6 failure:(void (^)(SCLogInError *))arg7;
- (void)logInWithUsername:(NSString *)arg1 password:(NSString *)arg2 confirmReactivation:(_Bool)arg3 success:(void (^)(SCLoginSuccess *))arg4 failure:(void (^)(SCLogInError *))arg5;
@end

