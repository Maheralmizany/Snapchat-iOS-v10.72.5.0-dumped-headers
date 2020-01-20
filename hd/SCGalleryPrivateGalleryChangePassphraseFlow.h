//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryInformationWebViewControllerDelegate.h"
#import "SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate.h"
#import "SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate.h"
#import "SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate.h"
#import "SCGalleryPrivateGalleryFinishChangeViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, SCGalleryInformationWebViewController, SCGalleryPrivateGalleryConfirmPassphraseViewController, SCGalleryPrivateGalleryEnterPasscodeViewController, SCGalleryPrivateGalleryEnterPassphraseViewController, SCGalleryPrivateGalleryFinishChangeViewController, SCGalleryPrivateGalleryFlowNavigationController, SCUserSession, UIViewController;

@interface SCGalleryPrivateGalleryChangePassphraseFlow : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate, SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate, SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate, SCGalleryPrivateGalleryFinishChangeViewControllerDelegate, SCGalleryInformationWebViewControllerDelegate>
{
    SCUserSession *_userSession;
    UIViewController *_fromViewController;
    NSString *_passphrase;
    NSString *_passcode;
    SCGalleryPrivateGalleryFlowNavigationController *_navigationController;
    SCGalleryPrivateGalleryEnterPassphraseViewController *_unlockWithPassphraseViewController;
    SCGalleryPrivateGalleryEnterPassphraseViewController *_createPassphraseViewController;
    SCGalleryPrivateGalleryConfirmPassphraseViewController *_confirmPassphraseViewController;
    SCGalleryPrivateGalleryEnterPasscodeViewController *_createPasscodeViewController;
    SCGalleryPrivateGalleryEnterPasscodeViewController *_confirmPasscodeViewController;
    SCGalleryPrivateGalleryConfirmPassphraseViewController *_showPasscodeViewController;
    SCGalleryPrivateGalleryFinishChangeViewController *_finishChangePassphraseViewController;
    SCGalleryInformationWebViewController *_informationViewController;
    id <SCGalleryPrivateGalleryChangePassphraseFlowDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryPrivateGalleryChangePassphraseFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_reset;
- (void)galleryInformationWebViewControllerDidPressBack:(id)arg1;
- (void)finishChangeViewControllerDidPressFinish:(id)arg1;
- (void)enterPasscodeViewControllerDidConfirmPasscode:(id)arg1;
- (void)enterPasscodeViewController:(id)arg1 didCreatePasscode:(id)arg2;
- (void)enterPasscodeViewControllerDidPressBack:(id)arg1;
- (void)confirmPassphraseViewControllerDidConfirmPassphrase:(id)arg1;
- (void)confirmPassphraseViewControllerDidPressQuestionMark:(id)arg1;
- (void)confirmPassphraseViewControllerDidPressBack:(id)arg1;
- (void)enterPassphraseViewControllerDidUnlock:(id)arg1;
- (void)enterPassphraseViewControllerDidPressUsePasscode:(id)arg1;
- (void)enterPassphraseViewController:(id)arg1 didCreatePassphrase:(id)arg2;
- (void)enterPassphraseViewControllerDidPressBack:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)start;
- (_Bool)isStarted;
- (id)initWithUserSession:(id)arg1 fromViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
