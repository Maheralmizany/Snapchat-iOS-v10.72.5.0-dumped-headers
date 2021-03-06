//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCPageNameLogging.h"
#import "SCRegisterSuggestedUsernameV2ViewDelegate.h"
#import "SCRegisterV2ViewDelegate.h"
#import "SCRegistrationAlertControllerDelegate.h"

@class NSArray, NSString, SCAppSession, SCFideliusLoggedOutManager, SCRegisterBirthdayV2View, SCRegisterNameV2View, SCRegisterPasswordV2View, SCRegisterService, SCRegisterSuggestedUsernameV2View, SCRegisterUsernameV2View, SCRegistrationAlertController, SCScopedAccess;

@interface SCRegisterAccountV2ViewController : UIViewController <SCRegisterSuggestedUsernameV2ViewDelegate, SCRegisterV2ViewDelegate, SCRegistrationAlertControllerDelegate, SCPageNameLogging>
{
    id <SCRegisterAccountV2ViewControllerDelegate> _delegate;
    id <SCRegistrationUserActionDelegate> _userActionDelegate;
    SCRegisterService *_registerService;
    SCAppSession *_appSession;
    SCFideliusLoggedOutManager *_fideliusLoggedOutManager;
    SCRegisterNameV2View *_registerNameView;
    SCRegisterPasswordV2View *_registerPasswordView;
    SCRegisterBirthdayV2View *_registerBirthdayView;
    SCRegisterUsernameV2View *_registerUsernameView;
    SCRegisterSuggestedUsernameV2View *_registerSuggestedUsernameView;
    unsigned long long _registerViewType;
    unsigned long long _previousRegisterViewType;
    _Bool _isRegistering;
    NSArray *_usernameSuggestions;
    NSString *_defaultUsername;
    NSString *_selectedUsername;
    unsigned long long _currentUsernameSuggestionIndex;
    unsigned long long _attemptCount;
    SCRegistrationAlertController *_registrationAlertController;
    _Bool _includeLoginOptionOnNameView;
    SCScopedAccess *_scopedPreferences;
    SCScopedAccess *_stateTransitionLogger;
    SCScopedAccess *_registrationEventLogger;
}

- (void).cxx_destruct;
- (void)suggestedUsernameViewDidClickChangeUsername;
- (void)_loadRegisterSuggestedUsernameViewWithSuggestedUsername:(id)arg1;
- (void)_presentPhoneVerify:(id)arg1;
- (id)pageViewName;
- (id)_pageNameForPageView;
- (id)_getRegisterView:(unsigned long long)arg1;
- (void)_finishAccountCreation:(id)arg1;
- (void)_registerDidFail:(id)arg1 errorTitle:(id)arg2;
- (void)_registerDidSucceed:(id)arg1;
- (void)_setRegistering:(_Bool)arg1;
- (void)_registerWithFirstName:(id)arg1 lastName:(id)arg2 username:(id)arg3 password:(id)arg4 birthday:(id)arg5;
- (void)_tryToRegisterNewAccount;
- (void)_handleUnderThirteen;
- (void)_tryToContinueWithBirthday;
- (void)_getUsernameSuggestionsFirstName:(id)arg1 lastName:(id)arg2;
- (void)checkPasswordValidityRealTime;
- (void)checkUsernameValidityRealTime;
- (void)rotateUsernameSuggestion;
- (void)presentWebViewWithUrl:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)popToRootViewController;
- (void)loginSignupSwitcherButtonPressed;
- (void)continueButtonClicked;
- (void)backButtonPressed:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (_Bool)shouldPopToRootViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_loadRegisterPasswordView;
- (void)_loadRegisterUsernameView;
- (void)_loadRegisterBirthdayView;
- (void)_loadRegisterNameView;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithLoginOptionButton:(_Bool)arg1 delegate:(id)arg2 registerService:(id)arg3 appSession:(id)arg4 fideliusLoggedOutManager:(id)arg5 userActionDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

