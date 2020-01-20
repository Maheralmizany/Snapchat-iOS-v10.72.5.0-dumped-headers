//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "TTTAttributedLabelDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, SCHeader, SCOnDemandGeoProductSelectionSubview, SCOnDemandGeofilterBlurredBackgroundView, UIImageView, UIScrollView;

@interface SCOnDemandGeoProductSelectionViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCHeaderDelegate, SCHeaderDataSource, TTTAttributedLabelDelegate, UIScrollViewDelegate>
{
    SCOnDemandGeofilterBlurredBackgroundView *_blurredBackgroundView;
    SCHeader *_header;
    UIImageView *_headerBGImageView;
    UIScrollView *_scrollView;
    SCOnDemandGeoProductSelectionSubview *_draftView;
    SCOnDemandGeoProductSelectionSubview *_filterView;
    SCOnDemandGeoProductSelectionSubview *_lensView;
}

- (void).cxx_destruct;
- (double)_topLayoutOriginY;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_presentWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)_initiateIAPPayment:(id)arg1;
- (void)_presentDirectlyToCreativeStudio;
- (void)_cleanUpSessionLineItem;
- (id)viewModelForLens;
- (id)viewModelForFilter;
- (id)viewModelForDraft:(id)arg1;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)leftSwipeSucceed;
- (void)_proceedToOccasionsWithProductType:(long long)arg1;
- (void)tapDraftButton:(id)arg1;
- (void)tapLensButton:(id)arg1;
- (void)tapFilterButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

