//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCContextFriendStoriesPresenterDelegate.h"

@class FriendStories, NSString, SCContextFriendStoriesPresenter, SCContextV2Session, SCUserSession, SCWeakTimer, UIView, UIViewController<SCPageNameLogging>;

@interface SCContextStoryPresenter : NSObject <SCContextFriendStoriesPresenterDelegate>
{
    SCUserSession *_userSession;
    SCContextFriendStoriesPresenter *_presenter;
    id <NavigationDelegate> _navigationDelegate;
    FriendStories *_friendStories;
    NSString *_identifier;
    SCWeakTimer *_mediaRequestTimer;
    UIView *_baseView;
    UIViewController<SCPageNameLogging> *_presentingViewController;
    _Bool _circleTransition;
    SCContextV2Session *_contextSession;
    id <SCContextStoryPresenterDelegate><SCContextOperaPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCContextStoryPresenterDelegate><SCContextOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyPresenterDidDismiss:(id)arg1;
- (void)storyPresenter:(id)arg1 didBeginPlayingDataModel:(id)arg2;
- (void)_cleanup;
- (void)_mediaRequestTimedOut;
- (void)_mediaRequestFailed:(id)arg1;
- (void)_mediaRequestCompleted;
- (void)_didFetchStoryWithCriticalContext:(id)arg1 error:(id)arg2;
- (void)_presentFriendStories:(id)arg1 baseView:(id)arg2 circleTransition:(_Bool)arg3 presentingViewController:(id)arg4 contextSession:(id)arg5;
- (void)presentFriendStoriesWithSummaryInfo:(id)arg1 baseView:(id)arg2 circleTransition:(_Bool)arg3 presentingViewController:(id)arg4 contextSession:(id)arg5;
- (void)presentStory:(id)arg1 baseView:(id)arg2 circleTransition:(_Bool)arg3 presentingViewController:(id)arg4 contextSession:(id)arg5;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

