//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCTextViewDelegate.h"

@class NSString, SCLogInCredentialsEntryViewModel, SCScreen, SCTextView, SCUnauthenticatedBaseView, SCUnauthenticatedStyleHelperDefault, UIButton, UILabel;

@interface SCLogInCredentialsEntryViewController : UIViewController <SCTextViewDelegate>
{
    SCScreen *_screen;
    SCLogInCredentialsEntryViewModel *_previousViewModel;
    SCUnauthenticatedStyleHelperDefault *_styleHelper;
    SCUnauthenticatedBaseView *_baseView;
    UILabel *_titleLabel;
    UILabel *_usernameLabel;
    UILabel *_passwordLabel;
    UILabel *_errorLabel;
    SCTextView *_usernameTextField;
    SCTextView *_passwordTextField;
    UIButton *_passwordShowHide;
    UIButton *_recoverPasswordButton;
}

- (void).cxx_destruct;
- (void)_updatePasswordSecurity:(_Bool)arg1;
- (void)_showReactivationConfirmationAlertWithMessage:(id)arg1;
- (void)_showReactivationAlertWithMessage:(id)arg1;
- (void)recoverPasswordTapped;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)_showHidePasswordButtonTapped;
- (void)_reactivate;
- (void)_reactivationDeclined;
- (void)_backButtonTapped;
- (void)_continueButtonTapped;
- (void)_setupRecoverPasswordButton;
- (void)_setupErrorLabel;
- (void)_setupPasswordShowHide;
- (void)_setupPasswordTextField;
- (void)_setupPasswordLabel;
- (void)_setupUsernameTextField;
- (void)_setupUsernameLabel;
- (void)_setupTitle;
- (void)_setupBaseView;
- (void)_setupUI;
- (void)viewDidLoad;
- (void)_update:(id)arg1;
- (void)_startRenderingViewModels;
- (_Bool)prefersStatusBarHidden;
- (id)initWithScreen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

