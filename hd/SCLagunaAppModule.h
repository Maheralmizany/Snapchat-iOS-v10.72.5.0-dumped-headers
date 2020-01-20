//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCInformationSettingsViewControllerDelegate.h"
#import "SCSpectaclesUrlViewControllerFactory.h"

@class NSString, SCSessionRequestManager;

@interface SCLagunaAppModule : NSObject <SCInformationSettingsViewControllerDelegate, SCSpectaclesUrlViewControllerFactory>
{
    SCSessionRequestManager *_requestManager;
    id <SCSpectaclesUrlViewControllerDelegate> _urlViewControllerDelegate;
}

+ (id)sharedModule;
@property(nonatomic) __weak id <SCSpectaclesUrlViewControllerDelegate> urlViewControllerDelegate; // @synthesize urlViewControllerDelegate=_urlViewControllerDelegate;
@property(nonatomic) __weak SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
- (void).cxx_destruct;
- (void)dismissInformationSettingsView:(id)arg1;
- (id)newViewControllerWithUrl:(id)arg1 delegate:(id)arg2;
- (id)newLagunaPairingViewControllerWithUserSession:(id)arg1 delegate:(id)arg2 source:(unsigned long long)arg3;
- (id)newLagunaSettingUIViewControllerWithUserSession:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
