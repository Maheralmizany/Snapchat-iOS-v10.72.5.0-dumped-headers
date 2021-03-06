//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCImpalaShowProfilePresenterDelegate.h"
#import "SCShakeToReportDelegate.h"

@class NSString, SCImpalaCommunityLensProfileContext, SCImpalaCommunityLensProfileView, SCImpalaPublicProfileLoggingInfo, SCImpalaShowProfilePresenter, SCUserSession;

@interface SCImpalaCommunityLensProfileViewController : UIViewController <SCShakeToReportDelegate, SCImpalaShowProfilePresenterDelegate>
{
    SCImpalaPublicProfileLoggingInfo *_loggingInfo;
    SCImpalaCommunityLensProfileView *_profileView;
    SCImpalaCommunityLensProfileContext *_context;
    SCImpalaShowProfilePresenter *_presenter;
    CDUnknownBlockType _onDismissBlock;
    NSString *_userId;
    NSString *_displayName;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)showProfilePresenterDidFinishDismissing:(id)arg1;
- (void)showProfilePresenterDidStartPresenting:(id)arg1;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (id)defaultProjectNameV2;
- (void)presentOverViewController:(id)arg1 performHapticFeedback:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 dismissBlock:(CDUnknownBlockType)arg5;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserId:(id)arg1 displayName:(id)arg2 userSession:(id)arg3 navigationDelegate:(id)arg4 loggingInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

