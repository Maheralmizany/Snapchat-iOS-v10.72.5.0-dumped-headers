//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCInformationSettingsViewControllerDelegate.h"
#import "SCSnapchattersDataRequestListener.h"
#import "SCTraceEnabled.h"
#import "TTTAttributedLabelDelegate.h"

@class NSString, SCContactSyncPrePromptView;

@interface SCContactSyncPrePromptViewController : UIViewController <SCSnapchattersDataRequestListener, TTTAttributedLabelDelegate, SCInformationSettingsViewControllerDelegate, SCTraceEnabled>
{
    SCContactSyncPrePromptView *_contactSyncPrePromptView;
    id <SCContactSyncPrePromptViewControllerActionHandling> _actionHandler;
}

@property(nonatomic) __weak id <SCContactSyncPrePromptViewControllerActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)dismissInformationSettingsView:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_deviceContactAccessDenied;
- (void)_deviceContactAccessGranted;
- (void)_denyButtonTapped;
- (void)_allowButtonTapped;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

