//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGalleryCollectionViewHelperDataSource.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate.h"
#import "SCGalleryEntryViewCellDelegate.h"
#import "SCGalleryPrivateGalleryManagerListener.h"
#import "SCGalleryTabController.h"
#import "SCMergedGalleryDataSourceListener.h"
#import "SCTraceEnabled.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSHashTable, NSMutableArray, NSString, SCGalleryCollectionViewHelper, SCGalleryCollectionViewLayoutCalculator, SCGalleryCollectionViewSelectionHelper, SCGalleryDebugSyncStatusChecker, SCGalleryPrivateTabUnlockedEmptyStateController, SCGalleryTabCollectionView, SCGalleryTabCollectionViewFlowLayout, SCGalleryTabsConfiguration, SCUserSession, UIView, UIViewController;

@interface SCGalleryPrivateUnlockedTabController : NSObject <SCGalleryPrivateGalleryManagerListener, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewHelperDataSource, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCTraceEnabled, SCGalleryEntryViewCellDelegate, SCMergedGalleryDataSourceListener, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    NSArray *_galleryEntriesToDisplay;
    NSArray *_displayedGalleryEntries;
    NSString *_excludedItemIdentifier;
    UIView *_view;
    SCGalleryTabCollectionView *_collectionView;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryTabCollectionViewFlowLayout *_collectionViewLayout;
    SCGalleryCollectionViewLayoutCalculator *_nonuniformCollectionViewLayoutCalculator;
    SCGalleryPrivateTabUnlockedEmptyStateController *_emptyStateController;
    double _lastNotifiedScrollContentOffset;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
    NSHashTable *_referencedEntryCells;
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
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (struct UIEdgeInsets)_collectionViewLayoutSectionInset;
- (void)_notifyScrollContentOffsetChange;
- (void)_updateWithScrollContentInset;
- (void)_updateDisplayedGalleryEntries;
- (void)galleryEntryViewCell:(id)arg1 shouldDeselectForEntry:(id)arg2;
- (void)galleryCollectionViewSelectionHelperRequestSelectMode:(id)arg1;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
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
- (void)privateGalleryManagerDidUnlock:(id)arg1;
- (void)privateGalleryManagerDidLock:(id)arg1;
- (void)privateGalleryManagerDidUpdatePassphrase:(id)arg1;
- (void)privateGalleryManagerDidSetup:(id)arg1;
- (id)pageViewName;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (void)galleryViewDidDisappear;
- (void)galleryViewWillAppear;
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
- (id)indexPathForItem:(id)arg1 isFeatured:(_Bool)arg2;
- (id)itemsInRect:(struct CGRect)arg1;
- (unsigned long long)allItemsCount;
- (_Bool)prefersAllItemsAreNotIterated;
- (id)allItems;
- (id)collectionView;
- (id)view;
- (void)loadViewIfNeeded;
- (_Bool)isViewLoaded;
- (_Bool)shouldDisplay;
- (_Bool)isPrivate;
- (double)scrollBarTopOffset;
- (void)setExcludedItemIdentifier:(id)arg1;
- (_Bool)_shouldShowEmptyStateView;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5 dataObjectContext:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
