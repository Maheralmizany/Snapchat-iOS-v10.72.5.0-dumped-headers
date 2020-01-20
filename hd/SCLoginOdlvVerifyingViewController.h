//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCLegacyLogInOdlvVerifyingPage.h"
#import "SCLoginOdlvVerifyingViewDelegate.h"
#import "SCRegisterV2ViewDelegate.h"

@class NSString, NSTimer, SCApplicationLoginLogger, SCLoginOdlvVerifyingView;

@interface SCLoginOdlvVerifyingViewController : UIViewController <SCRegisterV2ViewDelegate, SCLoginOdlvVerifyingViewDelegate, SCLegacyLogInOdlvVerifyingPage>
{
    _Bool _isVerifyingOrRequesting;
    int _resendTimeLeft;
    NSTimer *_resendTimer;
    NSString *_obfuscatedContact;
    long long _otpTypeSelected;
    SCApplicationLoginLogger *_applicationLoginLogger;
    SCLoginOdlvVerifyingView *_odlvVerifyingView;
    id <SCLegacyLogInOdlvVerifyingUserActionDelegate> _userActionDelegate;
}

@property(readonly, nonatomic) __weak id <SCLegacyLogInOdlvVerifyingUserActionDelegate> userActionDelegate; // @synthesize userActionDelegate=_userActionDelegate;
@property(readonly, nonatomic) SCLoginOdlvVerifyingView *odlvVerifyingView; // @synthesize odlvVerifyingView=_odlvVerifyingView;
@property(readonly, nonatomic) __weak SCApplicationLoginLogger *applicationLoginLogger; // @synthesize applicationLoginLogger=_applicationLoginLogger;
@property(readonly, nonatomic) long long otpTypeSelected; // @synthesize otpTypeSelected=_otpTypeSelected;
@property(readonly, nonatomic) NSString *obfuscatedContact; // @synthesize obfuscatedContact=_obfuscatedContact;
@property(nonatomic) _Bool isVerifyingOrRequesting; // @synthesize isVerifyingOrRequesting=_isVerifyingOrRequesting;
@property(nonatomic) int resendTimeLeft; // @synthesize resendTimeLeft=_resendTimeLeft;
@property(retain, nonatomic) NSTimer *resendTimer; // @synthesize resendTimer=_resendTimer;
- (void).cxx_destruct;
- (long long)_toOneTimePasscodeTypeFromLoginRequestOtpType:(long long)arg1;
- (void)_updateContinueButton;
- (void)_updateResendTimeLeft;
- (void)didFailedRequestingOtpWithHttpStatusCode:(long long)arg1 odlvRequestOtpResponse:(id)arg2;
- (void)showErrorMessage:(id)arg1;
- (void)showInvalidPreAuthErrorWithMessage:(id)arg1;
- (void)setVerifyingOrRequestingOtp:(_Bool)arg1;
- (void)resetResendTimer;
- (void)textFieldDidChange:(id)arg1;
- (void)havingTroubleVerifyingDidTap;
- (_Bool)shouldPopToRootViewController;
- (void)continueButtonClicked;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithOtpTypeSelected:(long long)arg1 obfuscatedContact:(id)arg2 applicationLoginLogger:(id)arg3 userActionDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
