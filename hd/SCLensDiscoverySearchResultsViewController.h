//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCLensDiscoverySearchControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSSet, NSString, SCLoadingIndicatorView, UICollectionView, UIView;

@interface SCLensDiscoverySearchResultsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SCLensDiscoverySearchControllerDelegate>
{
    UICollectionView *_collectionView;
    SCLoadingIndicatorView *_progressIndicator;
    UIView *_progressContainer;
    NSArray *_lensesResult;
    id <SCLensDiscoveryUIProviderProtocol> _uiProvider;
    NSString *_searchString;
    _Bool _isSearchActive;
    id <SCLensDiscoverySearchController> _searchController;
    id <SCLensDiscoverySearchResultsViewControllerDelegate> _delegate;
    id <SCLensDiscoveryCellProducerDelegate> _lensDiscoveryCellProducerDelegate;
    NSSet *_selectedLensIds;
}

@property(copy, nonatomic) NSSet *selectedLensIds; // @synthesize selectedLensIds=_selectedLensIds;
@property(nonatomic) __weak id <SCLensDiscoveryCellProducerDelegate> lensDiscoveryCellProducerDelegate; // @synthesize lensDiscoveryCellProducerDelegate=_lensDiscoveryCellProducerDelegate;
@property(nonatomic) __weak id <SCLensDiscoverySearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setSearchActive:(_Bool)arg1;
- (void)_performSearchFromBeginning:(_Bool)arg1;
- (void)_setSearchString:(id)arg1;
- (void)lensDiscoverySearchController:(id)arg1 didFetchObjects:(id)arg2 forQuery:(id)arg3;
- (void)setSearchString:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithSearchController:(id)arg1 uiProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

