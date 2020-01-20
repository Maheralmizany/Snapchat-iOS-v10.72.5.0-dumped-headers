//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSpectaclesLensFilterInPreview.h"
#import "SCLensDataProviderListener.h"
#import "SCSpectaclesAuxiliaryContentStoreListener.h"

@class NSArray, NSString, SCDisposableObserverLifecycle, SCFeatureReference, SCLens, SCLensInPreviewUsageNotifier, SCLensInfoController, SCLensInfoViewModel, SCLensUIUpdateListenerAnnouncer, SCObservable, SCPreferences, SCPreviewConfiguration, SCSmartCarouselFilterArranger, SCSnapCommonLoggingParameters, SCSpectaclesAuxiliaryContentStore;

@interface SCFeatureSpectaclesLensFilterInPreviewImpl : SCFeature <SCLensDataProviderListener, SCSpectaclesAuxiliaryContentStoreListener, SCFeatureSpectaclesLensFilterInPreview>
{
    id <SCPreviewLensDataProviderFactoryProtocol> _lensDataProviderFactory;
    id <SCLensUIUpdateListener> _lensDataFetcher;
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    SCFeatureReference *_swipeFilters;
    SCSmartCarouselFilterArranger *_filterArranger;
    id <SCLensLogger> _lensLogger;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCObservable *_applicationLifecycleEvents;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    SCLensUIUpdateListenerAnnouncer *_uiUpdateAnnouncer;
    SCPreferences *_userPreferences;
    SCPreferences *_lensPreferences;
    SCLensInfoController *_lensInfoController;
    SCLensInfoViewModel *_lensInfoViewModel;
    _Bool _isTransitioningBetweenFilters;
    _Bool _didHandleNewLenses;
    _Bool _isImuAvailable;
    id <SCFeatureSpectaclesLensFilterInPreviewDelegate> _delegate;
    SCLens *_appliedLens;
    SCPreviewConfiguration *_configuration;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    SCLensInPreviewUsageNotifier *_lensUsageNotifier;
    NSArray *_lenses;
    NSString *_lensDataProviderToken;
}

@property(nonatomic) _Bool isImuAvailable; // @synthesize isImuAvailable=_isImuAvailable;
@property(nonatomic) _Bool didHandleNewLenses; // @synthesize didHandleNewLenses=_didHandleNewLenses;
@property(retain, nonatomic) NSString *lensDataProviderToken; // @synthesize lensDataProviderToken=_lensDataProviderToken;
@property(retain, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
@property(retain, nonatomic) SCLensInPreviewUsageNotifier *lensUsageNotifier; // @synthesize lensUsageNotifier=_lensUsageNotifier;
@property(retain, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
@property(nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool isTransitioningBetweenFilters; // @synthesize isTransitioningBetweenFilters=_isTransitioningBetweenFilters;
@property(readonly, nonatomic) SCLens *appliedLens; // @synthesize appliedLens=_appliedLens;
@property(nonatomic) __weak id <SCFeatureSpectaclesLensFilterInPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didFinishProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willStartProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didUnloadWithLensComponentManager:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willLoadWithLensComponentManager:(id)arg2;
- (void)setupDebugLensInfoController:(id)arg1 lensComponentManager:(id)arg2;
- (void)teardownDebugLensInfoController:(id)arg1;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)spectaclesAuxiliaryContentStore:(id)arg1 didPrepareDepthForMediaIdentifier:(id)arg2;
- (void)_tryCreateLensFilterWithLens:(id)arg1;
- (void)_loadLensDataIfAllLenesFetched;
- (id)_currentFilterView;
- (void)_updateLens:(id)arg1;
- (void)_reApplyLensIfNeeded:(id)arg1;
- (unsigned long long)_indexOfLensFromFetchedLenses:(id)arg1;
- (_Bool)_isDepthAvailable;
- (_Bool)_isDepthRequired;
- (_Bool)_isSnapEligibleForLenses;
- (_Bool)_isLensReadyForFilterView:(id)arg1;
- (void)_checkIfValidImuAvailable:(CDUnknownBlockType)arg1;
- (void)_willEnterForeground;
- (void)_didEnterBackground;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (void)applyLensIfNeeded;
- (id)initWithPreviewConfiguration:(id)arg1 lensUsageNotifier:(id)arg2 lensDataProviderFactory:(id)arg3 lensDataFetcher:(id)arg4 auxiliaryContentStore:(id)arg5 swipeFilters:(id)arg6 filterArranger:(id)arg7 lensLogger:(id)arg8 commonLoggingParamters:(id)arg9 applicationLifecycleEvents:(id)arg10 userPreferences:(id)arg11 lensPreferences:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
