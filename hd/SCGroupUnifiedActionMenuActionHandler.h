//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventAnnouncing.h"
#import "SCGroupUnifiedActionMenuSettingsActionHandlerDelegate.h"
#import "SCTraceEnabled.h"
#import "SCUnifiedActionMenuPresenterDelegate.h"
#import "SCUpdateListener.h"

@class NSString, SCEventListenerAnnouncer, SCFeatureSettingsManager, SCGroupUnifiedActionMenuSettingsActionHandler, SCGroupUnifiedProfileDataSource, SCUnifiedActionMenuPresenter, SCUnifiedProfileLoggingService, SCUnifiedProfileMyStoriesDataSource;

@interface SCGroupUnifiedActionMenuActionHandler : NSObject <SCUnifiedActionMenuPresenterDelegate, SCUpdateListener, SCTraceEnabled, SCGroupUnifiedActionMenuSettingsActionHandlerDelegate, SCActionHandling, SCEventAnnouncing>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCGroupUnifiedActionMenuSettingsActionHandler *_settingsActionHandler;
    SCUnifiedProfileMyStoriesDataSource *_myStoriesDataSource;
    SCUnifiedActionMenuPresenter *_settingsActionMenuPresenter;
    _Bool _shouldDisplayBadgeInAddToGroup;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    id <SCGroupUnifiedActionMenuActionHandlerDelegate> _delegate;
    SCGroupUnifiedProfileDataSource *_dataSource;
    SCUnifiedProfileLoggingService *_loggingService;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) SCGroupUnifiedProfileDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCGroupUnifiedActionMenuActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCUnifiedActionMenuPresenter *actionMenuPresenter; // @synthesize actionMenuPresenter=_actionMenuPresenter;
- (void).cxx_destruct;
- (void)_goBackToLastActionSheet;
- (void)dismissAllActionMenus;
- (void)_presentActionMenuWithDataProvider:(id)arg1;
- (void)_presentSettingsActionMenu;
- (void)_presentManageGroupActionMenu;
- (void)_presentStorySettingsActionMenu;
- (void)_presentChatSettingsActionMenu;
- (void)willClearGroupConversation:(id)arg1;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithUserSession:(id)arg1 groupManager:(id)arg2 groupsDataMutator:(id)arg3 dataSource:(id)arg4 myStoriesDataSource:(id)arg5 friendsFeedDataCoordinator:(id)arg6 conversationManager:(id)arg7 nativeFeedManager:(id)arg8 arroyoConversationIdsManager:(id)arg9 pinnedConversationsDataCoordinator:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

