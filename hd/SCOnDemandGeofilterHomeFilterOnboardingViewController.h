//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCOnDemandGeofilterDataControllerListener.h"
#import "UIPageViewControllerDataSource.h"

@class NSArray, NSString, SCHeader, SIGButton, SOJUUnlockablesOndemandGetHomeFilterResponse, SOJUUnlockablesOndemandTemplateCategory, UIButton, UIPageControl, UIPageViewController;

@interface SCOnDemandGeofilterHomeFilterOnboardingViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate, SCOnDemandGeofilterDataControllerListener, UIPageViewControllerDataSource>
{
    UIPageViewController *_pageViewController;
    SIGButton *_getStartedButton;
    UIButton *_skipButton;
    UIPageControl *_pageControl;
    SCHeader *_header;
    id <SCOnDemandGeofilterLayoutProvider> _layoutProvider;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    SOJUUnlockablesOndemandTemplateCategory *_category;
    SOJUUnlockablesOndemandGetHomeFilterResponse *_existingHFResponse;
    _Bool _wasUserHFRequestSuccessful;
    _Bool _pendingUserHFRequest;
    _Bool _pendingCategoryRequest;
    NSArray *_titles;
    NSArray *_subTitles;
    NSArray *_bitmojiTemplateList;
    _Bool _wasGetStartedTapped;
}

- (void).cxx_destruct;
- (void)_presentAlertDialogWithRetry;
- (void)_updateButtonLoadingSpinner;
- (void)_handleResponseWithTemplates:(id)arg1 productType:(long long)arg2 filterType:(unsigned long long)arg3 success:(_Bool)arg4;
- (void)_handleHomeFilterResponse:(id)arg1 success:(_Bool)arg2;
- (void)_presentHFSettingsVC;
- (void)_presentHFTemplatePickerVC;
- (void)_presentNextScreen;
- (void)_sendDataFetchRequests;
- (void)_getStartedButtonPressed;
- (id)_viewControllerForIndex:(unsigned long long)arg1;
- (void)_setupPageControl;
- (void)_setupPageContentView;
- (void)_setupSkipButton;
- (void)_setupGetStartedButton;
- (void)_setupHeaderView;
- (void)dataController:(id)arg1 didFetchHomeFilterResponse:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 productType:(long long)arg3 filterType:(unsigned long long)arg4 success:(_Bool)arg5;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTemplateCategory:(id)arg1 geofilterSession:(id)arg2;
- (id)initWithGeofilterSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
