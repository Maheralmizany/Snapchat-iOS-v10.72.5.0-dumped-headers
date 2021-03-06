//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRegistrationUserActionDelegate.h"
#import "SCUnauthenticatedPageRouter.h"

@class NSString, SCApplicationLoginLogger, SCBareboneNavigationController, SCBusinessLogicHarness, SCDeviceIDManager, SCLogger, SCScopeExposer, SCSessionRequestManager, UIApplication, UIWindow;

@interface SCUnauthenticatedNavigationPageRouter : NSObject <SCRegistrationUserActionDelegate, SCUnauthenticatedPageRouter>
{
    UIWindow *_window;
    UIApplication *_application;
    SCSessionRequestManager *_requestManager;
    SCLogger *_logger;
    SCDeviceIDManager *_deviceIdManager;
    SCScopeExposer *_loginScopeExposer;
    SCBareboneNavigationController *_navigationController;
    id <SCUnauthenticatedUserSessionRepository> _unauthenticatedSessionRepository;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
    SCApplicationLoginLogger *_applicationLoginLogger;
    id <SCDeviceCheckTokenFetching> _deviceCheckTokenFetching;
    SCBusinessLogicHarness *_oneTapLoginLandingPageBusinessLogicHarness;
}

- (void).cxx_destruct;
- (void)registrationViewDidDeallocate;
- (void)didDismissRegistration;
- (void)didTapSwitchToLoginButton;
- (void)endLoginWorkflow;
- (void)beginRegistrationWorkflow;
- (void)beginLoginWorkflowWithDelegate:(id)arg1 loginResponse:(id)arg2 fideliusTempIdentity:(id)arg3;
- (void)showOneTapLoginLandingPage:(id)arg1 loginButtonTitle:(id)arg2 bitmojiAvatar:(id)arg3 oneTapLoginAuthenticator:(id)arg4 oneTapLoginLogger:(id)arg5 delegate:(id)arg6;
- (void)showLoginSignupPageWithUserActionDelegate:(id)arg1;
- (void)_setupNavigationController;
- (id)initWithWindow:(id)arg1 application:(id)arg2 requestManager:(id)arg3 logger:(id)arg4 deviceIdManager:(id)arg5 loginScopeExposer:(id)arg6 unauthenticatedSessionRepository:(id)arg7 transitionMomentLogger:(id)arg8 applicationLoginLogger:(id)arg9 deviceCheckTokenFetching:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

