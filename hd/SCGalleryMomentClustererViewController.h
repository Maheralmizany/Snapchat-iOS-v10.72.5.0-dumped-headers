//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "IGListAdapterDataSource.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate.h"
#import "SCGalleryOperaPresenterV2Delegate.h"
#import "SCGallerySelectionControllerDataSource.h"
#import "SCGallerySelectionControllerDelegate.h"
#import "SCGallerySnapsTabDataSourceDelegate.h"
#import "SCGallerySnapsTabSnapsSectionControllerDelegate.h"
#import "SCGalleryTabCollectionViewFlowLayoutDelegate.h"
#import "SCPageNameLogging.h"
#import "UIScrollViewDelegate.h"

@class IGListAdapter, NSArray, NSString, SCGalleryCollectionViewSelectionHelper, SCGalleryOperaV2Presenter, SCGallerySelectionController, SCGallerySnapsTabDataSource, SCGalleryTabCollectionView, SCUserSession;

@interface SCGalleryMomentClustererViewController : SIGSubscreenViewController <SCGallerySnapsTabDataSourceDelegate, UIScrollViewDelegate, SCGalleryTabCollectionViewFlowLayoutDelegate, SCGallerySnapsTabSnapsSectionControllerDelegate, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryOperaPresenterV2Delegate, SCGallerySelectionControllerDataSource, SCGallerySelectionControllerDelegate, SCPageNameLogging, IGListAdapterDataSource, SCGalleryCollectionViewSelectionHelperDelegate>
{
    SCGallerySnapsTabDataSource *_dataSource;
    NSArray *_viewModels;
    SCGalleryTabCollectionView *_collectionView;
    IGListAdapter *_adapter;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryOperaV2Presenter *_operaV2Presenter;
    NSString *_presentingGroupViewModelId;
    SCGallerySelectionController *_selectionController;
    id <SCStartChatDelegate> _startChatDelegate;
    _Bool _loadingCloudSync;
    _Bool _loadingMomentClusterer;
    _Bool _isClusterChronological;
    SCUserSession *_userSession;
}

@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) _Bool isClusterChronological; // @synthesize isClusterChronological=_isClusterChronological;
- (void).cxx_destruct;
- (void)selectionController:(id)arg1 shouldScrollToGalleryEntry:(id)arg2;
- (void)selectionControllerDidExitSelectionMode:(id)arg1;
- (void)selectionControllerDidEnterSelectionMode:(id)arg1;
- (id)selectedGallerySnaps;
- (id)selectedGalleryItems;
- (void)operaPresenterV2DidDismiss:(id)arg1;
- (void)operaPresenterV2DidPresent:(id)arg1;
- (id)operaPresenterV2:(id)arg1 didOpenViewWithSnap:(id)arg2;
- (void)operaPresenterV2:(id)arg1 willOpenViewWithSnap:(id)arg2;
- (void)galleryCollectionViewSelectionHelperRequestSelectMode:(id)arg1;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItems:(id)arg3 snapItems:(id)arg4;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forSnapItem:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (void)_didChangeSelectedItem:(_Bool)arg1;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (id)cellViewModelForIndexPath:(id)arg1;
- (id)groupViewModelForSection:(long long)arg1;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 snapsForEntry:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (id)_snapForIndexPath:(id)arg1;
- (id)_entryForIndexPath:(id)arg1;
- (void)updateGroups:(id)arg1;
- (id)_buildOperaDataModelWithGroupId:(id)arg1 snaps:(id)arg2 userSession:(id)arg3;
- (_Bool)flowLayout:(id)arg1 sectionShouldDisplayOverlay:(long long)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)gallerySnapsTabDataSource:(id)arg1 didUpdateMomentViewModels:(id)arg2;
- (void)gallerySnapsTabDataSource:(id)arg1 didUpdateFeaturedStoriesViewModel:(id)arg2;
- (void)gallerySnapsTabDataSource:(id)arg1 didUpdateLoadingStatus:(_Bool)arg2;
- (id)loadScrollView;
- (id)pageViewName;
- (void)enterSelectMode;
@property(readonly, nonatomic) _Bool isSelectMode;
@property(readonly, nonatomic) _Bool isOperaPresented;
- (id)initWithUserSession:(id)arg1 startChatDelegate:(id)arg2 momentClustererOption:(id)arg3 dataObjectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
