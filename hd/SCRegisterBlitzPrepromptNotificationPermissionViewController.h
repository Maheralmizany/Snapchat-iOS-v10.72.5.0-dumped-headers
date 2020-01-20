//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCRegistrationUserActionDelegate.h"

@class NSString, SCPrePromptPermissionCustomDialogView, SCRegisterService, SCUserSession;

@interface SCRegisterBlitzPrepromptNotificationPermissionViewController : UIViewController <SCRegistrationUserActionDelegate>
{
    SCRegisterService *_registerService;
    SCUserSession *_abandonedUserSession;
    id <SCRegisterAccountV2ViewControllerDelegate> _registerAccountDelegate;
    id <SCRegistrationUserActionDelegate> _userActionDelegate;
    SCPrePromptPermissionCustomDialogView *_backgroundView;
}

- (void).cxx_destruct;
- (void)registrationViewDidDeallocate;
- (void)didDismissRegistration;
- (void)didTapSwitchToLoginButton;
- (void)_moveToNextVC;
- (void)_notificationPermissionRequestFinished;
- (void)_dontAllowButtonPressed:(id)arg1;
- (void)_okButtonPressed:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRegisterService:(id)arg1 registerAccountDelegate:(id)arg2 userActionDelegate:(id)arg3 abandonedUserSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
