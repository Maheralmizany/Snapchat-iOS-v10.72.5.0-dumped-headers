//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLoginSuccess, SCLoginTwoFAChallenge;

@protocol SCCredentials2FAOTPVerificationDelegate <NSObject>
- (void)credentials2FAOTPEntryFinishedWithLoginSuccess:(SCLoginSuccess *)arg1;
- (void)showCredentials2FASMSVerificationScreenWithChallenge:(SCLoginTwoFAChallenge *)arg1;
- (void)credentials2FAOTPVerificationExited;
@end

