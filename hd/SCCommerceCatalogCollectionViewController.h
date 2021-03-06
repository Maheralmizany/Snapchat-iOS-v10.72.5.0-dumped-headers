//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCommerceCatalogPaginationErrorCollectionViewCellDelegate.h"
#import "SCEventListener.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, SCLoadingIndicatorView, SCUserSession, UICollectionView;

@interface SCCommerceCatalogCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, SCCommerceCatalogPaginationErrorCollectionViewCellDelegate, SCEventListener>
{
    SCUserSession *_userSession;
    id <SCCompositeNetworkImageDownloading> _imageDownloader;
    id <SCCommercePaginationProviding> _paginationProvider;
    id <SCActionHandling> _actionHandler;
    SCLoadingIndicatorView *_loadingView;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_handlePageItemsLoadingFailedWithChangedIndices:(id)arg1;
- (void)_updateCellAtIndexPath:(id)arg1;
- (void)_handlePageItemsLoadingUpdatedWithChangedIndices:(id)arg1;
- (void)_handlePageFinalItemsLoadedWithRemovedIndices:(id)arg1;
- (void)_handlePageItemsLoadedWithAddedIndices:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didTapRetryForSCCommerceCatalogPaginationErrorCollectionViewCell:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_paginationErrorCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)_paginationLoadingCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)_storeCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)_productCellForViewModel:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadNextPageIfNeeded;
- (void)_setupLoadingView;
- (void)_setupCollectionView;
- (void)scrollToTop:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 imageDownloader:(id)arg2 paginationProvider:(id)arg3 actionHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

