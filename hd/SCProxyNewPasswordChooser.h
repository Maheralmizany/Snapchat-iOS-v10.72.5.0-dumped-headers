//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNewPasswordChooser.h"

@class NSString, SCLoginStateTransitionLogger, SCUnauthenticatedPasswordService;

@interface SCProxyNewPasswordChooser : NSObject <SCNewPasswordChooser>
{
    SCUnauthenticatedPasswordService *_passwordService;
    NSString *_passwordResetToken;
    NSString *_usernameOrEmail;
    SCLoginStateTransitionLogger *_stateTransitionLogger;
}

- (void).cxx_destruct;
- (void)_logChooseNewPasswordFailure;
- (void)_logChooseNewPasswordSuccess;
- (void)_logChooseNewPasswordBegin;
- (void)_logCheckNewPasswordFailure;
- (void)_logCheckNewPasswordSuccess;
- (void)_logCheckNewPasswordBegin;
- (void)chooseNewPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_passwordStrengthFromString:(id)arg1;
- (void)checkNewPasswordStrength:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPasswordResetToken:(id)arg1 usernameOrEmail:(id)arg2 passwordService:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
