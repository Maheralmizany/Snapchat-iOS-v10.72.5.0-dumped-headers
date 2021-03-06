//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCAltitudeFilterViewDelegate.h"
#import "SCFilterViewGenerator.h"
#import "SCGeoFilterViewDelegate.h"
#import "SCPreviewGestureResponder.h"
#import "SCSmartCarouselFilterArrangerDelegate.h"
#import "SCSmartCarouselFilterArrangerSwipeStateDataSource.h"
#import "SCSmartSwipeFilterViewLogger.h"
#import "SCVenueFilterViewDelegate.h"
#import "SCWeatherFilterViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSMutableDictionary, NSString, SCFilterCarouselLoggingParameters, SCFilterView, SCImageProcessCommand, SCImageProcessLensCommand, SCLazy, SCPreviewFilterItem, SCSmartCarouselFilterArranger, SCSnapCommonLoggingParameters, SCUnlockableGeoFilterTracker, SCUserSession, UICollectionView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView<SCDrawingViewCommon>, UIView<SCSmartSwipeFilterFocusLocationChangeDelegate>;

@interface SCSmartSwipeFilterView : UIView <SCFilterViewGenerator, SCGeoFilterViewDelegate, SCAltitudeFilterViewDelegate, SCWeatherFilterViewDelegate, SCVenueFilterViewDelegate, SCSmartSwipeFilterViewLogger, UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegate, SCSmartCarouselFilterArrangerDelegate, SCSmartCarouselFilterArrangerSwipeStateDataSource, SCPreviewGestureResponder>
{
    UIView<SCDrawingViewCommon> *_drawingView;
    long long _sectionCorrection;
    _Bool _isLongPressing;
    _Bool _didSwipeInDoubleSwipingState;
    _Bool _shouldExitDoubleSwipingAfterDeceleration;
    struct CGPoint _longPressStartPoint;
    SCLazy *_cropBackgroundAnimationImages;
    SCLazy *_cropBackgroundAnimationColors;
    long long _currentIndexWhenDoubleSwipeRecoveryStarted;
    SCPreviewFilterItem *_currentFilterItemBeforeSwipeOrderReload;
    UIView<SCSmartSwipeFilterFocusLocationChangeDelegate> *_focusLocationDelegate;
    _Bool _isVideoSnap;
    _Bool _isSnap3D;
    _Bool _isFromGallery;
    _Bool _doubleSwipingEnabled;
    _Bool _isLagunaMedia;
    _Bool _contextFilterIsSeen;
    _Bool _visualFilterIsSeen;
    id <SCSmartSwipeFilterViewDelegate> _delegate;
    id <SCImageProcessCommandProvider> _imageProcessCommandProvider;
    UICollectionView *_filterCollectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCFilterCarouselLoggingParameters *_filterCarouselLoggingParameters;
    id <SCSmartSwipeFilterViewLogger> _smartSwipeFilterViewLogger;
    id <SCFilterViewGenerator> _filterViewGenerator;
    id <SCVenueFilterTooltipProvider> _venueFilterTooltipProvider;
    NSMutableDictionary *_filterStateDict;
    SCImageProcessLensCommand *_lensCommand;
    SCImageProcessCommand *_defaultLensCommand;
    SCSmartCarouselFilterArranger *_filterArranger;
    NSMutableDictionary *_filterViewDict;
    SCFilterView *_unfilteredView;
    NSArray *_commandConfigurationsForFiltersWithMediaCommands;
    unsigned long long _swipeSequenceNumber;
    long long _state;
    long long _firstSwipeDirection;
    long long _lastSwipeDirection;
    NSMutableDictionary *_filterSwipeMetadata;
    SCUserSession *_userSession;
    SCUnlockableGeoFilterTracker *_unlockableGeoFilterTracker;
    id <SCGeoFilterLogger> _geofilterLogger;
    long long _currentSection;
    NSArray *_visualFilterNames;
    id <SCPreviewFeatureStickerContainer> _stickerContainer;
    struct CGAffineTransform _currentViewportTransform;
}

+ (id)_filterNameToViewClassMap;
+ (id)_logNameForFilterName:(id)arg1 filterView:(id)arg2;
@property(nonatomic) __weak id <SCPreviewFeatureStickerContainer> stickerContainer; // @synthesize stickerContainer=_stickerContainer;
@property(nonatomic) _Bool visualFilterIsSeen; // @synthesize visualFilterIsSeen=_visualFilterIsSeen;
@property(retain, nonatomic) NSArray *visualFilterNames; // @synthesize visualFilterNames=_visualFilterNames;
@property(nonatomic) _Bool contextFilterIsSeen; // @synthesize contextFilterIsSeen=_contextFilterIsSeen;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) id <SCGeoFilterLogger> geofilterLogger; // @synthesize geofilterLogger=_geofilterLogger;
@property(retain, nonatomic) SCUnlockableGeoFilterTracker *unlockableGeoFilterTracker; // @synthesize unlockableGeoFilterTracker=_unlockableGeoFilterTracker;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSMutableDictionary *filterSwipeMetadata; // @synthesize filterSwipeMetadata=_filterSwipeMetadata;
@property(nonatomic) long long lastSwipeDirection; // @synthesize lastSwipeDirection=_lastSwipeDirection;
@property(nonatomic) long long firstSwipeDirection; // @synthesize firstSwipeDirection=_firstSwipeDirection;
@property(nonatomic) _Bool isLagunaMedia; // @synthesize isLagunaMedia=_isLagunaMedia;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long swipeSequenceNumber; // @synthesize swipeSequenceNumber=_swipeSequenceNumber;
@property(retain, nonatomic) NSArray *commandConfigurationsForFiltersWithMediaCommands; // @synthesize commandConfigurationsForFiltersWithMediaCommands=_commandConfigurationsForFiltersWithMediaCommands;
@property(retain, nonatomic) SCFilterView *unfilteredView; // @synthesize unfilteredView=_unfilteredView;
@property(retain, nonatomic) NSMutableDictionary *filterViewDict; // @synthesize filterViewDict=_filterViewDict;
@property(retain, nonatomic) SCSmartCarouselFilterArranger *filterArranger; // @synthesize filterArranger=_filterArranger;
@property(readonly, nonatomic) SCImageProcessCommand *defaultLensCommand; // @synthesize defaultLensCommand=_defaultLensCommand;
@property(readonly, nonatomic) SCImageProcessLensCommand *lensCommand; // @synthesize lensCommand=_lensCommand;
@property(retain, nonatomic) NSMutableDictionary *filterStateDict; // @synthesize filterStateDict=_filterStateDict;
@property(retain, nonatomic) id <SCVenueFilterTooltipProvider> venueFilterTooltipProvider; // @synthesize venueFilterTooltipProvider=_venueFilterTooltipProvider;
@property(nonatomic) __weak id <SCFilterViewGenerator> filterViewGenerator; // @synthesize filterViewGenerator=_filterViewGenerator;
@property(nonatomic) __weak id <SCSmartSwipeFilterViewLogger> smartSwipeFilterViewLogger; // @synthesize smartSwipeFilterViewLogger=_smartSwipeFilterViewLogger;
@property(nonatomic) struct CGAffineTransform currentViewportTransform; // @synthesize currentViewportTransform=_currentViewportTransform;
@property(copy, nonatomic) SCFilterCarouselLoggingParameters *filterCarouselLoggingParameters; // @synthesize filterCarouselLoggingParameters=_filterCarouselLoggingParameters;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(nonatomic) _Bool doubleSwipingEnabled; // @synthesize doubleSwipingEnabled=_doubleSwipingEnabled;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(readonly, nonatomic) id <SCImageProcessCommandProvider> imageProcessCommandProvider; // @synthesize imageProcessCommandProvider=_imageProcessCommandProvider;
@property(nonatomic) __weak id <SCSmartSwipeFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isFromGallery; // @synthesize isFromGallery=_isFromGallery;
@property(nonatomic) _Bool isSnap3D; // @synthesize isSnap3D=_isSnap3D;
@property(nonatomic) _Bool isVideoSnap; // @synthesize isVideoSnap=_isVideoSnap;
- (void).cxx_destruct;
- (void)didProcessTapInPreviewContainerView:(id)arg1;
- (id)imageProcessCommandForIndexPath:(id)arg1;
- (id)currentLensCommand;
- (void)updateDefaultLensProcessingCommand:(id)arg1;
- (void)updateLensProcessingCommand:(id)arg1;
- (id)loadingAnimationCommand;
- (_Bool)canStackMoreFilters;
- (_Bool)hasUcoFilters;
- (_Bool)hasAnimatedFilters;
- (id)geoFilterIfOnlyDrawnFilter;
- (id)videoTrackedImagesAboveStickers;
- (id)drawingsOrStaticStickersImage;
- (_Bool)hasDrawingsOrStaticStickers;
- (id)overlayFiltersImage;
- (void)stopAnimatedFilterAndStickerIfNecessary;
- (void)resumeAnimatedFilterAndStickerIfNecessary;
- (_Bool)hasStaticOverlayFilters;
- (id)overlayImage;
- (_Bool)hasOverlayImage;
- (_Bool)hasStickerOverlay;
- (_Bool)hasStaticStickerOverlay;
- (void)takeScreenshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_indexForTopMostAnimatedFilterInCurrentOverlayFilterViews:(id)arg1;
- (_Bool)_shouldDrawOverlayFilterView:(id)arg1;
- (void)_updateDisplayStatusForSection:(long long)arg1 displayed:(_Bool)arg2;
- (id)_filterItemAtCenterPoint;
- (void)_reloadCollectionView;
- (long long)_filterSectionFromIndex:(long long)arg1;
- (long long)_filterIndexFromSection:(long long)arg1;
- (long long)currentFilterIndex;
- (id)filterItemForSection:(long long)arg1;
- (void)_scrollToSection:(long long)arg1 animated:(_Bool)arg2;
- (void)_scrollToCurrentSection;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)longPress:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
@property(readonly, nonatomic) UIPanGestureRecognizer *scrollViewPanGestureRecognizer;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)filterViewForCurrentSection;
- (id)filterViewForSectionOffset:(long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)filterArrangerDidChangeVisualFilterNamesProvider:(id)arg1;
- (void)filterArrangerDidReloadSwipeOrder:(id)arg1;
- (void)filterArrangerWillReloadSwipeOrder:(id)arg1;
- (void)filterArranger:(id)arg1 didRemoveFilter:(id)arg2 atIndex:(long long)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(id)arg1 didInsertFilterAtIndex:(long long)arg2 filterItem:(id)arg3 swipeState:(CDStruct_cb8b52ca)arg4;
- (void)filterArranger:(id)arg1 didUpdateFilterName:(id)arg2 config:(id)arg3;
@property(nonatomic) _Bool mediaFiltersDisabled;
- (void)_updateDrawingAndStickerViewCenter;
- (void)_updateStackedOverlayViewsFrame;
- (void)_exitDoubleSwipingState;
- (_Bool)shouldUnstackWhenExitingDoubleSwipe;
- (void)removeStackedFilterForType:(long long)arg1 filterName:(id)arg2;
- (id)_stackedFilterDisplayNameForItem:(id)arg1;
- (id)_stackedFiltersInfoFromItems:(id)arg1;
- (id)stackedFiltersInfo;
- (void)clearStackedFiltersIsMultiSnapCleanUp:(_Bool)arg1;
- (_Bool)stackCurrentCollectionViewFilterIfAny;
- (void)scrollToInitSectionAndReloadToIndex:(long long)arg1;
- (void)updateCurrentSectionAndMediaFilterOffset;
- (void)updateMediaFilterMaskForItem:(id)arg1 relativeOffset:(double)arg2;
- (long long)mediaFilterIndexForFilter:(id)arg1;
- (void)updateMediaFiltersAndCommands;
- (void)setHiddenStateForStickersAndOverlayFilters:(_Bool)arg1 includeCustomSticker:(_Bool)arg2;
- (void)selectFilterNames:(id)arg1 forTypes:(id)arg2 allowInitialStackedFiltersSwipeOffOnScroll:(_Bool)arg3 forceStack:(_Bool)arg4;
- (void)updateVenueFilterViewFromFiltersState:(id)arg1;
- (double)swipeOffset;
- (CDStruct_cb8b52ca)currentSwipeState;
- (id)currentFilterViewForTypeOrUnfiltered:(long long)arg1;
- (id)currentFilterNameForTypeOrUnfiltered:(long long)arg1;
- (id)_currentOverlayFilterViews;
- (id)currentFilterViewForType:(long long)arg1;
- (_Bool)isCurrentItemMediaFilter;
- (id)nameForFilterWithActiveMediaCommand;
- (id)_currentFilterItemMatchingBlock:(CDUnknownBlockType)arg1;
- (id)currentFilterConfigsForType:(long long)arg1;
- (id)currentFilterNameForType:(long long)arg1;
- (id)_currentFilterItemsForType:(long long)arg1;
- (id)selectedExportableGeofilterNames;
- (id)currentFilterNamesForType:(long long)arg1;
- (long long)selectedFiltersCount;
- (id)currentFilterItems;
- (id)filterItemForCurrentSection;
- (_Bool)isScrolling;
@property(readonly, nonatomic) unsigned long long numberOfFilterChanges;
- (void)setFiltersUserInteractionEnabled:(_Bool)arg1;
- (void)addCaptionViewBelowFilters:(id)arg1;
- (void)addDrawingView:(id)arg1 stickerContainer:(id)arg2;
- (void)updateMediaViewScale:(double)arg1;
- (void)setBackgroundBlackValue:(double)arg1 duration:(double)arg2;
- (void)setCropBackgroundAnimating:(_Bool)arg1;
- (void)setViewportTransform:(struct CGAffineTransform)arg1;
- (_Bool)filterHitAreaContainGesture:(id)arg1;
- (id)touchTargetForType:(long long)arg1 gesture:(id)arg2;
- (id)touchTargetForGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 filterArranger:(id)arg2 commonLoggingParameters:(id)arg3 geofilterLogger:(id)arg4 isLagunaMedia:(_Bool)arg5 userSession:(id)arg6 imageProcessCommandProvider:(id)arg7 cropBackgroundAnimationImages:(id)arg8 cropBackgroundAnimationColors:(id)arg9 focusLocationDelegate:(id)arg10 venueFilterTooltipProvider:(id)arg11 isFromGallery:(_Bool)arg12;
- (id)_overlayFilterViewForFilter:(id)arg1 frame:(struct CGRect)arg2 config:(id)arg3 userSession:(id)arg4;
- (void)venueFilterView:(id)arg1 didReportWithVenueSelector:(id)arg2;
- (void)venueFilterView:(id)arg1 didChangeDisplayStatus:(_Bool)arg2 withBackgroundFilter:(_Bool)arg3;
- (id)venueFilterView:(id)arg1 geoFilterViewWithGeoFilterID:(id)arg2;
- (void)selectedVenueOnVenueFilterView:(id)arg1 viewingTime:(unsigned long long)arg2;
- (void)geoFilterViewMoveStickerToStickerContainer:(id)arg1 gestureRecognizer:(id)arg2;
- (void)geoFilterViewNeedsUpdate:(id)arg1;
- (void)geoFilterViewSponsoredSlugTapped:(id)arg1 filterId:(id)arg2;
- (void)altitudeFilterDidUpdate:(id)arg1;
- (void)weatherFilterDidUpdate:(id)arg1;
- (void)removeViewOfFilterItem:(id)arg1 filterViewDict:(id)arg2;
- (long long)zPositionForFilterItem:(id)arg1 view:(id)arg2;
- (id)filterViewForItem:(id)arg1 filterViewDict:(id)arg2 unfilteredView:(id)arg3 bounds:(struct CGRect)arg4 filterArranger:(id)arg5 filterStateDict:(id)arg6 userSession:(id)arg7;
- (id)geocellForLocation:(id)arg1;
- (void)geofilterMissLoggingDetermineIfSessionOver:(id)arg1;
- (void)geofilterMissLoggingDetermineIfNewSession;
- (void)determineInitialSwipeDirectionForGeofilterMissLoggingIfNeeded;
- (void)logGeofilterSession;
- (void)logSnapCreationEnded;
- (long long)logFilterStreakType;
- (id)logFilterStreakValue;
- (id)logFilterInfoValue;
- (long long)logFirstSwipeDirection;
- (long long)filterSourceForCurrentFilterOfType:(long long)arg1;
- (long long)logIndexForCurrentFilterOfType:(long long)arg1;
- (long long)logSeenTotal;
- (long long)logTapCountForCurrentFilterWithType:(long long)arg1;
- (long long)logIndexTotal;
- (void)logCarouselArrangeHasNewFilter:(id)arg1 config:(id)arg2;
- (void)logVenueFilterView:(id)arg1 viewingTime:(unsigned long long)arg2;
- (void)_logSwipeEvent:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3;
- (void)_logSwipeEventForSnap3DFilter:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3;
- (void)_logSwipeEventForVenueFilter:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3;
- (void)_logSwipeEventForGeoFilter:(id)arg1 atIndex:(long long)arg2 metadata:(id)arg3 isBackgroundFilter:(_Bool)arg4 carouselGroupName:(id)arg5;
- (void)_logSwipeEventForFilterItem:(id)arg1 atIndex:(long long)arg2 filterType:(long long)arg3 metadata:(id)arg4 carouselGroupName:(id)arg5;
- (void)logViewingResumed;
- (void)logViewingPaused;
- (void)logViewingEnded;
- (void)_stopViewingIfNecessary:(id)arg1;
- (void)_startViewingIfNecessary:(id)arg1;
- (void)updateViewingItemIfNecessary:(id)arg1 displayed:(_Bool)arg2;
- (_Bool)logVisualFilterIsSeen;
- (id)logNameForCurrentFilterOfType:(long long)arg1 mediaFilterSubtype:(long long)arg2;
- (id)logNameForCurrentFilters;
- (void)updateFilterSourceForSwipeForFilter:(id)arg1 filterSource:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

