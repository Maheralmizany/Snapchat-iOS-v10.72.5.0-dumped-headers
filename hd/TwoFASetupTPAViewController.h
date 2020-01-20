//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCPageNameLogging.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCUserSession, UILabel, UITableView;

@interface TwoFASetupTPAViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCPageNameLogging>
{
    NSString *_pageViewName;
    _Bool _leftSwipeable;
    NSString *_infoText;
    UILabel *_infoTextLabel;
    UITableView *_tableView;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *infoTextLabel; // @synthesize infoTextLabel=_infoTextLabel;
@property(retain, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(nonatomic) _Bool leftSwipeable; // @synthesize leftSwipeable=_leftSwipeable;
- (void).cxx_destruct;
- (void)leftButtonPressed;
- (_Bool)disableLeftSwipe;
- (void)presentOTPCodeVerifyView:(id)arg1;
- (void)didSelectFindApp;
- (void)didSelectManualSetup;
- (void)didSelectAutoSetup;
- (void)showNoTPAPopup;
- (void)showTPAPopupWithUsername:(id)arg1 secret:(id)arg2;
- (_Bool)canFindTPA;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getTableCellWithIdentifier:(id)arg1 InfoText:(id)arg2 SubInfoText:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadView;
- (id)pageViewName;
- (id)getTitle;
- (id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeable:(_Bool)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

