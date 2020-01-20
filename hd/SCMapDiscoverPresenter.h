//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaPresenterDelegate.h"

@class NSString, SCOperaPlaylistCommercePlugin, SCOperaPlaylistEditionsPlugin, SCOperaPresenter, SCUserSession, SCXRenderLock, SCXRenderLockManager, UIView, UIViewController<SCPageNameLogging>;

@interface SCMapDiscoverPresenter : NSObject <SCOperaPresenterDelegate>
{
    SCUserSession *_userSession;
    SCXRenderLockManager *_renderLockManager;
    SCOperaPresenter *_operaPresenter;
    SCOperaPlaylistEditionsPlugin *_editionsPlugin;
    SCOperaPlaylistCommercePlugin *_commercePlugin;
    SCXRenderLock *_renderLock;
    UIView *_baseView;
    _Bool _didAlreadyDismiss;
    _Bool _didCleanupAfterDismissal;
    _Bool _didCancelPresentation;
    id <SCMapDiscoverPresenterDelegate> _delegate;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

@property(retain, nonatomic) UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCMapDiscoverPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2;
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
- (void)_releaseRenderLock;
- (void)_acquireRenderLock;
- (void)_cleanupAfterDismissal;
- (void)_setupOperaPresenter;
- (void)cancelPresentingIfNecessary;
- (void)dismiss;
- (void)presentDiscoverEdition:(id)arg1 loadBeforePresenting:(_Bool)arg2 baseView:(id)arg3;
- (id)initWithUserSession:(id)arg1 renderLockManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
