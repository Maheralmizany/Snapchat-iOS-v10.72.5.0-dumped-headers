//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "SCPageNameLogging.h"
#import "SCScanResultViewControllerDelegate.h"
#import "SCSearchBarDelegate.h"
#import "SCSnapcodeCellDelegate.h"
#import "SCSnapcodeDetailControllerDelegate.h"
#import "SCSnapcodeInfoCellDelegate.h"
#import "SWTableViewCellDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EGORefreshTableHeaderView, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSString, PHCachingImageManager, SCSearchBar, SCSnapcodeCell, SCSnapcodeDetailController, SCUserSession, SCWebImageScraperClient, UIActivityIndicatorView, UIButton, UITableView, UIView;

@interface SCSnapcodeListController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSnapcodeCellDelegate, SCSnapcodeInfoCellDelegate, SWTableViewCellDelegate, EGORefreshTableHeaderDelegate, UIScrollViewDelegate, SCSearchBarDelegate, SCSnapcodeDetailControllerDelegate, SCScanResultViewControllerDelegate, SCPageNameLogging>
{
    NSMutableArray *_recentSnapcodes;
    NSMutableArray *_searchResultSnapcodes;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_overlayView;
    UIActivityIndicatorView *_snapcodeLoadingIndicator;
    _Bool _showingSnapcodeInFocusView;
    int _deletedItemCountInCurrentPage;
    double cellTopYSnapcodePadding;
    SCSnapcodeCell *_selectedCell;
    SCSnapcodeDetailController *_detailController;
    SCWebImageScraperClient *_webScraperClient;
    NSMutableDictionary *_cellGhostImages;
    NSLock *_lockImageAccess;
    NSArray *_cameraRollAssets;
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    NSString *mySnapcodeText;
    _Bool _includeMySnapcodeInSearchResult;
    _Bool _reloading;
    _Bool _searching;
    UITableView *_tableView;
    UITableView *_searchTableView;
    UIButton *_createButton;
    SCSearchBar *_searchBar;
    EGORefreshTableHeaderView *_refreshHeaderView;
    PHCachingImageManager *_imageManager;
}

@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(nonatomic) _Bool reloading; // @synthesize reloading=_reloading;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) SCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (void)xButtonPressed;
- (void)searchBarKeyboardWillHide:(id)arg1;
- (void)searchBarDidBeginSearch:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 didSearch:(id)arg2;
- (id)pageViewName;
- (void)snapcodeDetailControllerDidUpdateDataInCell:(id)arg1 toScannableInfo:(id)arg2;
- (void)snapcodeDetailControllerDidUpdateGhostImageInCell:(id)arg1 image:(id)arg2;
- (void)snapcodeDetailControllerDidDeleteCell:(id)arg1 scannableInfo:(id)arg2;
- (void)finishedHideSnapcodeFocusView;
- (void)snapcodeInfoCellRequestSnapcode:(id)arg1;
- (void)snapcodeInfoCellCloseHighlightItem;
- (void)snapcodeInfoCellRequestGhostImage:(id)arg1;
- (void)snapcodeCellHighlightItem:(id)arg1;
- (_Bool)disableLeftSwipe;
- (void)snapcodeDataStoreDidUpdate:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_showSnapcodeData;
- (void)didConfirmPressDeleteButton:(id)arg1;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)arg1;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showAlert:(id)arg1 title:(id)arg2;
- (void)showAlert:(id)arg1;
- (void)_showDeleteConfirmDialog:(id)arg1;
- (void)_searchClose;
- (void)_filterSearch:(id)arg1;
- (void)_filterResults:(id)arg1;
- (void)_snapcodeHideHighlightItem;
- (void)showPhotoAccessDeniedAlert;
- (void)_initImageManager;
- (id)rightUtilityButtons;
- (id)_getSnapcodeAccountCellOnTableView:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_isUnlockableNoEditingSnapcode:(id)arg1;
- (id)_getSnapcodeInfoCellOnTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)leftButtonPressed;
- (id)titleForHeader:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)resetView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)initTableView;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

