//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLoginTwoFAChallenge;

@protocol SCTwoFARouteActions <NSObject>
- (void)showCredentials2FAOTPVerificationScreen:(id <SCCredentials2FAOTPVerificationDelegate>)arg1 smsEnabled:(_Bool)arg2 twoFAChallenge:(SCLoginTwoFAChallenge *)arg3;
- (void)showCredentials2FASMSVerificationScreen:(id <SCCredentials2FASMSVerificationDelegate>)arg1 twoFAChallenge:(SCLoginTwoFAChallenge *)arg2;
@end

