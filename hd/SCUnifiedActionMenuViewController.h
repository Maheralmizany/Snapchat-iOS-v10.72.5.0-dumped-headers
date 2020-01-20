//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCUnifiedActionMenuDataProviderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBKVOController, NSString, SCUnifiedActionMenuTableView, SCUnifiedActionMenuViewModel;

@interface SCUnifiedActionMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SCUnifiedActionMenuDataProviderDelegate>
{
    SCUnifiedActionMenuTableView *_contentTableView;
    id <SCUnifiedActionMenuDataProvider> _dataProvider;
    id <SCActionHandling> _actionHandler;
    id <SCImageDownloading> _imageDownloader;
    FBKVOController *_observeController;
    SCUnifiedActionMenuViewModel *_viewModel;
    id <SCUnifiedActionMenuViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_unobserveOnContentSize;
- (void)_observeOnContentSize;
- (void)_dismissProfileMenu;
- (void)_updateContentTableViewLayout;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)_updateWithViewModel:(id)arg1;
- (void)dataProviderDidUpdate:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithMenuViewDataProvider:(id)arg1 actionHandler:(id)arg2 imageDownloader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
