//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCDataCoordinatorListener.h"
#import "SCEventAnnouncing.h"
#import "SCImpressionTrackingDelegate.h"
#import "SCSectionBasedCollectionViewUpdaterDelegate.h"
#import "UICollectionViewDelegate.h"

@class NSMutableSet, NSString, SCDiscoverFeedOnboardingActionHandler, SCDiscoverFeedOnboardingButtonView, SCDiscoverFeedOnboardingDataCoordinator, SCEventListenerAnnouncer, SCImpressionTracker, SCQueuePerformer, SCSectionBasedCollectionViewUpdater, SIGLabel, UICollectionView;

@interface SCDiscoverFeedOnboardingViewController : SIGSubscreenViewController <SCDataCoordinatorListener, SCEventAnnouncing, SCImpressionTrackingDelegate, UICollectionViewDelegate, SCSectionBasedCollectionViewUpdaterDelegate>
{
    struct CGAffineTransform _previousStatusBarTransform;
    SCSectionBasedCollectionViewUpdater *_collectionViewUpdater;
    unsigned long long _entryPoint;
    SCDiscoverFeedOnboardingDataCoordinator *_interestSelectionDataCoordinator;
    SCDiscoverFeedOnboardingActionHandler *_onboardingActionHandler;
    id <SCEventListener> _discoverFeedEventsController;
    id <SCImageDownloading> _imageDownloader;
    SCImpressionTracker *_impressionTracker;
    NSMutableSet *_longImpressionData;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCQueuePerformer *_impressionDataPerformer;
    UICollectionView *_contentCollectionView;
    SIGLabel *_subtitleLabel;
    SCDiscoverFeedOnboardingButtonView *_continueButton;
    NSString *_sessionId;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_subtitleLabel:(id)arg1;
- (void)_logDiscoverFeedEvent:(id)arg1 pageType:(long long)arg2;
- (void)_logLongImpressionData:(id)arg1;
- (void)_updateOnboardingSubmissionViewWithSubmissionStatus:(unsigned long long)arg1;
- (void)_updateOnboardingSubmissionViewWithNumberOfSelectedTopicIds:(unsigned long long)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (void)_performUpdateImpressionItems:(id)arg1;
- (void)impressionTracker:(id)arg1 didReachThresholdForItems:(id)arg2 date:(id)arg3;
- (id)_impressionViewItemsForCell:(id)arg1;
- (void)_updateImpressionItemForVisibleCells;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)loadScrollView;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithImageDownloader:(id)arg1 entryPoint:(unsigned long long)arg2 discoverFeedEventsController:(id)arg3 onboardingDataCoordinator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
