//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera.h"
#import "SCOperaPlaylistItemExtraPropertiesProvider.h"
#import "SCOperaPlaylistStoriesPluginBase.h"

@class NSString, SCBehaviorSubject, SCOperaStoriesPageProviderPlaylistAdapter, SCOperaViewController, SCStoriesOperaDataSource, SCStoriesViewingSession, SCUserSession;

@interface SCOperaPlaylistStoriesPlugin : SCOperaPlaylistFeaturePlugin <SCOperaPlaylistItemExtraPropertiesProvider, SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera, SCOperaPlaylistStoriesPluginBase>
{
    SCStoriesOperaDataSource *_storiesOperaDataSource;
    SCOperaStoriesPageProviderPlaylistAdapter *_friendStoryPageProviderPlaylistAdapter;
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
    SCOperaViewController *_operaVC;
    _Bool _resetMuteOverrideOnDismiss;
    long long _viewingType;
    long long _storyPlayMode;
    long long _viewLocation;
    SCBehaviorSubject *_operaPageProviderSubject;
    NSString *_type;
    SCStoriesViewingSession *_friendStoryViewingSession;
}

@property(readonly, nonatomic) SCStoriesViewingSession *friendStoryViewingSession; // @synthesize friendStoryViewingSession=_friendStoryViewingSession;
- (void).cxx_destruct;
- (_Bool)shouldUseExtendedResetToCamera;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)teardown;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (id)extraPropertiesProvider;
- (id)prefetchRequestHandler;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (id)playlistDataSource;
- (id)type;
- (long long)viewLocation;
- (_Bool)isViewingLongform;
- (long long)storyPlayMode;
- (long long)viewingType;
- (void)stopLoggingEventIfNecessary;
- (void)updateFriendsList:(id)arg1;
- (void)setFriendProvider:(id)arg1;
- (id)initWithUserSession:(id)arg1 storiesPlaybackDataProvider:(id)arg2 storiesMediaCoordinator:(id)arg3 startChatDelegate:(id)arg4 navigationDelegate:(id)arg5 loggingInfo:(id)arg6 playbackConfig:(id)arg7 operaPageProviderSubject:(id)arg8 type:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
