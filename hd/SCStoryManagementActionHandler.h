//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate.h"
#import "SCOperaPresenterDelegate.h"

@class NSString, SCMyStories, SCOpenUnifiedProfileActionHandler, SCOperaPresenter, SCUnifiedProfileStoriesUtilityActionHandler, SCUserSession, User;

@interface SCStoryManagementActionHandler : NSObject <SCOperaPresenterDelegate, SCOpenUnifiedProfileActionHandlerDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCMyStories *_myStories;
    User *_user;
    id <SCStoriesPlaybackManagementDataProviding> _playbackManagementDataProvider;
    id <SCStoriesMediaCoordinating> _storiesMediaCoordinator;
    id <SCStartChatDelegate> _startChatDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCOperaPresenter *_operaPresenter;
    SCUnifiedProfileStoriesUtilityActionHandler *_storiesUtilityActionHandler;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
    id <SCStoryManagementActionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCStoryManagementActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)_promptPhotoAccessAlert;
- (id)_storyForClientId:(id)arg1;
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
- (void)_playStoryWithSummaryInfo:(id)arg1 baseView:(id)arg2;
- (void)_playStoryForUsername:(id)arg1 baseView:(id)arg2;
- (void)_createOpenUnifiedProfileActionHandlerIfNeeded;
- (void)_showUnifiedProfileForSnapchatter:(id)arg1;
- (void)_showProfileWithUsername:(id)arg1 displayName:(id)arg2;
- (_Bool)_isCommerceDeepLink:(id)arg1;
- (void)_retryPostingSnapWithClientId:(id)arg1;
- (void)_deleteSnapWithClientId:(id)arg1;
- (void)_saveSnapWithClientId:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 myStories:(id)arg2 playbackManagementDataProvider:(id)arg3 storiesMediaCoordinator:(id)arg4 startChatDelegate:(id)arg5 notificationManager:(id)arg6 navigationDelegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
