//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryPrivateGalleryFlowPageViewController.h"

@class NSString, SCGallerySelectableDotView, SCMemoriesRoundButton, UIView;

@interface SCGalleryPrivateGalleryConfirmPassphraseViewController : SCGalleryPrivateGalleryFlowPageViewController
{
    _Bool _forPasscode;
    _Bool _forPassphrase;
    NSString *_title;
    NSString *_passcode;
    NSString *_passphrase;
    UIView *_headerView;
    SCMemoriesRoundButton *_continueButton;
    SCGallerySelectableDotView *_acknowledgeDotView;
    id <SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTapAcknowledgeView:(id)arg1;
- (void)_didPressContinueButton;
- (void)_didPressQuestionMarkButton;
- (void)_didPressBackButton;
- (void)viewDidLoad;
- (id)initForPassphraseWithTitle:(id)arg1 passphrase:(id)arg2;
- (id)initForPasscodeWithTitle:(id)arg1 passcode:(id)arg2;

@end

