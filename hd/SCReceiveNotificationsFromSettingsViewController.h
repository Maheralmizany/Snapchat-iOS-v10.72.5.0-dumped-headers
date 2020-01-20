//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView;

@interface SCReceiveNotificationsFromSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCPageNameLogging>
{
    long long _receiveNotifsFromSetting;
    UITableView *_table;
}

@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
@property(nonatomic) long long receiveNotifsFromSetting; // @synthesize receiveNotifsFromSetting=_receiveNotifsFromSetting;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)saveSetting;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getTitle;
- (void)viewDidLoad;
- (void)loadView;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

