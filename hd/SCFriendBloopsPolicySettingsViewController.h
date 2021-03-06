//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface SCFriendBloopsPolicySettingsViewController : SCGenericSettingsViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_bloopsPolicyTypes;
    long long _selectedPolicyType;
    id <SCBloopsFriendBloopsPolicyTypeTitleProvider> _policyTypeTitleProvider;
    id <SCFriendBloopsPolicySettingsViewControllerDelegate> _delegate;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SCFriendBloopsPolicySettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)saveSetting;
- (id)getTitle;
- (void)dealloc;
- (void)loadView;
- (id)initWithSelectedPolicyType:(long long)arg1 policyTypeTitleProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

