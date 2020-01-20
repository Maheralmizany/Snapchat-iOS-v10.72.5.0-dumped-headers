//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCCustomStoryCreationDelegate.h"

@class NSString, SCLazy, SCScopedAccess, SCSendToGroupStoryActionController, SCSendToSelectionStateManager, SCSendToStoriesDataSource, SCUserSession, UIViewController<SCSearchContentViewControlling><SCUIContainer>;

@interface SCCheetahSendToStoryActionHandler : NSObject <SCCustomStoryCreationDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCSendToStoriesDataSource *_storiesDataSource;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSendToGroupStoryActionController *_groupStoryActionController;
    id <SCSendToGroupStoryActionControllerDelegate> _groupStoryActionDelegate;
    SCLazy *_ourStoriesDescriptionAccess;
    SCLazy *_ourStoriesAttributionManager;
    SCLazy *_customStoriesDataFetcher;
    SCLazy *_groupsDataFetcher;
    id <SCSendToAppStoryActionHandler> _appStoryActionHandler;
    SCScopedAccess *_customStoryCreationLauncher;
    UIViewController<SCSearchContentViewControlling><SCUIContainer> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCSearchContentViewControlling><SCUIContainer> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_setSelectionStateForItemType:(long long)arg1 itemId:(id)arg2 selected:(_Bool)arg3;
- (_Bool)_shouldDeselectLastRecipientsButton;
- (void)_displayOurStoryNameAttributionToggleViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)_displayIntroSendWithTitle:(id)arg1 message:(id)arg2 okayActionText:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_displayIntroSendWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_displayIntroIfNecessaryForBusinessId:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroSendForLiveStoryID:(id)arg1 storyDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_markOurStoriesAttributionWarningAsSeen;
- (void)_displayOurStoryAttributionWarningForStoryDisplayName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayIntroForLensChallengeStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayOurStoryAttributionIntroForSharedStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroForSharedStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroForBestOfSpectaclesStory:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroOnDetailsWithGroupStoryId:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_displayIntroIfNecessaryWithGroupStoryId:(id)arg1 customStory:(id)arg2 onCancel:(CDUnknownBlockType)arg3;
- (void)_displayIntroIfNecessaryForGroupStoryId:(id)arg1 onCancel:(CDUnknownBlockType)arg2;
- (void)_handleSelectStoryForDataModel:(id)arg1;
- (void)_handleFetchedGroupForLongPressGroupChatStory:(id)arg1;
- (void)_handleFetchedCustomStoryForLongPressGroupChatStory:(id)arg1;
- (void)_handleLongPressForChatStoryId:(id)arg1;
- (void)_handleSelectedAccessoryButtonForDataModel:(id)arg1;
- (void)_handleLongPressForGroupStory:(id)arg1;
- (void)didDismissCustomStoryCreation;
- (void)didCreateCustomStoryWithPublicationId:(id)arg1 displayName:(id)arg2 type:(unsigned long long)arg3;
- (void)_handleCreateStory;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 storiesDataSource:(id)arg2 customStoriesDataFetcher:(id)arg3 groupsDataFetcher:(id)arg4 ourStoriesDescriptionProvider:(id)arg5 selectionStateManager:(id)arg6 groupStoryActionDelegate:(id)arg7 appStoryActionHandler:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

