//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCSettingsSwitchTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCSettingsSwitchTableViewCell, SCUserSession, UIButton, UITableView;

@interface SCManageContactsSettingsViewController : SCGenericSettingsViewController <SCSettingsSwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SCUserSession *_userSession;
    id <SCSnapchattersDataMutating> _snapchattersDataMutator;
    UITableView *_table;
    SCSettingsSwitchTableViewCell *_syncContactSwitchCell;
    UIButton *_deleteAllMyContactsButton;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)quickAddCell;
- (void)_deleteAllMyContactsButtonClicked;
- (void)_showAllMyContactsButtonClicked;
- (void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getTitle;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 snapchattersDataMutator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
