//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCLinkLabelDelegate.h"

@class NSString;

@interface SCGalleryOnboardingViewController : UIViewController <SCLinkLabelDelegate>
{
    id <SCGalleryOnboardingViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryOnboardingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)linkLabel:(id)arg1 didSelectUrl:(id)arg2;
- (void)_didPressStartButton;
- (void)_didPressBackButton;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
