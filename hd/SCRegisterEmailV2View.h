//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCRegisterV2BaseView.h"

#import "SCTextViewDelegate.h"

@class NSString, SCTextView, UIButton, UILabel, UIScrollView;

@interface SCRegisterEmailV2View : SCRegisterV2BaseView <SCTextViewDelegate>
{
    struct UIEdgeInsets _horizontalInsets;
    UILabel *_titleLabel;
    UIButton *_phoneInsteadButton;
    UILabel *_emailLabel;
    SCTextView *_emailTextView;
    UILabel *_errorLabel;
    UILabel *_emailSuggestionLabel;
    UIButton *_emailSuggestionPill;
    UIButton *_skipButton;
    UIScrollView *_scrollView;
    id <SCRegisterEmailV2ViewDelegate> _emailViewDelegate;
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) __weak id <SCRegisterEmailV2ViewDelegate> emailViewDelegate; // @synthesize emailViewDelegate=_emailViewDelegate;
- (void).cxx_destruct;
- (void)hideSkipButton:(_Bool)arg1;
- (void)setPhoneLinkHidden:(_Bool)arg1;
- (void)setFieldsEnabled:(_Bool)arg1;
- (_Bool)isInputComplete;
- (void)_changeContinueHighlightState;
- (_Bool)becomeFirstResponder;
- (void)shiftViewUpWithKeyboard:(double)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setError:(id)arg1;
- (void)setEmailSuggestionHidden:(_Bool)arg1;
- (void)suggestedEmailClicked;
- (void)setEmailSuggestion:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)initSkipButton;
- (void)initEmailSuggestion;
- (void)initErrorLabel;
- (void)initEmailField;
- (void)initEmailLabel;
- (void)initPhoneAlternativeButton;
- (void)initEmailTitle;
- (void)initScrollView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

