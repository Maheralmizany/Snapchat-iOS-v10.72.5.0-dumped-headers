//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCEventListener.h"
#import "SCOperaSession.h"
#import "SCSendToDelegate.h"
#import "SCSendToNavigationDelegate.h"

@class NSDictionary, NSString, SCArroyoGroupFilterer, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCCreatorSettingsDataTracker, SCDiscoverFeedStoriesEverywhereService, SCOperaViewController, SCSendToTransitionProvider, SCStoriesOperaPlaybackSequence, SCStoriesSnapPlaybackMetadata, SCStoryUsageLogger, SCUserSession, UIViewController<SCSendToScreen>;

@interface SCStoriesSharingSession : NSObject <SCSendToDelegate, SCSendToNavigationDelegate, SCEventListener, SCOperaSession>
{
    SCStoriesSnapPlaybackMetadata *_storySnap;
    NSString *_storySnapUserId;
    NSDictionary *_currentStoryScoreUpdateProperty;
    NSDictionary *_currentStoryActionMenuDoorbellUpdateProperty;
    SCUserSession *_userSession;
    long long _viewLocation;
    SCDiscoverFeedStoriesEverywhereService *_storiesEverywhereService;
    SCStoryUsageLogger *_usageLogger;
    SCOperaViewController *_operaViewController;
    id <SCStoriesOperaPageProvider> _operaPageProvider;
    id <SCOperaPlaylistItemController> _operaPlaylistItemController;
    UIViewController<SCSendToScreen> *_sendViewController;
    long long _entryEvent;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCStoriesOperaPlaybackSequence *_storiesPlaybackSequence;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCCreatorSettingsDataTracker *_creatorSettingsTracker;
    NSString *_trackingId;
}

@property(copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_showOptInPrompt:(_Bool)arg1;
- (void)_shareLinkForUsername:(id)arg1 inCell:(id)arg2;
- (void)_didSendOperaEvent:(id)arg1;
- (void)_handleShareStoryWithUrl:(id)arg1;
- (id)_legacyStoryInCurrentSharingSession;
- (void)_deletePressed;
- (void)showPhotoAccessDeniedAlertView;
- (void)_saveStory:(_Bool)arg1 additionalText:(id)arg2 shouldShowToast:(_Bool)arg3;
- (void)_savePressed;
- (void)_didDismissSendViewController;
- (void)dismissSendViewController:(id)arg1;
- (id)_selectRecipientConfiguration;
- (void)_sendStorySnapPlaybackInfo:(id)arg1 toConversationIds:(id)arg2 additionalText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendStoryShareToRecipients:(id)arg1 mischiefs:(id)arg2 additionalText:(id)arg3;
- (void)_sendUsingChatSDKWithType:(id)arg1 payload:(id)arg2 recipients:(id)arg3 mischiefs:(id)arg4 additionalText:(id)arg5;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 groups:(id)arg5 appStories:(id)arg6 additionalText:(id)arg7;
- (void)_fetchFriendScore;
- (void)_presentSendViewControllerWithParentViewController:(id)arg1;
- (void)_logFriendStoryOptIn:(_Bool)arg1 interactionContext:(long long)arg2;
- (void)_handleNotificationOptInWithContext:(id)arg1 params:(id)arg2 targetUserId:(id)arg3;
- (void)_fetchCreatorSettingSuccess:(id)arg1 posterUserId:(id)arg2;
- (void)_fetchCreatorSettingWithSnapchatter:(id)arg1;
- (void)_fetchCreatorSetting;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (id)extraPropertiesForStorySnap:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 viewLocation:(long long)arg2 operaViewController:(id)arg3 operaPageProvider:(id)arg4 operaPlaylistItemController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

