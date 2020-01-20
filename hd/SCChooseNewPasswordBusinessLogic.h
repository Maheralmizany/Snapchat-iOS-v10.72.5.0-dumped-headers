//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSString;

@interface SCChooseNewPasswordBusinessLogic : SCBusinessLogic
{
    id <SCNewPasswordChooser> _newPasswordChooser;
    id <SCChooseNewPasswordDelegate> _delegate;
    _Bool _passwordHasPassedCheck;
    NSString *_enteredPassword;
    NSString *_enteredPasswordConfirmation;
    unsigned long long _passwordStrength;
    NSString *_errorMessage;
    _Bool _checkingPasswordStrength;
    _Bool _choosingNewPassword;
}

- (void).cxx_destruct;
- (void)_chooseNewPassword;
- (void)_checkPasswordStrength;
- (void)handleAction:(id)arg1;
- (_Bool)_passwordConfirmationMatches;
- (_Bool)_canChoosePassword;
- (id)_passwordStrengthRating;
- (id)viewModel;
- (id)initWithNewPasswordChooser:(id)arg1 delegate:(id)arg2;

@end

