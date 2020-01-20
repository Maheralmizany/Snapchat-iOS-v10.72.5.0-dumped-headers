//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TwoFASettingCodeVerificationViewController.h"

#import "SCPageNameLogging.h"

@class NSString, SCUserSession;

@interface TwoFAOtpSettingsViewController : TwoFASettingCodeVerificationViewController <SCPageNameLogging>
{
    NSString *_srcFlowName;
    NSString *_otpSecret;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)verifySucceed:(id)arg1 recoveryCode:(id)arg2;
- (void)verifyPressed:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)leftButtonPressed:(id)arg1;
- (id)initWithSourceFlowName:(id)arg1 otpSecret:(id)arg2 userSession:(id)arg3;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
