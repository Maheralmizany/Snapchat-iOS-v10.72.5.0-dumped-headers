//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCLegacyLogInTwoFAPage.h"
#import "SCLoginTwoFASmsViewDelegate.h"
#import "SCRegisterV2ViewDelegate.h"

@class NSString, NSTimer, SCApplicationLoginLogger, SCLoginTwoFASmsV2View, SCScopedAccess;

@interface SCLoginTwoFASmsV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCLoginTwoFASmsViewDelegate, SCLegacyLogInTwoFAPage>
{
    NSString *_userOrEmail;
    NSString *_phoneNumber;
    NSString *_preAuthToken;
    _Bool _isSMS;
    _Bool _hasOtpEnabled;
    SCLoginTwoFASmsV2View *_twoFAView;
    SCApplicationLoginLogger *_applicationLoginLogger;
    unsigned long long _resendTimeLeft;
    NSTimer *_resendTimer;
    _Bool _verifyCodeFailed;
    id <SCUnauthenticatedTwoFAService> _unauthenticatedTwoFAService;
    id <SCLegacyLogInTwoFAUserActionDelegate> _userActionDelegate;
    SCScopedAccess *_stateTransitionLogger;
}

- (void).cxx_destruct;
- (void)otpToSmsPressed;
- (void)updateContinueButtonState;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (void)backButtonPressed:(id)arg1;
- (void)updateContinueButtonResendLabel;
- (void)resetTimer;
- (void)updateResendTimeLeft;
- (void)continueButtonClicked;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showTwoFAErrorMessage:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserOrEmail:(id)arg1 phoneNumber:(id)arg2 preAuthToken:(id)arg3 isSMS:(_Bool)arg4 userActionDelegate:(id)arg5 applicationLoginLogger:(id)arg6 unauthenticatedTwoFAService:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

