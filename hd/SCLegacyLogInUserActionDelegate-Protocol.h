//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCLegacyLogInUserActionDelegate <NSObject>
- (void)didStartTypingPasswordWithUsernameOrEmail:(NSString *)arg1;
- (void)didTapSwitchToSignupButton;
- (void)didDismissLogin;
- (void)didTapLoginBackButton;
- (void)didTapLoginContinueButtonWithUsernameOrEmail:(NSString *)arg1 password:(NSString *)arg2;
@end

