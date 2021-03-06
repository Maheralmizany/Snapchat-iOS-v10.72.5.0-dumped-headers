//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryStoriesTabCell.h"

#import "SCGalleryCellTransitioning.h"
#import "SCGalleryEntrySyncStatusGeneratorDelegate.h"
#import "SCGalleryEntryThumbnailGeneratorDelegate.h"
#import "SCGalleryViewCellSelecting.h"
#import "SCGalleryViewCellUpdating.h"
#import "SCProgressReceiving.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITextFieldDelegate.h"

@class MASConstraint, NSIndexPath, NSString, NSTimer, SCGalleryCollectionViewSelectionHelper, SCGalleryEntrySyncStatusGenerator, SCGalleryEntryThumbnailGenerator, SCGalleryStoryViewModel, SCLoadingIndicatorView, SCMemoriesStatusIcon, SCUserSession, UIButton, UICollectionView, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITextField, UIView, UIViewController;

@interface SCGalleryBaseStoryCell : SCGalleryStoriesTabCell <SCGalleryEntryThumbnailGeneratorDelegate, SCProgressReceiving, SCGalleryEntrySyncStatusGeneratorDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UITextFieldDelegate, UIGestureRecognizerDelegate, SCGalleryViewCellUpdating, SCGalleryCellTransitioning, SCGalleryViewCellSelecting>
{
    id <SCGalleryEntryViewCellDelegate> _entryViewCellDelegate;
    SCGalleryEntryThumbnailGenerator *_thumbnailGenerator;
    SCGalleryEntrySyncStatusGenerator *_syncStatusGenerator;
    _Bool _isEntryClientCompatible;
    SCMemoriesStatusIcon *_incompatibleIcon;
    UIImageView *_subtitleIcon;
    SCLoadingIndicatorView *_subtitleSpinner;
    UIButton *_viewMoreButton;
    UIView *_lineContainer;
    UIView *_selectedOverlayView;
    UIImageView *_selectionImageView;
    UILongPressGestureRecognizer *_cellLongPress;
    UILongPressGestureRecognizer *_actionMenuLongPress;
    UILongPressGestureRecognizer *_imageViewLongPress;
    UILongPressGestureRecognizer *_imageViewActionMenuLongPress;
    struct CGPoint _initialTapPoint;
    NSIndexPath *_touchItemIndexPath;
    double _scrollOffset;
    _Bool _selected;
    MASConstraint *_subtitleLabelLeftConstraint;
    MASConstraint *_imageViewWrapperWidthConstraint;
    MASConstraint *_imageViewWrapperHeightConstraint;
    double _delayOfUpdatingStoryThumbnail;
    SCLoadingIndicatorView *_loadingIndicator;
    NSTimer *_thumbnailLatency10secTimer;
    _Bool _shouldCrossFade;
    UIImage *_firstThumbnail;
    int _firstThumbnailOrientation;
    _Bool _isActionMenu;
    _Bool _selectMode;
    id <SCGalleryStoryCellDelegate> _delegate;
    SCGalleryCollectionViewSelectionHelper *_selectionHelper;
    SCGalleryStoryViewModel *_viewModel;
    UIViewController *_containerViewController;
    UIImageView *_imageView;
    UIView *_imageWrapperView;
    UIView *_headerContainerView;
    SCUserSession *_userSession;
    UICollectionView *_snapsCollectionView;
    UIView *_labelsContainer;
    MASConstraint *_labelsContainerBottomConstraint;
    UITextField *_titleField;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CDStruct_bac8f6e9 _mediaScenePath;
}

+ (struct CGSize)_cellSize;
+ (long long)_snapsPerRow;
+ (double)actionMenuHeightForPage:(long long)arg1;
+ (double)cellHeightForViewModel:(id)arg1;
+ (_Bool)_hasMore:(id)arg1;
@property(readonly, nonatomic) CDStruct_bac8f6e9 mediaScenePath; // @synthesize mediaScenePath=_mediaScenePath;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UITextField *titleField; // @synthesize titleField=_titleField;
@property(readonly, nonatomic) MASConstraint *labelsContainerBottomConstraint; // @synthesize labelsContainerBottomConstraint=_labelsContainerBottomConstraint;
@property(readonly, nonatomic) UIView *labelsContainer; // @synthesize labelsContainer=_labelsContainer;
@property(readonly, nonatomic) UICollectionView *snapsCollectionView; // @synthesize snapsCollectionView=_snapsCollectionView;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
@property(readonly, nonatomic) UIView *imageWrapperView; // @synthesize imageWrapperView=_imageWrapperView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool isActionMenu; // @synthesize isActionMenu=_isActionMenu;
@property(readonly, nonatomic) SCGalleryStoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak SCGalleryCollectionViewSelectionHelper *selectionHelper; // @synthesize selectionHelper=_selectionHelper;
@property(nonatomic) __weak id <SCGalleryStoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)_thumbnailLatencyTimerDidFire:(id)arg1;
- (void)_invalidateTimers;
- (void)_startThumbnailLatencyTimers;
- (void)reporterWithIdentifier:(id)arg1 didReportProgress:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleActionMenuLongPressGesture:(id)arg1;
- (void)_handleTap:(id)arg1 cell:(id)arg2;
- (void)_handleLongPressGesture:(id)arg1;
- (_Bool)_shouldTriggerViewMore;
- (id)_touchItemCell;
- (_Bool)canSelectAtPoint:(struct CGPoint)arg1;
- (void)animateLongTapForTouchLocation:(struct CGPoint)arg1 reverse:(_Bool)arg2;
- (unsigned long long)interactionMode;
- (void)setSelected:(_Bool)arg1 selectOverlayImage:(id)arg2 snapIds:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setTransitioningInitialImage:(id)arg1;
- (id)transitioningExpandingView;
- (id)transitioningImage;
- (id)transitioningPosterFrame;
- (void)stopGeneratingUpdates;
- (void)startGeneratingUpdates;
- (void)_stopLoading;
- (void)_startLoading;
- (void)thumbnailGeneratorHasDelayedLoading:(id)arg1;
- (void)thumbnailGenerator:(id)arg1 didLoadMiniThumbnail:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateStoryThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)thumbnailGenerator:(id)arg1 didUpdateSnapThumbnailWithImage:(id)arg2 snap:(id)arg3 duration:(double)arg4;
- (void)_setImage:(id)arg1;
- (void)updateLayout:(_Bool)arg1 reloadData:(_Bool)arg2;
- (id)_subtitleString:(_Bool)arg1;
- (id)_titleString:(_Bool)arg1;
- (void)animateActionMenu:(_Bool)arg1;
- (void)didToggleExpand:(_Bool)arg1;
- (double)_headerContainerViewHeight:(long long)arg1;
- (id)cellForSnap:(id)arg1;
- (void)_viewMore;
- (long long)_lastPage;
- (_Bool)_shouldShowSubtitleSpinner;
- (_Bool)_shouldShowSubtitleIcon;
- (id)_subtitleIcon;
- (id)_maskImage:(struct CGSize)arg1;
- (void)_showIncompatibleIcon:(_Bool)arg1;
- (void)scrollViewDidScroll:(double)arg1 page:(long long)arg2;
- (void)setViewModel:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 offset:(double)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 delegate:(id)arg6;
- (void)invalidateCollectionViewLayoutIfNeeded;
- (_Bool)isExpanded;
- (void)prepareForReuse;
- (void)_textFieldEditingChanged:(id)arg1;
- (void)_updatePlaceholder;
- (void)_animateImageView:(_Bool)arg1;
- (void)_handleImageViewActionMenuLongPressGesture:(id)arg1;
- (void)_handleImageViewLongPressGesture:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

