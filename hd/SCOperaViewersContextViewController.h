//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCOperaSerengetiViewControllerDelegate.h"
#import "SCOperaViewersContextHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SCOperaViewersContextHeaderView, SCOperaViewersLayer, UITableView;

@interface SCOperaViewersContextViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SCOperaViewersContextHeaderViewDelegate, SCOperaSerengetiViewControllerDelegate>
{
    NSArray *_tableViewDataModel;
    SCOperaViewersContextHeaderView *_headerView;
    long long _centerActionButtonType;
    UITableView *_tableView;
    id <SCOperaSerengetiViewControllerProvidingResult> _serengetiViewControllerProviderResult;
    id <UIScrollViewDelegate> _externalScrollViewDelegate;
    SCOperaViewersLayer *_layer;
    id <SCOperaViewersContextViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaViewersContextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operaSerengetiViewControllerProvidingResult:(id)arg1 didUpdateScrollView:(id)arg2;
- (_Bool)_shouldUseBusinessStoryUI;
- (void)_didTapAvatarView:(id)arg1 forUsername:(id)arg2 displayName:(id)arg3;
- (double)_getCellHeight;
- (id)_screenshotterFromDataEntryArray:(id)arg1;
- (void)_resetTextAlphaToAllCells;
- (void)_updateCellAtIndexPath:(id)arg1 textAlpha:(double)arg2;
- (void)viewersContextHeaderViewDidConfigureCenterActionButtonWithType:(long long)arg1;
- (void)_deleteButtonPressed;
- (void)_saveButtonPressed;
- (void)_postButtonPressed;
- (void)_headerAreaButtonPressed;
- (void)_centerActionButtonPressed;
- (void)_viewersButtonPressed;
- (void)_screenshottersButtonPressed;
- (void)_handleGesture:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)_setupGestureRecognizer;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setExternalScrollViewDelegate:(id)arg1;
- (id)scrollView;
- (void)resetViewersContext;
- (void)enableHeaderCenterActionButton:(_Bool)arg1;
- (void)enableHeaderUpwardAffordanceView:(_Bool)arg1;
- (void)setHeaderStyle:(long long)arg1;
- (void)enableViewersInteraction:(_Bool)arg1;
- (void)enableHeaderArea:(_Bool)arg1;
- (id)_buildSectionDataWithSectionTitle:(id)arg1 viewers:(id)arg2 totalViewerCount:(long long)arg3 shouldHideCaptureIcon:(_Bool)arg4;
- (void)filterDataByScreenshotters;
- (void)filterDataByViewers;
- (void)_setupSerengetiViewControllerIfNeededWithLayer:(id)arg1;
- (void)updateViewersContextWithLayer:(id)arg1;
- (void)updateHeaderViewWithOffset:(double)arg1;
- (void)setHeaderViewWithLayer:(id)arg1;
- (void)_setupButtonsTargets;
- (void)_setupTableView;
- (void)_setupSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

