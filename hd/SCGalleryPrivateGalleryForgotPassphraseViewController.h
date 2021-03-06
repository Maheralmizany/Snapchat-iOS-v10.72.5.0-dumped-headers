//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryPrivateGalleryFlowPageViewController.h"

#import "SCGalleryInformationWebViewControllerDelegate.h"
#import "SCLinkLabelDelegate.h"

@class NSString, SCGalleryInformationWebViewController, SCGallerySelectableDotView, SCMemoriesRoundButton, UIView;

@interface SCGalleryPrivateGalleryForgotPassphraseViewController : SCGalleryPrivateGalleryFlowPageViewController <SCLinkLabelDelegate, SCGalleryInformationWebViewControllerDelegate>
{
    _Bool _forPasscode;
    _Bool _forPassphrase;
    UIView *_headerView;
    SCMemoriesRoundButton *_continueButton;
    SCGallerySelectableDotView *_acknowledgeDotView;
    SCGalleryInformationWebViewController *_informationViewController;
    id <SCGalleryPrivateGalleryForgotPassphraseViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryPrivateGalleryForgotPassphraseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)galleryInformationWebViewControllerDidPressBack:(id)arg1;
- (void)linkLabel:(id)arg1 didSelectUrl:(id)arg2;
- (void)_handleTapAcknowledgeView:(id)arg1;
- (void)_didPressContinueButton;
- (void)_didPressBackButton;
- (void)viewDidLoad;
- (id)initForPassphrase;
- (id)initForPasscode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

