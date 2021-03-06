//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventListener.h"
#import "SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate.h"
#import "SCTraceEnabled.h"
#import "SCUnifiedProfilePlayStoryActionHandlerDelegate.h"
#import "SCUnifiedProfileStoriesPlaybackHandling.h"

@class NSString, SCEventListenerAnnouncer, SCMyUnifiedProfileBitmojiActionHandler, SCMyUnifiedProfileCreateYourOwnActionHandler, SCMyUnifiedProfileEventsSectionActionHandler, SCMyUnifiedProfileFriendActionHandler, SCMyUnifiedProfileHeaderActionHandler, SCMyUnifiedProfileMapSectionActionHandler, SCMyUnifiedProfilePostRegistrationActionHandler, SCMyUnifiedProfilePresentActionMenuActionHandler, SCMyUnifiedProfileSnapProActionHandler, SCMyUnifiedProfileUsernameActionHandler, SCUnifiedProfileLoggingService, SCUnifiedProfileMyStoriesActionHandler, SCUnifiedProfilePlayStoryActionHandler, SCUnifiedProfileShowCameraActionHandler, SCUnifiedProfileStoryActionMenuActionHandler, SCUnifiedProfileViewController, SCUserSession;

@interface SCMyProfilePageActionHandler : NSObject <SCMyUnifiedProfilePresentActionMenuActionHandlerDelegate, SCUnifiedProfilePlayStoryActionHandlerDelegate, SCTraceEnabled, SCActionHandling, SCUnifiedProfileStoriesPlaybackHandling, SCEventListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMyUnifiedProfileHeaderActionHandler *_headerActionHandler;
    SCMyUnifiedProfileBitmojiActionHandler *_bitmojiActionHandler;
    SCMyUnifiedProfileFriendActionHandler *_friendActionHandler;
    SCMyUnifiedProfileMapSectionActionHandler *_mapActionHandler;
    SCMyUnifiedProfilePostRegistrationActionHandler *_postRegistrationActionHandler;
    SCUnifiedProfileMyStoriesActionHandler *_storiesActionHandler;
    SCMyUnifiedProfileSnapProActionHandler *_snapProActionHandler;
    SCMyUnifiedProfileUsernameActionHandler *_usernameActionHandler;
    SCUnifiedProfilePlayStoryActionHandler *_playFriendStoryActionHandler;
    SCUnifiedProfileShowCameraActionHandler *_showCameraActionHandler;
    SCMyUnifiedProfileEventsSectionActionHandler *_eventsActionHandler;
    SCMyUnifiedProfileCreateYourOwnActionHandler *_createYourOwnHandler;
    SCMyUnifiedProfilePresentActionMenuActionHandler *_presentActionMenuActionHandler;
    SCUnifiedProfileStoryActionMenuActionHandler *_storyActionMenuActionHandler;
    id <SCStartChatDelegate> _startChatDelegate;
    SCUserSession *_userSession;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    SCUnifiedProfileLoggingService *_loggingService;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) SCUnifiedProfileLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;
- (void).cxx_destruct;
- (void)updateOperaDismissBaseView:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)_handleEditName;
- (void)unifiedProfilePlayStoryActionHandler:(id)arg1 willBeginDismissingStory:(id)arg2 storySectionIdentifier:(id)arg3;
- (void)willDismissViewControllerFromPresentActionMenuActionHandler:(id)arg1;
- (void)presentActionMenuActionHandler:(id)arg1 didPresentViewController:(id)arg2;
- (void)handleActionFromMyUnifiedProfilePresentActionMenuActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)_handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationDelegate:(id)arg1 startChatDelegate:(id)arg2 lagunaPairingDelegate:(id)arg3 postRegistrationStateManager:(id)arg4 storiesDataSourceManager:(id)arg5 userSession:(id)arg6 bitmojiSectionloadingStateProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

