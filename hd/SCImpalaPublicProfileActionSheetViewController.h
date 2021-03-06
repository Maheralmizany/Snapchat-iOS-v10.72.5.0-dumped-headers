//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCPageNameLogging.h"
#import "SCShakeToReportDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSString, SCImpalaPublicProfileActionSheetContext, SCImpalaPublicProfileActionSheetView, SCImpalaPublicProfileLoggingInfo, SCImpalaStoryPlayer, SCUserSession;

@interface SCImpalaPublicProfileActionSheetViewController : UIViewController <SCShakeToReportDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, SCPageNameLogging>
{
    SCImpalaPublicProfileLoggingInfo *_loggingInfo;
    SCImpalaPublicProfileActionSheetView *_profileView;
    SCImpalaPublicProfileActionSheetContext *_context;
    SCImpalaStoryPlayer *_storyPlayer;
    _Bool _previewMode;
    CDUnknownBlockType _onDismissBlock;
    NSString *_businessProfileId;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
}

@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewControllerDismissSelf;
- (_Bool)viewControllerPrefersSelfDismiss;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (id)defaultProjectNameV2;
- (void)presentOverViewController:(id)arg1 completion:(CDUnknownBlockType)arg2 dismissBlock:(CDUnknownBlockType)arg3;
- (id)pageViewName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBusinessProfileId:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 loggingInfo:(id)arg4 previewMode:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

