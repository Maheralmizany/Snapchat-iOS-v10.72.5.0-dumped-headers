//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaPresenterDelegate.h"

@class NSString, SCOperaPresenter, SCUserSession, SCXRenderLock, SCXRenderLockManager, UIViewController<SCPageNameLogging>;

@interface SCMapTapToPlayPresenter : NSObject <SCOperaPresenterDelegate>
{
    SCOperaPresenter *_storyPresenter;
    SCXRenderLock *_renderLock;
    SCXRenderLockManager *_renderLockManager;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    _Bool _didAlreadyDismiss;
    _Bool _didCleanupAfterDismissal;
    id <SCMapTapToPlayPresenterDelegate> _delegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCMapTapToPlayPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)_cleanupIfNeeded;
- (void)_scheduleCheckForCleanup;
- (void)_releaseRenderLock;
- (void)_acquireRenderLock;
- (void)_cleanupAfterDismissal;
- (void)dismissStory;
- (void)presentPlaylist:(id)arg1 initialFriendStories:(id)arg2;
- (id)initWithUserSession:(id)arg1 renderLockManager:(id)arg2 navigationDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

