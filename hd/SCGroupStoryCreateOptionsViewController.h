//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCGroupStorySelectMembersViewControllerDelegate.h"
#import "SCSendToNavigationDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SCGroupStoryCreationSession, SCGroupStoryCreationSettings, SCSearchContainerView, SCSendToTransitionProvider, SCUserSession, UILabel, UITableView;

@interface SCGroupStoryCreateOptionsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCGroupStorySelectMembersViewControllerDelegate, SCSendToNavigationDelegate>
{
    SCUserSession *_userSession;
    UITableView *_tableView;
    UILabel *_footerLabel;
    NSArray *_sections;
    SCGroupStoryCreationSettings *_creationSettings;
    SCGroupStoryCreationSession *_creationSession;
    id <SCCustomStorySettingsViewControllerDelegate> _settingsVCDelegate;
    SCSearchContainerView *_blurredContainerView;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    _Bool _dismissChildVCAnimated;
    long long _context;
}

@property(nonatomic) long long context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dismissSendViewController:(id)arg1;
- (void)_logCreationSession;
- (void)leftButtonPressed;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)getTitle;
- (void)newGroupStorySelectMembersViewController:(id)arg1 updateCustomGroupStoryPrivacyWithPosterIds:(id)arg2 viewerIds:(id)arg3 modifiedSettings:(_Bool)arg4 storyType:(long long)arg5;
- (void)leftSwipeSucceed;
- (void)_presentMemberSelectorWithStoryType:(long long)arg1 selectingPosters:(_Bool)arg2;
- (void)_createPrivateStory;
- (void)_createGeoStory;
- (void)_createCustomStory;
- (long long)_createTypeForIndex:(unsigned long long)arg1;
- (id)_sectionsTemplate;
- (struct UIEdgeInsets)_createOptionCellEdgeInsets;
- (id)_privateStoryCellAtIndexPath:(id)arg1;
- (id)_geoStoryCellAtIndexPath:(id)arg1;
- (id)_customStoryCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (id)initWithCreationContext:(long long)arg1 userSession:(id)arg2 settingsDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
