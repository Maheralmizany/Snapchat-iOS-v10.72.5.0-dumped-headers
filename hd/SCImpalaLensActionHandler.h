//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCLensActionHandling.h"
#import "SCLensLiveLensPreviewCameraPresenterDelegate.h"

@class NSString, SCDeeplinkShareController, SCLensExplorerLensItem, SCUserSession, UIViewController;

@interface SCImpalaLensActionHandler : NSObject <SCLensLiveLensPreviewCameraPresenterDelegate, SCCLensActionHandling>
{
    SCDeeplinkShareController *_deeplinkShareController;
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _liveLensPreviewCameraPresenter;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    SCLensExplorerLensItem *_lensItem;
    long long _roleType;
    SCUserSession *_userSession;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)_sendLensWithLensItem:(id)arg1;
- (void)lensCameraPresenter:(id)arg1 didUseLens:(id)arg2;
- (void)lensCameraPresenterDidComplete:(id)arg1;
- (void)openLensExplorer;
- (void)sendLensWithLens:(id)arg1;
- (void)presentLensWithLens:(id)arg1;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 roleType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

