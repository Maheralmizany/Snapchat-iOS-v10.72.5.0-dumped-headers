//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableIndexSet, NSOrderedSet, NSString, SCClearDataSettingsSession, SCUserSession, UITableView;

@interface SCClearDataSettingsViewController : SCGenericSettingsViewController <UITableViewDelegate, UITableViewDataSource>
{
    SCUserSession *_userSession;
    SCClearDataSettingsSession *_logSession;
    UITableView *_tableView;
    NSMutableIndexSet *_featureObserved;
    NSOrderedSet *_rowToFeatureMap;
}

- (void).cxx_destruct;
- (void)_clearCacheManager:(id)arg1;
- (void)_cleanDiscoverCache:(id)arg1;
- (void)_cleanStoriesCache:(id)arg1;
- (long long)_menuRowFromRow:(unsigned long long)arg1;
- (void)_updateTableView;
- (void)_updateCell:(int)arg1 keyPath:(id)arg2 inSection:(long long)arg3 inRow:(long long)arg4;
- (void)_configureCell:(id)arg1 detailRow:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

