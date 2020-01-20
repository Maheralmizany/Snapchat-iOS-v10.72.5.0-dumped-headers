//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryBaseStoryCell.h"

#import "SCGalleryLagunaStoryStatusObserverDelegate.h"

@class NSArray, NSDate, NSString, SCGalleryLagunaProgressCircleLayer, SCGalleryLagunaStoryStatusObserver, SCSpectaclesDevice, SCSpectaclesTransferSession;

@interface SCGalleryLagunaStoryCell : SCGalleryBaseStoryCell <SCGalleryLagunaStoryStatusObserverDelegate>
{
    SCGalleryLagunaProgressCircleLayer *_progressLayer;
    long long _loadingStatus;
    SCGalleryLagunaStoryStatusObserver *_statusObserver;
    _Bool _transferCountsCalculated;
    long long _transferredContentCount;
    long long _untransferredContentCount;
    NSDate *_lastTransferStart;
    double _lastTransferStartProgress;
    double _lastTransferProgress;
    _Bool _hasCurrentlyTransferringContent;
    _Bool _shouldShowTransferState;
    SCSpectaclesDevice *_lagunaDevice;
    SCSpectaclesTransferSession *_transferSession;
    NSArray *_justTransferredContentIds;
}

+ (struct CGSize)_cellSize;
+ (long long)_snapsPerRow;
@property(nonatomic) _Bool shouldShowTransferState; // @synthesize shouldShowTransferState=_shouldShowTransferState;
@property(readonly, nonatomic) _Bool hasCurrentlyTransferringContent; // @synthesize hasCurrentlyTransferringContent=_hasCurrentlyTransferringContent;
@property(retain, nonatomic) NSArray *justTransferredContentIds; // @synthesize justTransferredContentIds=_justTransferredContentIds;
@property(retain, nonatomic) SCSpectaclesTransferSession *transferSession; // @synthesize transferSession=_transferSession;
@property(retain, nonatomic) SCSpectaclesDevice *lagunaDevice; // @synthesize lagunaDevice=_lagunaDevice;
- (void).cxx_destruct;
- (_Bool)_isSnapJustTransferred:(id)arg1;
- (void)_adjustProgressLayerOpacityBasedOnStatus:(long long)arg1;
- (void)_adjustImageViewAlphaBasedOnStatus:(long long)arg1;
- (void)_adjustImageViewSizesBasedOnStatus:(long long)arg1;
- (void)_updateProgressLayerAndImageView;
- (void)setSelectMode:(_Bool)arg1;
- (unsigned long long)interactionMode;
- (void)storyLoadingStatusObserver:(id)arg1 didUpdateContentLoadingProgress:(double)arg2 numberTransferring:(unsigned long long)arg3 currentlyTransferringContentProgress:(double)arg4;
- (void)storyLoadingStatusObserver:(id)arg1 didUpdateContentLoadingStatus:(long long)arg2;
- (id)_subtitleString:(_Bool)arg1;
- (_Bool)_shouldShowSubtitleSpinner;
- (_Bool)_shouldShowSubtitleIcon;
- (void)_calculateTransferCounts;
- (_Bool)_isLagunaContentInEntry:(id)arg1 entry:(id)arg2;
- (_Bool)currentlyInTransferInterruptionState;
- (_Bool)isCurrentlyTransferring;
- (_Bool)containsContentId:(id)arg1;
- (id)_subtitleIcon;
- (id)_maskImage:(struct CGSize)arg1;
- (void)_unobserveLoadingStates;
- (void)_observeLoadingStates;
- (void)setViewModel:(id)arg1 mediaScenePath:(CDStruct_bac8f6e9)arg2 offset:(double)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 delegate:(id)arg6;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)updateVisibleTransferSessionSnapCells;
- (void)_fullyExpandStory;
- (void)didToggleExpand:(_Bool)arg1;
- (void)_handleTap:(id)arg1 cell:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

