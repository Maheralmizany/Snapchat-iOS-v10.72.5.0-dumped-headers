//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCSettingsSwitchTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, SCNotificationSettingsContext, SCNotificationSettingsLogger, SCSettingsSwitchTableViewCell, SCSettingsTextTableViewCell, SCUserSession, UITableView, UIView;

@interface SCNotificationSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSettingsSwitchTableViewCellDelegate>
{
    NSMutableArray *_settingsTags;
    SCNotificationSettingsContext *_context;
    SCUserSession *_userSession;
    SCNotificationSettingsLogger *_logger;
    _Bool _systemNotificationEnabled;
    SCSettingsSwitchTableViewCell *_storiesCell;
    SCSettingsSwitchTableViewCell *_friendSuggestionsCell;
    SCSettingsSwitchTableViewCell *_userTaggingCell;
    SCSettingsSwitchTableViewCell *_memoriesCell;
    SCSettingsSwitchTableViewCell *_friendsBirthdayCell;
    SCSettingsSwitchTableViewCell *_messageReminderCell;
    SCSettingsSwitchTableViewCell *_creativeToolsCell;
    SCSettingsSwitchTableViewCell *_bestFriendsSoundsCell;
    SCSettingsTextTableViewCell *_manageStoryNotificationsCell;
    _Bool _notificationStoryOn;
    _Bool _notificationFriendSuggestionOn;
    _Bool _notificationUserTaggingOn;
    _Bool _notificationMemoriesOn;
    _Bool _notificationFriendsBirthdayOn;
    _Bool _notificationMessageReminderOn;
    _Bool _notificationCreativeToolsOn;
    _Bool _notificationBestFriendsSoundsOn;
    UITableView *_tableView;
    UIView *_systemNotificationView;
}

@property(retain, nonatomic) UIView *systemNotificationView; // @synthesize systemNotificationView=_systemNotificationView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool notificationBestFriendsSoundsOn; // @synthesize notificationBestFriendsSoundsOn=_notificationBestFriendsSoundsOn;
@property(nonatomic) _Bool notificationCreativeToolsOn; // @synthesize notificationCreativeToolsOn=_notificationCreativeToolsOn;
@property(nonatomic) _Bool notificationMessageReminderOn; // @synthesize notificationMessageReminderOn=_notificationMessageReminderOn;
@property(nonatomic) _Bool notificationFriendsBirthdayOn; // @synthesize notificationFriendsBirthdayOn=_notificationFriendsBirthdayOn;
@property(nonatomic) _Bool notificationMemoriesOn; // @synthesize notificationMemoriesOn=_notificationMemoriesOn;
@property(nonatomic) _Bool notificationUserTaggingOn; // @synthesize notificationUserTaggingOn=_notificationUserTaggingOn;
@property(nonatomic) _Bool notificationFriendSuggestionOn; // @synthesize notificationFriendSuggestionOn=_notificationFriendSuggestionOn;
@property(nonatomic) _Bool notificationStoryOn; // @synthesize notificationStoryOn=_notificationStoryOn;
- (void).cxx_destruct;
- (void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (id)manageStoryNotificationsCell;
- (id)bestFriendsSoundsCell;
- (id)creativeToolsCell;
- (id)messageReminderCell;
- (id)friendsBirthdayCell;
- (id)memoriesCell;
- (id)userTaggingCell;
- (id)friendSuggestionsCell;
- (id)storiesCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateNotificationSettingsIfNecessary;
- (void)_didSelectManageStoryNotifications;
- (void)_notificationButtonPressed;
- (void)leftButtonPressed;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)resetView;
- (void)notificationPermissionMayHaveChanged;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillResignActive;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(id)arg1 userSession:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

