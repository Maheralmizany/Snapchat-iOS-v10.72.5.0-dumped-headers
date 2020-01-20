//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyLogInWorkflowDelegate.h"
#import "SCLoginRegisterUserActionDelegate.h"
#import "SCOneTapLoginLandingPageDelegate.h"

@class NSString, SCLazy, SCOneTapLoginServices;

@interface SCLegacyUnauthenticatedWorkflow : NSObject <SCLoginRegisterUserActionDelegate, SCLegacyLogInWorkflowDelegate, SCOneTapLoginLandingPageDelegate>
{
    id <SCUnauthenticatedPageRouter> _unauthenticatedPageRouter;
    SCLazy *_applicationPreferences;
    SCOneTapLoginServices *_oneTapLoginServices;
    _Bool _didStartLogin;
}

- (void).cxx_destruct;
- (void)oneTapLoginLandingPageFinishedWithAbuseWarningId:(id)arg1 message:(id)arg2;
- (void)oneTapLoginAuthenticationFinishedWithLoginSuccess:(id)arg1;
- (void)oneTapLoginLandingPageExited;
- (void)signUpSelected;
- (void)logInSelected;
- (void)didDismissLogin;
- (void)didTapLoginButton;
- (void)beginWorkflow;
- (id)initWithUnauthenticatedPageRouter:(id)arg1 applicationPreferences:(id)arg2 oneTapLoginServices:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

