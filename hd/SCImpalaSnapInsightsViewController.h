//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCImpalaSnapViewersActionHandling.h"
#import "SCImpalaViewControllerAsyncPreparing.h"
#import "SCMiniProfileViewControllerDelegate.h"
#import "SCPageNameLogging.h"

@class NSString, SCImpalaSnapInsightsContext, SCImpalaSnapInsightsView, SCSearchV2ProfilePresenter, SCUserSession, UIScrollView;

@interface SCImpalaSnapInsightsViewController : UIViewController <SCMiniProfileViewControllerDelegate, SCImpalaSnapViewersActionHandling, SCPageNameLogging, SCImpalaViewControllerAsyncPreparing>
{
    SCImpalaSnapInsightsView *_insightsView;
    SCImpalaSnapInsightsContext *_context;
    SCSearchV2ProfilePresenter *_profilePresenter;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    NSString *_businessProfileId;
    NSString *_snapId;
}

@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)_presentProfileForSnapchatter:(id)arg1;
- (void)openProfileWithViewer:(id)arg1;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadInsightsViewIfNeeded;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)pageViewName;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 businessProfileId:(id)arg3 snapId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

