//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventAnnouncing.h"
#import "SCEventListener.h"
#import "SCSearchStoriesPresenterDelegate.h"
#import "SCSearchStorySharePopupPresenterDelegate.h"
#import "SCSearchStoryShareSessionDelegate.h"
#import "SCStoryMiniProfileViewControllerDelegate.h"

@class NSDictionary, NSString, SCDiscoverFeedStoriesEverywhereService, SCEventListenerAnnouncer, SCMiniProfileActionHandler, SCSearchNavigationCoordinator, SCSearchStoriesPresenter, SCSearchStorySharePopupPresenter, SCSearchStoryShareSession, SCUserSession, UIViewController;

@interface SCSearchDynamicStoryActionHandler : NSObject <SCSearchStoriesPresenterDelegate, SCSearchStorySharePopupPresenterDelegate, SCSearchStoryShareSessionDelegate, SCEventListener, SCStoryMiniProfileViewControllerDelegate, SCActionHandling, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCSearchStorySharePopupPresenter *_sharePopupPresenter;
    SCSearchStoryShareSession *_storyShareSession;
    SCSearchStoriesPresenter *_storyPresenter;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSDictionary *_extraLoggingData;
    SCDiscoverFeedStoriesEverywhereService *_storiesEverywhereService;
    SCMiniProfileActionHandler *_miniProfileActionHandler;
    UIViewController *_presentingViewController;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    id <NavigationDelegate> _navigationDelegate;
    id <SCSearchCameraDismissing> _cameraDelegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCSearchCameraDismissing> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(readonly, nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_logSearchAction:(long long)arg1 forActionDestination:(id)arg2;
- (void)_performSendStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionSendStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (id)storyMiniProfileViewControllerOperaDataModelToPresent:(id)arg1;
- (void)storyMiniProfileViewControllerDidTapActionButton:(id)arg1;
- (id)_loggingInfoWithAction:(long long)arg1;
- (void)_updateExtraLoggingDataWithActionModel:(id)arg1;
- (id)_fullScreenDummyPresentingViewController;
- (void)_presentStorySharePopupForDynamicStory:(id)arg1 withThumbnailSize:(struct CGSize)arg2 dynamicStorySourceView:(id)arg3 actionModel:(id)arg4;
- (void)_miniProfileActionHandler:(id)arg1 didUpdateSubscribeState:(unsigned long long)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)searchModalPresenterDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchModalPresenterPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (id)presentingViewControllerForPopupPresenter:(id)arg1;
- (void)searchStorySharePopupPresenter:(id)arg1 didPressWatchNowButtonWithDynamicStory:(id)arg2 dynamicStorySourceView:(id)arg3;
- (void)searchStorySharePopupPresenter:(id)arg1 didPressSendButtonWithDynamicStory:(id)arg2 coverImage:(id)arg3;
- (_Bool)isCustomPresentationForSearchStoriesPresenter:(id)arg1;
- (void)searchStoryPresenterDidFinishDismissingStory:(id)arg1;
- (id)presentingViewControllerForSearchStoriesPresenter:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)setNavigationDelegate:(id)arg1;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

