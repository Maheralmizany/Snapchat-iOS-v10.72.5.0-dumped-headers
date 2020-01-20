//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, SCFeature<SCFeatureSwipeFilters>, SCFiltersState, SCImageProcessLensCommand, SCPreviewView, SCSmartSwipeFilterView, SCSnapCommonLoggingParameters, SCVideoTracker, UIView;

@protocol SCFeatureSwipeFilters
@property(retain, nonatomic) NSData *reversedAudioData;
@property(retain, nonatomic) UIView *trackingObjectContainerView;
@property(readonly, nonatomic) SCPreviewView *previewView;
@property(nonatomic) __weak id <SCFeatureSwipeFiltersDelegate> delegate;
@property(retain, nonatomic) SCSmartSwipeFilterView *smartSwipeFilterView;
@property(readonly, nonatomic) id <SCFeatureVideoPlayback> videoPlayback;
@property(readonly, nonatomic) id <SCFeatureImagePlayback> imagePlayback;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartVideoSwipeFilters;
@property(readonly, nonatomic) SCFeature<SCFeatureSwipeFilters> *smartImageSwipeFilters;
- (void)updateSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (void)addDebugView:(UIView *)arg1;
- (long long)currentFilterSpeedForType:(long long)arg1;
- (void)replaceFiltersWithState:(SCFiltersState *)arg1 lastState:(SCFiltersState *)arg2;
- (SCVideoTracker *)videoTracker;
- (void)setAudioProcessorFilterStyleId:(NSString *)arg1;
- (_Bool)isReverseMotionFilterSelected;
- (void)filtersTurnedOn;
- (void)lensAppliedImageWithLensCommand:(SCImageProcessLensCommand *)arg1 completionHandler:(void (^)(UIImage *))arg2;
- (void)ucoImageWithCompletionHandler:(void (^)(UIImage *))arg1;
- (void)filteredImageWithCroppingAspectRatio:(double)arg1 completionHandler:(void (^)(UIImage *))arg2;
@end

