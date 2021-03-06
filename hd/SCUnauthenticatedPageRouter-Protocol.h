//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCFideliusTempDeviceUserInfo, SCLazy, SOJULoginResponse, UIImage;

@protocol SCUnauthenticatedPageRouter <NSObject>
- (void)endLoginWorkflow;
- (void)beginRegistrationWorkflow;
- (void)beginLoginWorkflowWithDelegate:(id <SCLegacyLogInWorkflowDelegate>)arg1 loginResponse:(SOJULoginResponse *)arg2 fideliusTempIdentity:(SCFideliusTempDeviceUserInfo *)arg3;
- (void)showOneTapLoginLandingPage:(NSString *)arg1 loginButtonTitle:(NSString *)arg2 bitmojiAvatar:(UIImage *)arg3 oneTapLoginAuthenticator:(SCLazy *)arg4 oneTapLoginLogger:(SCLazy *)arg5 delegate:(id <SCOneTapLoginLandingPageDelegate>)arg6;
- (void)showLoginSignupPageWithUserActionDelegate:(id <SCLoginRegisterUserActionDelegate>)arg1;
@end

