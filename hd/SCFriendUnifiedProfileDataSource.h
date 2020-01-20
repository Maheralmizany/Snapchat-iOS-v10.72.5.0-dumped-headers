//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataCoordinatorListener.h"
#import "SCEventListener.h"
#import "SCSnapchattersDataRequestListener.h"
#import "SCUpdateAnnouncing.h"
#import "SCUpdateListener.h"

@class NSNumber, NSString, SCCreatorSettingsDataFetcher, SCCreatorSettingsDataMutator, SCExperimentManager, SCFriendUnifiedProfileConfiguration, SCFriendsFeedItem, SCLazy, SCNetworkImage, SCQueuePerformer, SCSnapchatter, SCSnapchatterFriendStatusProvider, SCUpdateListenerAnnouncer, SCUserSession;

@interface SCFriendUnifiedProfileDataSource : NSObject <SCSnapchattersDataRequestListener, SCDataCoordinatorListener, SCUpdateListener, SCEventListener, SCUpdateAnnouncing>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchatterDataTracker;
    SCLazy *_snapchatterPublicInfoFetcher;
    id <SCLegacyItemDownloading> _scoreInfoFetcher;
    SCLazy *_userInfoProvider;
    SCUserSession *_userSession;
    SCLazy *_friendsFeedDataAccess;
    SCExperimentManager *_experimentManager;
    SCCreatorSettingsDataFetcher *_creatorSettingsFetcher;
    SCCreatorSettingsDataMutator *_creatorSettingsMutator;
    SCSnapchatterFriendStatusProvider *_addFriendStatusProvider;
    NSString *_userId;
    NSString *_username;
    SCSnapchatter *_snapchatter;
    NSString *_userScore;
    _Bool _messageNotificationStatus;
    _Bool _isUpdatingMuteStory;
    _Bool _storyNotificationsIsOptedIn;
    SCNetworkImage *_storyThumbnailNetworkImage;
    _Bool _hasUnviewedStories;
    long long _addFriendStatus;
    long long _cognacNotificationStatus;
    SCFriendsFeedItem *_friendsFeedItem;
    NSNumber *_messageRetentionInMinutes;
    long long _storyContentType;
    SCLazy *_storiesDataAccess;
    SCLazy *_storiesDataProvider;
    SCFriendUnifiedProfileConfiguration *_configuration;
    NSString *_sessionId;
}

+ (id)announcerIdentifier;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) SCFriendUnifiedProfileConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) SCLazy *storiesDataProvider; // @synthesize storiesDataProvider=_storiesDataProvider;
@property(readonly, nonatomic) SCLazy *storiesDataAccess; // @synthesize storiesDataAccess=_storiesDataAccess;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_dispatchStoryNotificationsOptInStatusUpdate;
- (void)_updateStoryNotificationsOptInStatus:(_Bool)arg1;
- (void)_updateStoryNotificationsOptInStatusAndShowPromptIfNecessary:(_Bool)arg1;
- (void)_fetchStoryNotificationsOptInStatus;
- (void)_performUpdateCognacNotificationStatus:(long long)arg1;
- (void)_updateCognacNotificationStatus:(long long)arg1;
- (void)_fetchCognacNotificationStatus;
- (void)updateCognacNotificationStatus:(_Bool)arg1 isPending:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_dispatchMessageRetentionInMinutesUpdate;
- (void)_setMessageRetentionInMinutes:(unsigned long long)arg1;
- (void)_fetchMessageRetentionInMinutes;
- (void)_dispatchMuteStoryUpdate;
- (void)_updateMuteStoryAndNotificationsStatesWithUserId:(id)arg1;
- (void)_setIsUpdatingMuteStory:(_Bool)arg1;
- (void)_dispatchFriendsFeedItemUpdate;
- (void)_updateFriendsFeedItem:(id)arg1;
- (void)_updateFriendsFeedItemBasedOnFriendsFeedData;
- (void)_dispatchAddFriendStatusUpdate;
- (void)_dispatchIgnoreFriendSuggestion;
- (void)_dispatchIgnoreFriendRequest;
- (void)_dispatchBlockFriend;
- (void)_dispatchRemoveFriend;
- (void)_dispatchStoryThumbnailNetworkImageUpdate;
- (void)_updateStoryThumbnailNetworkImage:(id)arg1 hasUnviewedStories:(_Bool)arg2 storyContentType:(long long)arg3;
- (void)_udpateStoryThumbnailNetworkImage;
- (void)_dispatchMessageNotificationStatusUpdate;
- (void)_updateMessageNotificationStatus:(_Bool)arg1;
- (void)reloadMessageNotificationStatus;
- (void)_dispatchUserScoreUpdate;
- (void)_updateUserScore:(id)arg1;
- (void)_updateUserScore;
- (void)_dispatchSnapchatterUpdate;
- (void)_setSnapchatter:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateSnapchatterWithUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)updateMessageRetentionInMinutes:(unsigned long long)arg1;
- (void)updateMessageNotificationStatus:(_Bool)arg1;
- (long long)storyContentType;
- (id)snapchatterDataFetcher;
- (_Bool)isPinned;
- (long long)nonFriendAddSourceType;
- (id)messageRetentionInMinutes;
- (id)friendsFeedItem;
- (long long)addFriendStatus;
- (long long)storyNotificationsOptInStatus;
- (long long)cognacNotificationStatus;
- (long long)muteStoryStatus;
- (id)storyThumbnailNetworkImage;
- (_Bool)hasUnviewedStories;
- (_Bool)notificationStatus;
- (id)userScore;
- (id)userId;
- (_Bool)isArroyoConversation;
- (id)conversationId;
- (id)userSnapchatter;
- (id)tempSnapchatter;
- (id)snapchatter;
- (id)userSession;
- (void)dealloc;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataFetcher:(id)arg2 snapchattersDataTracker:(id)arg3 snapchatterPublicInfoFetcher:(id)arg4 scoreInfoFetcher:(id)arg5 userInfoProvider:(id)arg6 userSession:(id)arg7 friendsFeedDataAccess:(id)arg8 storiesDataAccess:(id)arg9 storiesDataProvider:(id)arg10 experimentManager:(id)arg11 friendProfileConfiguration:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

