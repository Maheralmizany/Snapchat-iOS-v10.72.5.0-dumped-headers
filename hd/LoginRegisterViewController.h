//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCPageNameLogging.h"
#import "SCRegistrationUserActionDelegate.h"

@class NSString, SCRegisterService, SCScopedAccess, SCUserSession, UIControl, UIImageView;

@interface LoginRegisterViewController : UIViewController <SCRegistrationUserActionDelegate, SCPageNameLogging>
{
    SCRegisterService *_registerService;
    SCUserSession *_abandonedUserSession;
    UIImageView *_ghostImageView;
    UIControl *_snapchatterButton;
    id <SCLoginRegisterUserActionDelegate> _userActionDelegate;
    SCScopedAccess *_scopedPreferences;
    SCScopedAccess *_signupStateTransitionLogger;
    SCScopedAccess *_loginStateTransitionLogger;
}

- (void).cxx_destruct;
- (id)_signUpButton;
- (id)_logInButton;
- (void)_loadButtons;
- (void)_loadLegacyButtons;
- (void)registrationViewDidDeallocate;
- (void)didDismissRegistration;
- (void)didTapSwitchToLoginButton;
- (void)keyboardDidShow:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)handleRegistration;
- (void)newMemberButtonClicked;
- (void)snapchatterButtonClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_beginQuickLoginIfPossible_INTERNAL_ONLY;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)pageViewName;
- (id)initWithRegisterService:(id)arg1 userActionDelegate:(id)arg2 abandonedUserSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

