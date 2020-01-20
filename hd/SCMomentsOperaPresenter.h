//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaEventListener.h"
#import "SCOperaPlaylistViewCoordinatorDelegate.h"

@class NSString, SCDiscoverFeedMiniProfileHandler, SCLegacyStoriesChromeInteractionSession, SCOperaEventListenerAnnouncer, SCOperaPlaylistPluginsManager, SCOperaPlaylistViewCoordinator, SCOperaViewController, SCUserSession, UIView;

@interface SCMomentsOperaPresenter : NSObject <SCOperaEventListener, SCOperaPlaylistViewCoordinatorDelegate>
{
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    SCLegacyStoriesChromeInteractionSession *_chromeInteractionSession;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    UIView *_baseView;
    SCOperaPlaylistPluginsManager *_playlistPluginManager;
    SCOperaPlaylistViewCoordinator *_playlistViewCoordinator;
    id <SCSearchMomentsOperaPresenterDelegate> _delegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCSearchMomentsOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_setupPlaylistViewCoordinatorWithItemGroupDataModels:(id)arg1 firstDisplayGroupDataModel:(id)arg2 configuration:(id)arg3;
- (void)_setupPlaylistWithPlaylistPlugins:(id)arg1 stories:(id)arg2 configuration:(id)arg3;
- (id)_chromePagePropertiesWithTitle:(id)arg1 subtitle:(id)arg2 displayTimestampSecs:(double)arg3 friendStories:(id)arg4 isLive:(_Bool)arg5;
- (id)_shareableStoryProperties;
- (void)playlistViewCoordinator:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)playlistViewCoordinator:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)dismissWithAnimation:(_Bool)arg1;
- (_Bool)isPresenting;
- (void)presentMomentsWithUrl:(id)arg1 chromeTitle:(id)arg2 chromeSubTitle:(id)arg3 presentingViewController:(id)arg4 baseView:(id)arg5 playlistPlugins:(id)arg6 globalConfiguration:(id)arg7 friendStories:(id)arg8 miniProfileHandler:(id)arg9 storyId:(id)arg10 momentStory:(id)arg11 navigationDelegate:(id)arg12;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
