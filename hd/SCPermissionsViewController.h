//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCUserSession, UITableView;

@interface SCPermissionsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate>
{
    SCUserSession *_userSession;
    id <SCPermissionsDelegate> _delegate;
    UITableView *_tableView;
    double _screenWidth;
}

@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SCPermissionsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getTitle;
- (void)promptForEditPermissionsSettingsRequired;
- (void)directToPhoneSettings;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)permissionExplanationCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)permissionExplanationLabelHeight:(id)arg1;
- (double)getRowHeight:(double)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)resetView;
- (void)notificationPermissionMayHaveChanged;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

