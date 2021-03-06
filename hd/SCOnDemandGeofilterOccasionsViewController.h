//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCOnDemandGeofilterDataControllerListener.h"
#import "SCOnDemandGeofilterOccasionsViewDataProviderProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SCHeader, SCLoadingIndicatorView, SCOnDemandGeofilterBlurredBackgroundView, SCOnDemandGeofilterOccasionsViewDataProvider, SOJUUnlockablesOndemandTemplateCategoryList, UIImageView, UITableView;

@interface SCOnDemandGeofilterOccasionsViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, SCOnDemandGeofilterOccasionsViewDataProviderProtocol, SCOnDemandGeofilterDataControllerListener, UITableViewDelegate, UITableViewDataSource>
{
    SCOnDemandGeofilterBlurredBackgroundView *_blurredBackgroundView;
    SCHeader *_header;
    UIImageView *_headerBGImageView;
    UITableView *_occasionsTableView;
    SOJUUnlockablesOndemandTemplateCategoryList *_templateCategoryList;
    SCLoadingIndicatorView *_activityIndicator;
    SCOnDemandGeofilterOccasionsViewDataProvider *_dataProvider;
}

- (void).cxx_destruct;
- (void)_prefetchStylizedTextFonts:(id)arg1;
- (void)dataController:(id)arg1 didFetchStylizedTextList:(id)arg2 success:(_Bool)arg3;
- (void)categoryListDidChange:(id)arg1;
- (void)_logPageViewEventWithNextViewController:(id)arg1;
- (id)_nextViewControllerForSelectedCategory:(id)arg1;
- (double)_topLayoutOriginY;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateOnDemandGeofilterLineItemAssetName:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_dimissedViewPageViewEvent;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)leftSwipeSucceed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

