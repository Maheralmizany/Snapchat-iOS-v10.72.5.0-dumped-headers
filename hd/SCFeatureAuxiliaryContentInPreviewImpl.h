//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCloudSyncStatusListener.h"
#import "SCFeatureAuxiliaryContentInPreview.h"
#import "SCNetworkConnectivityListener.h"

@class NSMutableArray, NSString, NSTimer, SCAuxiliaryContentToastView, SCFeatureReference, SCFriendsPageOnboardingView, SCNewportFiltersTooltip, SCPreviewConfiguration, SCPreviewView, SCSpectaclesAuxiliaryContentStore, SCUserSession;

@interface SCFeatureAuxiliaryContentInPreviewImpl : SCFeature <SCCloudSyncStatusListener, SCNetworkConnectivityListener, SCFeatureAuxiliaryContentInPreview>
{
    _Bool _depthPreparationEnabled;
    _Bool _featureActivated;
    _Bool _loadingAvailability;
    _Bool _loadingContent;
    _Bool _didLoadAfterEnabled;
    _Bool _selectivelySyncing;
    _Bool _backupOnCellular;
    _Bool _backingUpNow;
    _Bool _travelModeEnabled;
    unsigned long long _availability;
    long long _networkConnectivityStatus;
    id <SCObserving> _backupOnCellularObserveContext;
    SCAuxiliaryContentToastView *_toastView;
    SCNewportFiltersTooltip *_tooltip;
    SCFriendsPageOnboardingView *_onboardingView;
    NSMutableArray *_completionHandlers;
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    SCFeatureReference *_swipeFilters;
    SCFeatureReference *_magicMomentInPreview;
    SCPreviewView *_previewView;
    NSTimer *_progressTimer;
    double _startProgressTime;
    double _estimatedProgressTime;
    id <SCObserving> _profileObserveContext;
}

@property(readonly, nonatomic) id <SCObserving> profileObserveContext; // @synthesize profileObserveContext=_profileObserveContext;
@property(readonly, nonatomic) double estimatedProgressTime; // @synthesize estimatedProgressTime=_estimatedProgressTime;
@property(readonly, nonatomic) double startProgressTime; // @synthesize startProgressTime=_startProgressTime;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(readonly, nonatomic) __weak SCPreviewView *previewView; // @synthesize previewView=_previewView;
@property(readonly, nonatomic) SCFeatureReference *magicMomentInPreview; // @synthesize magicMomentInPreview=_magicMomentInPreview;
@property(readonly, nonatomic) SCFeatureReference *swipeFilters; // @synthesize swipeFilters=_swipeFilters;
@property(readonly, nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) SCFriendsPageOnboardingView *onboardingView; // @synthesize onboardingView=_onboardingView;
@property(retain, nonatomic) SCNewportFiltersTooltip *tooltip; // @synthesize tooltip=_tooltip;
@property(readonly, nonatomic) SCAuxiliaryContentToastView *toastView; // @synthesize toastView=_toastView;
@property(readonly, nonatomic) id <SCObserving> backupOnCellularObserveContext; // @synthesize backupOnCellularObserveContext=_backupOnCellularObserveContext;
@property(readonly, nonatomic) long long networkConnectivityStatus; // @synthesize networkConnectivityStatus=_networkConnectivityStatus;
@property(readonly, nonatomic) _Bool travelModeEnabled; // @synthesize travelModeEnabled=_travelModeEnabled;
@property(readonly, nonatomic, getter=isBackingUpNow) _Bool backingUpNow; // @synthesize backingUpNow=_backingUpNow;
@property(readonly, nonatomic) _Bool backupOnCellular; // @synthesize backupOnCellular=_backupOnCellular;
@property(readonly, nonatomic) _Bool selectivelySyncing; // @synthesize selectivelySyncing=_selectivelySyncing;
@property(nonatomic, getter=didLoadAfterEnabled) _Bool didLoadAfterEnabled; // @synthesize didLoadAfterEnabled=_didLoadAfterEnabled;
@property(nonatomic, getter=isLoadingContent) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
@property(nonatomic) unsigned long long availability; // @synthesize availability=_availability;
@property(nonatomic, getter=isLoadingAvailability) _Bool loadingAvailability; // @synthesize loadingAvailability=_loadingAvailability;
@property(readonly, nonatomic, getter=isFeatureActivated) _Bool featureActivated; // @synthesize featureActivated=_featureActivated;
@property(nonatomic, getter=isDepthPreparationEnabled) _Bool depthPreparationEnabled; // @synthesize depthPreparationEnabled=_depthPreparationEnabled;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak SCSpectaclesAuxiliaryContentStore *auxiliaryContentStore;
- (id)entry;
@property(readonly, nonatomic) __weak id <SCGallerySnap> snap;
- (_Bool)isFailedEntry;
- (id)_fetchGallerySnap;
- (void)_networkConnectivityStatusDidChange:(long long)arg1;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)_cloudSync:(id)arg1 didUpdateProgressForEntryId:(id)arg2 progress:(float)arg3;
- (void)cloudSync:(id)arg1 didUpdateProgressForEntryId:(id)arg2 progress:(float)arg3;
- (void)_cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
- (_Bool)_canMakeSyncingProgress;
- (void)_beginSyncing;
- (void)_timerFired:(id)arg1;
- (void)_stopProgress;
- (void)_startProgress;
- (void)hideTooltip;
- (void)_showTooltip;
- (void)_setupTooltipIfNeeded;
- (void)_showTooltipIfNeeded;
- (void)reloadFilters;
- (void)_showToastAlert;
- (void)_showFinishedToast;
- (void)_showErrorToast;
- (void)_showProcessingToast;
- (void)_showSyncingToast;
- (void)_showCheckingDepthAvailabilityToast;
- (void)_pollAvailability;
- (void)_observeNetworkSettings;
- (void)_hideToast;
- (void)_setupToastView;
- (void)_hideFilterOverlayView;
- (void)backUpNow;
- (void)loadContentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadContent;
- (void)_loadAvailability;
@property(readonly, nonatomic) long long promptFilterType;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 swipeFilters:(id)arg3 magicMoment:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

