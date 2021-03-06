//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCloudSyncStatusListener.h"
#import "SCGalleryCollectionViewHelperDataSource.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate.h"
#import "SCGalleryEmptyTabViewDelegate.h"
#import "SCGalleryEntryViewCellDelegate.h"
#import "SCGalleryFeaturedStoryCellDelegate.h"
#import "SCGalleryImportCameraRollViewControllerDelegate.h"
#import "SCGalleryLagunaImportHeaderDelegate.h"
#import "SCGalleryTabController.h"
#import "SCGalleryTabImportFromCameraRollViewDelegate.h"
#import "SCGalleryUserDefaultsManagerListener.h"
#import "SCLagunaAppStatusListener.h"
#import "SCMergedGalleryDataSourceListener.h"
#import "SCTraceEnabled.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSHashTable, NSMutableArray, NSString, SCDataObjectContext, SCGalleryCollectionViewHelper, SCGalleryCollectionViewLayoutCalculator, SCGalleryCollectionViewSelectionHelper, SCGalleryDebugSyncStatusChecker, SCGalleryEmptyTabView, SCGalleryImportCameraRollAssetItemsFetcher, SCGalleryLagunaImportHeader, SCGalleryPhotoLibraryFetcher, SCGalleryPreviewController, SCGallerySendController, SCGalleryTabCollectionView, SCGalleryTabCollectionViewFlowLayout, SCGalleryTabsConfiguration, SCUserSession, UIViewController;

@interface SCGalleryAllTabController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewHelperDataSource, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCGalleryEmptyTabViewDelegate, SCGalleryImportCameraRollViewControllerDelegate, SCGalleryTabImportFromCameraRollViewDelegate, SCTraceEnabled, SCGalleryEntryViewCellDelegate, SCGalleryFeaturedStoryCellDelegate, SCLagunaAppStatusListener, SCGalleryLagunaImportHeaderDelegate, SCMergedGalleryDataSourceListener, SCGalleryUserDefaultsManagerListener, SCCloudSyncStatusListener, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    NSArray *_allGalleryEntries;
    NSArray *_displayedGalleryEntries;
    NSString *_excludedItemIdentifier;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    SCGalleryTabCollectionView *_collectionView;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryTabCollectionViewFlowLayout *_collectionViewLayout;
    SCGalleryCollectionViewLayoutCalculator *_nonuniformCollectionViewLayoutCalculator;
    SCGalleryEmptyTabView *_emptyTabView;
    SCGalleryPhotoLibraryFetcher *_emptyTabViewFetcher;
    double _lastNotifiedScrollContentOffset;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
    _Bool _showingImportFromCameraRollView;
    NSHashTable *_referencedEntryCells;
    SCGalleryPreviewController *_previewController;
    SCGallerySendController *_sendController;
    NSArray *_featuredGalleryEntries;
    _Bool _shouldDisplayYES2018ToolTip;
    unsigned long long _untransferredHdContentCount;
    SCGalleryLagunaImportHeader *_lagunaImportHeader;
    SCGalleryImportCameraRollAssetItemsFetcher *_cameraRollAssetItemsFetcher;
    _Bool _hasEligibleCameraRollAssetItems;
    _Bool _checkedEligibleCameraRollAssetItems;
    _Bool _shouldShowImportFromCameraRollView;
    SCDataObjectContext *_dataObjectContext;
    _Bool _visible;
    _Bool _focused;
    _Bool _loading;
    _Bool _selectMode;
    id <SCGalleryTabControllerDelegate> _delegate;
    unsigned long long _tabType;
    struct UIEdgeInsets _scrollContentInset;
}

@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) __weak id <SCGalleryTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) struct UIEdgeInsets scrollContentInset; // @synthesize scrollContentInset=_scrollContentInset;
- (void).cxx_destruct;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)galleryUserDefaultsManager:(id)arg1 didUpdateWithChangedAttributes:(id)arg2;
- (void)_checkEligibleCameraRollAssetItems;
- (void)_presentImportCameraRollViewController;
- (void)_updateImportFromCameraRollView;
- (_Bool)_shouldShowImportFromCameraRollView:(id)arg1;
- (void)_updateShowsImportFromCameraRollView;
- (_Bool)_haveNotUsedCameraRollImport;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)lagunaImportHeaderDidPressImportButton:(id)arg1;
- (id)_untransferredHdContents;
- (unsigned long long)_untransferredHdContentCount;
- (id)_galleryViewController;
- (void)_updateLagunaImportHeader;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)featuredStoryCell:(id)arg1 didDismissTooltip:(id)arg2;
- (void)featuredStoryCell:(id)arg1 sendStory:(id)arg2;
- (void)featuredStoryCell:(id)arg1 saveStory:(id)arg2;
- (void)_presentPreviewForSingleSnap:(id)arg1 inEntry:(id)arg2;
- (void)featuredStoryCell:(id)arg1 editStory:(id)arg2;
- (void)featuredStoryCell:(id)arg1 presentActionMenu:(id)arg2;
- (id)_singleSnapInFeaturedStory:(id)arg1;
- (void)_notifyDisplayedContentDidChange;
- (void)_notifyScrollContentOffsetChange;
- (struct UIEdgeInsets)_collectionViewLayoutSectionInset;
- (void)_updateWithScrollContentInset;
- (id)_indexPathsFromIndexSet:(id)arg1;
- (void)_updateDisplayedGalleryEntries:(_Bool)arg1;
- (_Bool)_updateEmptyTabViewIfNeeded:(_Bool)arg1;
- (id)_galleryEntriesToDisplay:(id)arg1;
- (_Bool)_shouldShowEmptyTabView;
- (id)_featuredGalleryEntries;
- (void)_updateCellsScreenPosition;
- (void)galleryTabImportFromCameraRollViewDidPressDismiss:(id)arg1;
- (void)galleryTabImportFromCameraRollViewDidPressImport:(id)arg1;
- (void)galleryImportCameraRollViewControllerDidFinish:(id)arg1;
- (void)galleryEmptyTabViewDidPressImport:(id)arg1;
- (void)galleryEntryViewCell:(id)arg1 shouldDeselectForEntry:(id)arg2;
- (void)galleryCollectionViewSelectionHelperRequestSelectMode:(id)arg1;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)galleryViewWillAppear;
- (id)pageViewName;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (void)galleryViewDidDisappear;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
- (unsigned long long)currentMediaScenePathComponent;
- (void)endEditing;
- (_Bool)isEditing;
- (_Bool)isTracking;
- (_Bool)isDragging;
- (void)scrollToGalleryItem:(id)arg1 animated:(_Bool)arg2;
- (id)selectedGalleryItems;
- (void)changeSelected:(_Bool)arg1 forGalleryItem:(id)arg2;
@property(readonly, nonatomic) double scrollContentDistanceToTop;
- (void)setScrollContentOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double scrollContentOffset;
- (id)collectionView;
- (id)view;
- (void)loadViewIfNeeded;
- (_Bool)isViewLoaded;
- (void)setExcludedItemIdentifier:(id)arg1;
- (_Bool)shouldDisplay;
- (id)indexPathForItem:(id)arg1 isFeatured:(_Bool)arg2;
- (id)itemsInRect:(struct CGRect)arg1;
- (unsigned long long)allItemsCount;
- (_Bool)prefersAllItemsAreNotIterated;
- (id)allItems;
- (double)scrollBarTopOffset;
- (_Bool)isPrivate;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5 dataObjectContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

