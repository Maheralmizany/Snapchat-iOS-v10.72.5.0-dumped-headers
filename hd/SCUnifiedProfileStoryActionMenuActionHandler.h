//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCSnapchatterSelectionDelegate.h"
#import "SCTraceEnabled.h"
#import "SCUnifiedActionMenuPresenterDelegate.h"

@class NSString, SCExperimentManager, SCLazy, SCModalUIContainer, SCScopedAccess, SCUnifiedActionMenuPresenter, SCUnifiedProfileMyStoriesActionHandler, SCUnifiedProfileMyStoriesDataSourceManager, SCUnifiedProfileMyStorySettingsActionMenuDataProvider, SCUnifiedProfileShowCameraActionHandler, UIViewController;

@interface SCUnifiedProfileStoryActionMenuActionHandler : NSObject <SCUnifiedActionMenuPresenterDelegate, SCTraceEnabled, SCSnapchatterSelectionDelegate, SCActionHandling>
{
    SCUnifiedProfileMyStoriesDataSourceManager *_storiesDataSourceManager;
    SCUnifiedActionMenuPresenter *_actionMenuPresenter;
    SCUnifiedActionMenuPresenter *_myStoriesSettingsNestedActionMenuPresenter;
    SCExperimentManager *_experimentManager;
    SCUnifiedProfileMyStoriesActionHandler *_storiesActionHandler;
    SCUnifiedProfileShowCameraActionHandler *_showCameraActionHandler;
    SCUnifiedProfileMyStorySettingsActionMenuDataProvider *_storySettingsDataProvider;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_storyPrivacySettingManager;
    SCScopedAccess *_snapchatterSelectionLauncher;
    SCModalUIContainer *_customStorySettingsSelectionUIContainer;
    NSString *_currentUserId;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)didDismissWithSelectedItems:(id)arg1;
- (void)didConfirmWithSelectedItems:(id)arg1;
- (void)unifiedActionMenuPresenterWillDismiss:(id)arg1;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;
- (void)_handleStoryPrivacyUpdateWithSuccess:(_Bool)arg1;
- (void)_handleStoryPrivacyUpdateRequest:(id)arg1;
- (void)_handleSetStoryPrivacyAction:(long long)arg1;
- (void)_presentCustomStoryViewersWithSnapchatters:(id)arg1;
- (void)_handleSetStoryPrivacyCustom;
- (void)_presentMenuViewWithDataProvider:(id)arg1;
- (void)_goBackToLastStoriesSettingActionSheet;
- (void)_presentMyStorySettingsActionMenu:(long long)arg1 storyIdentifier:(id)arg2;
- (void)_presentMyStoryStoryActionMenu:(long long)arg1 storyIdentifier:(id)arg2;
- (void)_dismissActionMenuWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleActionInShowCameraActionHandler:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_handleActionInStoryActionHandler:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithStoriesDataSourceManager:(id)arg1 storiesActionHandler:(id)arg2 showCameraActionHandler:(id)arg3 experimentManager:(id)arg4 currentUserId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

