//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCEventAnnouncing.h"
#import "SCPageNameLogging.h"
#import "SCSectionBasedCollectionViewUpdaterDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, SCDiscoverFeedManagementSettingConfig, SCDiscoverFeedOnboardingDataCoordinator, SCEventListenerAnnouncer, SCExperimentManager, SCSectionBasedCollectionViewUpdater, SIGLabel, UICollectionView;

@interface SCDiscoverFeedManagementSettingFullScreenViewController : SIGSubscreenViewController <UICollectionViewDelegate, SCEventAnnouncing, SCSectionBasedCollectionViewUpdaterDelegate, UITextFieldDelegate, SCPageNameLogging>
{
    SCDiscoverFeedManagementSettingConfig *_config;
    id <SCImageDownloading> _imageDownloader;
    CDUnknownBlockType _presentPublicUserProfileBlock;
    CDUnknownBlockType _impalaShowProfileActionHandlerProvider;
    CDUnknownBlockType _impalaPublisherProfileActionHandlerProvider;
    CDUnknownBlockType _discoverPlayStoryActionHandlerProvider;
    id <SCDiscoverFeedDataMutating> _discoverFeedDataMutator;
    CDUnknownBlockType _requestNotificationPermissionsBlock;
    CDUnknownBlockType _displayOptInNotificationPromptBlock;
    SCDiscoverFeedOnboardingDataCoordinator *_onboardingDataCoordinator;
    SCExperimentManager *_experimentManager;
    id <SCSectionDataProviding> _collectionViewDataProvider;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    id <SCActionHandling> _actionHandler;
    double _previousStatusBarYOffset;
    id <SCEventListener> _discoverFeedEventsController;
    SCEventListenerAnnouncer *_eventAnnouncer;
    UICollectionView *_contentCollectionView;
    SIGLabel *_subtitleLabel;
    SIGLabel *_headerButton;
    _Bool _isEditingHeaderButton;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_didConfirmClearViewHistory;
- (void)_didTapClearButton:(id)arg1;
- (void)_didTapEditButton:(id)arg1;
- (id)_headerButton:(unsigned long long)arg1;
- (id)_subtitleLabel:(id)arg1;
- (void)_updateImpressionItems;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)pageViewName;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewDidLoad;
- (void)loadView;
- (id)loadScrollView;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithDiscoverFeedManagementSettingConfig:(id)arg1 imageDownloader:(id)arg2 presentPublicUserProfileBlock:(CDUnknownBlockType)arg3 impalaShowProfileActionHandlerProvider:(CDUnknownBlockType)arg4 impalaPublisherProfileActionHandlerProvider:(CDUnknownBlockType)arg5 discoverPlayStoryActionHandlerProvider:(CDUnknownBlockType)arg6 discoverFeedDataMutator:(id)arg7 requestNotificationPermissionsBlock:(CDUnknownBlockType)arg8 displayOptInNotificationPromptBlock:(CDUnknownBlockType)arg9 onboardingDataCoordinator:(id)arg10 discoverFeedEventsController:(id)arg11 experimentManager:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

