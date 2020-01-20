//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTextViewDelegate.h"

@class NSString, SCButton, SCTextView, UIButton, UILabel, UIScrollView;

@interface SCLoginV2View : SCRegisterV2BaseView <SCTextViewDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UILabel *_usernameLabel;
    SCTextView *_usernameTextField;
    UILabel *_passwordLabel;
    SCTextView *_passwordTextField;
    SCButton *_passwordShowHide;
    UILabel *_errorLabel;
    UIButton *_forgotPasswordButton;
    UIScrollView *_scrollView;
    _Bool _prepareTypingPassword;
    _Bool _showPassword;
    NSString *_username;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)_showHidePassword;
- (void)clearPasswordOnViewWillAppear;
- (void)resetPasswordAutofillUI;
- (void)refreshContinueButtonEnabledState;
- (void)setError:(id)arg1;
- (void)setFieldsEnabled:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (void)shiftViewUpWithKeyboard:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)initForgotPasswordButton;
- (void)initErrorLabel;
- (void)initPasswordShowHide;
- (void)initPasswordTextField;
- (void)initPasswordLabel;
- (void)initUsernameTextField;
- (void)initUsernameLabel;
- (void)initTitle;
- (void)initScrollView;
- (_Bool)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
