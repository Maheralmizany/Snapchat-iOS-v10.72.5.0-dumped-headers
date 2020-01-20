//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCSettingsWorkflowDelegate.h"
#import "SCTraceEnabled.h"

@class NSString, SCScopedAccess, UIViewController;

@interface SCMyUnifiedProfileHeaderActionHandler : NSObject <SCTraceEnabled, SCSettingsWorkflowDelegate, SCActionHandling>
{
    id <NavigationDelegate> _navigationDelegate;
    id <SCSpectaclesPairingDelegate> _lagunaPairingDelegate;
    SCScopedAccess *_settingsLauncher;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)didDismissSettings;
- (void)_showSettings;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1 lagunaPairingDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
