//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

#import "SCResendableCode.h"

@class NSString;

@interface SCResendableCodeBusinessLogic : SCBusinessLogic <SCResendableCode>
{
    unsigned long long _minimumCodeLength;
    _Bool _autoSubmit;
    NSString *_continueTitle;
    NSString *_sendCodeAgainTitle;
    id <SCResendableCodeCountdown> _countDownTimer;
    _Bool _delegateCallbackIsInProgress;
    NSString *_enteredCode;
    unsigned long long _counterValue;
    unsigned long long _initialCounterValue;
    long long _codeSubmissionResult;
    long long _codeResendResult;
    id <SCResendableCodeDelegate> delegate;
}

@property(nonatomic) __weak id <SCResendableCodeDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)_buttonTitle;
- (_Bool)_buttonEnabled;
- (_Bool)_canSubmitCode;
- (_Bool)_canInitiateCodeResend;
- (_Bool)_timerExpired;
- (_Bool)_codeIsIncorrect;
- (_Bool)_codeIsUnverified;
- (_Bool)_codeSubmissionOrResendFailed;
- (void)_resendCode;
- (void)_submitCode;
- (void)handleAction:(id)arg1;
- (id)viewModel;
- (void)updateCode:(id)arg1;
- (void)initiateCodeResendForced:(_Bool)arg1;
- (void)_startCountdown;
- (void)codeSent;
- (_Bool)canInitiateCodeResend:(id *)arg1;
- (void)begin;
- (id)initWithMinimumCodeLength:(unsigned long long)arg1 autoSubmit:(_Bool)arg2 initialCounterValue:(unsigned long long)arg3 submitCodePrompt:(id)arg4 resendCodePrompt:(id)arg5 countDownTimer:(id)arg6;
- (id)initWithMinimumCodeLength:(unsigned long long)arg1 initialCounterValue:(unsigned long long)arg2 submitCodePrompt:(id)arg3 resendCodePrompt:(id)arg4 countDownTimer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

