//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCRegisterV2ViewDelegate.h"

@class NSString, SCRegisterCaptchaV2View, SCScopedAccess, SCUnauthenticatedCaptchaService, SCUnauthenticatedPhoneManager, SCUserSession;

@interface SCRegisterCaptchaV2ViewController : UIViewController <SCRegisterV2ViewDelegate>
{
    long long _attemptCount;
    SCRegisterCaptchaV2View *_registerCaptchaView;
    NSString *_forgotPasswordUsernameOrEmail;
    SCUserSession *_userSession;
    SCUnauthenticatedCaptchaService *_unauthenticatedCaptchaService;
    NSString *_captchaId;
    NSString *_forgotPasswordPhoneNumber;
    NSString *_forgotPasswordCountryCode;
    _Bool _forgotPasswordIsCall;
    SCUnauthenticatedPhoneManager *_unauthenticatedPhoneManager;
    SCScopedAccess *_scopedPreferences;
    SCScopedAccess *_stateTransitionLogger;
}

- (void).cxx_destruct;
- (void)verifyByPhoneDidSucceed:(id)arg1;
- (void)verifyByPhoneDidFail;
- (id)_pageNameForPageView;
- (void)_verifyByPhoneWithPreAuthToken:(id)arg1;
- (void)_presentVerifyPhoneViewController:(id)arg1;
- (void)_presentNextViewController:(_Bool)arg1;
- (void)continueButtonClicked;
- (void)backButtonPressed:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_captchaVerifiedWithResult:(long long)arg1 captchaCount:(unsigned long long)arg2 enableFindFriends:(_Bool)arg3 isResetPassword:(_Bool)arg4 preAuthToken:(id)arg5;
- (void)_verifyCaptchaWithId:(id)arg1 solution:(id)arg2 isResetPassword:(_Bool)arg3 usernameOrEmail:(id)arg4 successQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_captchaDidFinishLoading:(_Bool)arg1;
- (void)_fetchCaptchaImagesWithSuccessQueue:(id)arg1 isResetPassword:(_Bool)arg2 usernameOrEmail:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_loadCaptcha;
- (_Bool)isForPasswordResetAndCaptchaRequiredAfterPhone;
- (_Bool)isForPasswordReset;
- (void)setPasswordResetWithUnauthenticatedPhoneManager:(id)arg1 phoneNumber:(id)arg2 isCall:(_Bool)arg3 countryCode:(id)arg4;
- (void)setPasswordResetUsernameOrEmail:(id)arg1;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 unauthenticatedCaptchaService:(id)arg2;
- (id)initWithUnauthenticatedCaptchaService:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

