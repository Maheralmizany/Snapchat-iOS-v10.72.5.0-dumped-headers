//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImpalaShowProfilePresenterDelegate.h"

@class NSString, SCImpalaShowProfilePresenter, SCUserSession;

@interface SCImpalaPublicProfilePresenter : NSObject <SCImpalaShowProfilePresenterDelegate>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCImpalaShowProfilePresenter *_presenter;
    id <SCImpalaShowProfilePresenterDelegate> _cameraDelegateImpl;
    CDUnknownBlockType _dismissBlock;
}

- (void).cxx_destruct;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
- (void)presentProfileForProfileId:(id)arg1 presentingViewController:(id)arg2 sourcePageType:(long long)arg3 completion:(CDUnknownBlockType)arg4 dismissblock:(CDUnknownBlockType)arg5;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 cameraViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
