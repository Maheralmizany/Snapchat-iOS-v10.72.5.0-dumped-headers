//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSIndexPath, SCCroppingState, SCGeoFilter, SCMultiSnapIndividualEditingState, SCPreviewEphemeralMediaList, SCPreviewFilterStackingUIHelper, SCPreviewToolBarButtonItem, UIView;

@protocol SCPreviewFeatureBatchCaptureDelegate
- (void)featureBatchCaptureSegmentDeletedAtIndexPath:(NSIndexPath *)arg1;
- (void)featureBatchCaptureDidUpdateSegmentStatesAtIndexPath:(NSIndexPath *)arg1;
- (void)featureBatchCaptureAllSegmentsDeleted;
- (SCGeoFilter *)featureBatchCaptureSelectedGeofilter;
- (double)featureBatchCaptureContentTargetAspectRatio;
- (void)featureBatchCapturePrepareEphemeralMediaList:(SCPreviewEphemeralMediaList *)arg1;
- (SCPreviewEphemeralMediaList *)featureBatchCaptureInitializeEphemeralMediaList;
- (void)featureBatchCaptureDidTapToolbarItem:(SCPreviewToolBarButtonItem *)arg1;
- (SCPreviewFilterStackingUIHelper *)featureBatchCaptureFilterStackingUIHelper;
- (void)featureBatchCaptureUpdateCommonLoggingParameters;
- (id <SCTouchControllable>)featureBatchCaptureCurrentTouchTarget;
- (void)featureBatchCaptureSetAudioToolsStateFromMultiSnapEditingState:(SCMultiSnapIndividualEditingState *)arg1;
- (UIView *)featureBatchCaptureTrackingObjectContainerView;
- (SCCroppingState *)featureBatchCaptureIdentityCroppingState;
@end

