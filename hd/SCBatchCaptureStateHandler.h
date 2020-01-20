//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBatchCaptureConfigurationListener.h"
#import "SCCaptionMultiSnapDelegate.h"
#import "SCDrawingViewMultiSnapDelegate.h"
#import "SCMultiSnapIndexProvider.h"
#import "SCMultiSnapStateHandlerDelegate.h"

@class NSMutableArray, NSString, SCBatchCaptureConfiguration, SCBatchCaptureSavingConfiguration, SCQueuePerformer, SCUserSession;

@interface SCBatchCaptureStateHandler : NSObject <SCMultiSnapIndexProvider, SCDrawingViewMultiSnapDelegate, SCCaptionMultiSnapDelegate, SCMultiSnapStateHandlerDelegate, SCBatchCaptureConfigurationListener>
{
    NSMutableArray *_multiSnapStateHandlers;
    struct CGSize _overlaySize;
    SCUserSession *_userSession;
    SCBatchCaptureConfiguration *_batchCaptureConfiguration;
    SCQueuePerformer *_galleryPerformer;
    SCBatchCaptureSavingConfiguration *_savingConfiguration;
    id <SCPreviewFeatureUserTagging> _userTaggingFeature;
    id <SCBatchCaptureEditingIndexProvider> _indexProvider;
}

@property(nonatomic) __weak id <SCBatchCaptureEditingIndexProvider> indexProvider; // @synthesize indexProvider=_indexProvider;
- (void).cxx_destruct;
- (void)batchCaptureConfigurationDidDeleteAllSegments:(id)arg1;
- (void)batchCaptureConfigurationWillDeleteAllSegments:(id)arg1;
- (void)batchCaptureConfiguration:(id)arg1 didSplitSnapAtIndexPath:(id)arg2 splitTime:(CDStruct_1b6d18a9)arg3;
- (void)batchCaptureConfiguration:(id)arg1 didDeleteSnapAtIndexPath:(id)arg2;
- (void)batchCaptureConfiguration:(id)arg1 didDeleteSegment:(id)arg2 atIndex:(long long)arg3;
- (void)batchCaptureConfiguration:(id)arg1 didAddSegment:(id)arg2;
- (void)_addExportableGeoFiltersIfNecessaryToSnapState:(id)arg1 fromSegment:(id)arg2;
- (long long)_configEphemeralMedias:(id)arg1 startAtIndex:(long long)arg2 forSegment:(id)arg3 stateHandler:(id)arg4 allMediaTimeRanges:(id)arg5 multiSnapDrawingCache:(id)arg6;
- (id)_createMultiSnapStateHandlerForSegment:(id)arg1;
- (id)_currentEditingSegment;
- (id)currentMultiSnapStateHandler;
- (void)didDeleteSegmentAtIndex:(long long)arg1;
- (void)didSplitSegmentAtIndex:(long long)arg1 splitTime:(CDStruct_1b6d18a9)arg2;
- (void)didChangeTrackingCaption:(id)arg1 atIndex:(long long)arg2;
- (void)didChangeStaticCaption:(id)arg1;
- (void)drawingView:(id)arg1 removedStroke:(id)arg2;
- (void)drawingView:(id)arg1 addedStroke:(id)arg2;
- (long long)editingIndex;
- (long long)maxUniqueStickerId;
- (void)configureEphemeralMedias:(id)arg1 configuration:(id)arg2 multiSnapDrawingCache:(id)arg3;
- (void)setBatchCaptureSavingConfiguration:(id)arg1;
- (void)overlaysForGalleryWithMultiSnapDrawingCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)gallerySnapOverlaysForAllSnaps;
- (id)multiSnapStateAtSegmentIndex:(long long)arg1;
- (_Bool)statesContainAudioVisualEdits;
- (void)didFinishTouchWithTarget:(id)arg1;
- (void)didChangeCroppingState:(id)arg1 isInitialState:(_Bool)arg2;
- (void)didChangeVenueFilterView:(id)arg1;
- (void)didChangeFiltersState:(id)arg1;
- (void)updateAvailableFiltersWithState:(id)arg1;
- (void)didChangeAttachmentURL:(id)arg1;
- (void)didChangeAudioFilter:(id)arg1 audioEnabled:(_Bool)arg2;
- (void)didUpdateMetadataOfStickerView:(id)arg1 atIndex:(long long)arg2;
- (void)didChangeStaticStickerView:(id)arg1;
- (id)initWithBatchCaptureEditingIndexProvider:(id)arg1 batchCaptureConfiguration:(id)arg2 overlaySize:(struct CGSize)arg3 userSession:(id)arg4 userTaggingFeature:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

