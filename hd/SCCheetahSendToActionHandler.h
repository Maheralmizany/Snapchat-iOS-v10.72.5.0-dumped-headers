//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCEventAnnouncing.h"
#import "SCMiniProfileViewControllerDelegate.h"

@class NSString, SCCheetahSendToCreateGroupActionHandler, SCCheetahSendToStoryActionHandler, SCContactSyncWorkFlow, SCEventListenerAnnouncer, SCSendToDocObjectRecipientDataSource, SCSendToOpenMiniProfileActionHandler, SCSendToSelectAllActionHandler, SCUserSession, UIViewController<SCSearchContentViewControlling><SCUIContainer>;

@interface SCCheetahSendToActionHandler : NSObject <SCMiniProfileViewControllerDelegate, SCActionHandling, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCUserSelectionManaging> _selectionStateManager;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCCheetahSendToCreateGroupActionHandler *_createGroupActionHandler;
    SCCheetahSendToStoryActionHandler *_storyActionHandler;
    SCSendToOpenMiniProfileActionHandler *_openMiniProfileActionHandler;
    SCSendToSelectAllActionHandler *_selectAllActionHandler;
    id <SCStartChatDelegate> _startChatDelegate;
    _Bool _sourceIsSnappablesSnap;
    _Bool _sourceIs3DSnap;
    SCContactSyncWorkFlow *_contactSyncWorkFlow;
    UIViewController<SCSearchContentViewControlling><SCUIContainer> *_presentingViewController;
    id <SCSendToGroupButtonControllerDelegate> _groupButtonDelegate;
}

+ (id)announcerIdentifier;
@property(nonatomic) __weak id <SCSendToGroupButtonControllerDelegate> groupButtonDelegate; // @synthesize groupButtonDelegate=_groupButtonDelegate;
@property(nonatomic) __weak UIViewController<SCSearchContentViewControlling><SCUIContainer> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (_Bool)_shouldDeselectLastRecipientsButton;
- (void)_handleTapLastRecipientsButton;
- (void)_handleShowMyContactsAction:(id)arg1;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (void)miniProfileViewControllerDidPressAddFriendButton:(id)arg1;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithConfiguration:(id)arg1 selectionStateManager:(id)arg2 docObjectRecipientDataSource:(id)arg3 storiesDataSource:(id)arg4 ourStoriesDescriptionProvider:(id)arg5 groupStoryActionDelegate:(id)arg6 openMiniProfileActionHandler:(id)arg7 appStoryActionHandler:(id)arg8 listsDataFetcher:(id)arg9 groupsDataFetcher:(id)arg10 customStoriesDataFetcher:(id)arg11;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

