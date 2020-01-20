//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericPaymentsSettingsViewController.h"

#import "SCCommerceLoggerPageMetricsDataSource.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSError, NSMutableDictionary, NSString, SCCommerceSession, SCFloatLabeledTextField, SCLoadingIndicatorView, SCPaymentsPageLogger, SCPaymentsShippingAddress, SCUserSession, UIButton, UIColor, UIFont, UILabel, UIScrollView, UIView, UIViewController, UIVisualEffectView;

@interface SCShippingAddressCreateUpdateViewController : SCGenericPaymentsSettingsViewController <UITextFieldDelegate, SCCommerceLoggerPageMetricsDataSource>
{
    SCFloatLabeledTextField *_firstNameField;
    SCFloatLabeledTextField *_lastNameField;
    SCFloatLabeledTextField *_streetAddressField;
    SCFloatLabeledTextField *_aptField;
    SCFloatLabeledTextField *_cityField;
    SCFloatLabeledTextField *_stateField;
    SCFloatLabeledTextField *_zipcodeField;
    SCFloatLabeledTextField *_countryField;
    UIScrollView *_scrollView;
    UIView *_parentView;
    UIViewController *_popToViewController;
    UILabel *_errorLabel;
    UIButton *_deleteAddressButton;
    NSArray *_allTextFields;
    NSMutableDictionary *_errorMsgForFields;
    NSString *_pageName;
    UIColor *_textFieldDefaultColor;
    UIColor *_backgroundDefaultColor;
    UIFont *_errorLabelFont;
    UIFont *_deleteAddressButtonFont;
    UIVisualEffectView *_loadingBackgroundView;
    SCLoadingIndicatorView *_loadingIndicatorView;
    _Bool _isAdjustingTextfield;
    NSString *_metricsDisplayId;
    _Bool _shouldShowRemoveButton;
    SCPaymentsShippingAddress *_editingAddress;
    NSError *_addressError;
    NSString *_sessionId;
    SCPaymentsPageLogger *_logger;
    SCUserSession *_userSession;
    id <SCShippingAddressCreateUpdateViewControllerDelegate> _delegate;
    unsigned long long _theme;
    SCCommerceSession *_commerceSession;
}

@property(readonly, nonatomic) SCCommerceSession *commerceSession; // @synthesize commerceSession=_commerceSession;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SCShippingAddressCreateUpdateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowRemoveButton; // @synthesize shouldShowRemoveButton=_shouldShowRemoveButton;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCPaymentsPageLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) NSError *addressError; // @synthesize addressError=_addressError;
@property(readonly, nonatomic) SCPaymentsShippingAddress *editingAddress; // @synthesize editingAddress=_editingAddress;
- (void).cxx_destruct;
- (id)displayId;
- (void)_resignAnyFirstResponder;
- (_Bool)_shippingAddressFieldsUpdated:(id)arg1;
- (void)_initPrivacyView;
- (void)_hideBlurView;
- (void)_showBlurView;
- (_Bool)_isInAddressEditMode;
- (void)_setupExistingAddressError;
- (void)_setupExistingAddress;
- (void)_previousResponder:(id)arg1;
- (void)_nextResponder:(id)arg1;
- (id)_textFieldRelatedToErrorCode:(long long)arg1;
- (_Bool)_isUSZipCodeValid:(id)arg1;
- (_Bool)_isFieldCompleteAndInvalid:(id)arg1;
- (_Bool)_isFieldValid:(id)arg1;
- (void)_updateTextFieldTextColor:(id)arg1 hasError:(_Bool)arg2;
- (void)_setErrorLabelAndTextFieldColors;
- (id)_getErrorMessageForField:(id)arg1;
- (void)_updateErrorLabelsWithPreemptiveChecking:(_Bool)arg1;
- (_Bool)_shouldEnableSaveButton;
- (void)_updateUI;
- (void)_didTapDeleteButton;
- (void)_didTapSaveButton;
- (_Bool)_isZipcodeFieldValid;
- (_Bool)_isStateFieldValid;
- (_Bool)_areAllFieldsValid;
- (void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_removeKeyboardNotifications;
- (void)_registerForKeyboardNotifications;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)rightButtonPressed;
- (double)preferredRightButtonWidth;
- (_Bool)shouldPopToRootViewControllerLater;
- (id)_pagenameForPageView;
- (void)_initErrorLabel;
- (void)_initDeleteAddressButton;
- (void)_initSaveButton;
- (void)_addArrowsToFieldToolbars;
- (void)_addToolbarToTextField:(id)arg1;
- (void)_initTextFields;
- (void)_initTextField:(id)arg1;
- (void)_initParentView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithAddress:(id)arg1 withUserSession:(id)arg2 commerceSession:(id)arg3 addressError:(id)arg4 popToViewController:(id)arg5;
- (id)initWithAddress:(id)arg1 withUserSession:(id)arg2 commerceSession:(id)arg3 popToViewController:(id)arg4;
- (id)initWithAddress:(id)arg1 withUserSession:(id)arg2 commerceSession:(id)arg3;
- (id)initWithUserSession:(id)arg1 commerceSession:(id)arg2 popToViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
