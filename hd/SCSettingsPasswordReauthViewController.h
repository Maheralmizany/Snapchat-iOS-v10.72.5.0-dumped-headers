//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsPasswordViewController.h"

#import "SCPageNameLogging.h"

@class NSString, SCReauthenticationManager;

@interface SCSettingsPasswordReauthViewController : GenericSettingsPasswordViewController <SCPageNameLogging>
{
    id <SCSettingsPasswordReauthViewControllerDelegate> _delegate;
    SCReauthenticationManager *_reauthenticationManager;
}

- (void).cxx_destruct;
- (void)continueButtonBarPressed:(id)arg1;
- (id)getInfo;
- (id)getTitle;
- (id)pageViewName;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 reauthenticationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

