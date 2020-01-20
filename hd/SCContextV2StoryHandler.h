//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCComposerAvatarNonFriendStoriesFetching.h"
#import "SCContextOperaPresenterDelegate.h"
#import "SCContextStoryPresenterDelegate.h"
#import "SCContextV2StoryHandler.h"
#import "SCSearchStoriesPresenterDelegate.h"

@class NSMutableDictionary, NSString, SCContextStoryPresenter, SCLazy, SCSearchStoriesPresenter, SCUserSession, UIViewController<SCPageNameLogging>;

@interface SCContextV2StoryHandler : NSObject <SCContextStoryPresenterDelegate, SCSearchStoriesPresenterDelegate, SCContextOperaPresenterDelegate, SCContextV2StoryHandler, SCComposerAvatarNonFriendStoriesFetching>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCContextV2Logger> _logger;
    UIViewController<SCPageNameLogging> *_lastBaseViewController;
    NSMutableDictionary *_friendStorySummaryInfoForUsernames;
    NSMutableDictionary *_friendStoryLastFetchTimesForUsernames;
    SCLazy *_storiesDataCoordinator;
    SCLazy *_storiesDataProvider;
    SCLazy *_snapchatterFetcher;
    SCContextStoryPresenter *_storyPresenter;
    SCSearchStoriesPresenter *_searchStoriesPresenter;
}

@property(retain, nonatomic) SCSearchStoriesPresenter *searchStoriesPresenter; // @synthesize searchStoriesPresenter=_searchStoriesPresenter;
@property(retain, nonatomic) SCContextStoryPresenter *storyPresenter; // @synthesize storyPresenter=_storyPresenter;
- (void).cxx_destruct;
- (void)_updateCachedSummaryInfoWithSummaryInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchStoriesForUsername:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchStoryForUsernameIfAppropriate:(id)arg1 userId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)operaViewerDidDismiss;
- (void)operaViewerDidPresent;
- (void)searchStoryPresenterDidFinishDismissingStory:(id)arg1;
- (void)searchStoryPresenterWillBeginPresentingStory:(id)arg1;
- (id)presentingViewControllerForSearchStoriesPresenter:(id)arg1;
- (void)storyPresenterDidDismiss:(id)arg1;
- (void)storyPresenter:(id)arg1 didBeginPlayingDataModel:(id)arg2;
- (void)_playFriendStoriesWithSummaryInfo:(id)arg1 baseView:(id)arg2 baseViewController:(id)arg3 contextSession:(id)arg4;
- (void)_fetchStoriesRemotelyIfNeededWithUsername:(id)arg1 userId:(id)arg2 baseView:(id)arg3 baseViewController:(id)arg4 contextSession:(id)arg5;
- (void)playStoriesForUsername:(id)arg1 userId:(id)arg2 baseView:(id)arg3 baseViewController:(id)arg4 contextSession:(id)arg5;
- (void)playStoryWithStoryCard:(id)arg1 baseView:(id)arg2 baseViewController:(id)arg3 contextSession:(id)arg4;
- (void)playStoryWithManifest:(id)arg1 baseView:(id)arg2 baseViewController:(id)arg3 contextSession:(id)arg4;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

