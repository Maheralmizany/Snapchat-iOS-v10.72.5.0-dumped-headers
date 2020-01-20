//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class FBKVOController, NSString, SCCameraLensReadyLogger, SCCameraLensesInteractor, SCCameraViewController, SCChatAndDiscoverBadgeAwareLensSideButtonUpdateProvider, SCEffectViewportManager, SCLazy, SCUserSession;

@interface SCCameraViewControllerLensesProperties : NSObject <SCTraceEnabled>
{
    SCUserSession *_userSession;
    SCCameraViewController *_cameraViewController;
    id <SCFeatureShazam> _shazam;
    id <SCFeatureSceneIntelligence> _sceneIntelligence;
    SCLazy *_lazyScanCardActionHandler;
    _Bool _hasSetupLensProcessorDependants;
    _Bool _isListeningSnapRecordingComponent;
    id <SCFeatureLensFeedDelegate> _lensFeedDelegateHandler;
    id <SCBundledLensProvider> _bundledLensProvider;
    id <SCFeatureLensCarouselActivatorDelegate> _lensActivatorDelegateHandler;
    id <SCFeatureARBarDelegate> _arBarDelegateHandler;
    id <SCFeatureSceneIntelligenceLensDelegate> _sceneIntelligenceLensDelegateHandler;
    id <SCFeatureLensCloseButtonDelegate> _lensCloseButtonDelegateHandler;
    id <SCFeatureWorldCaptionLensButtonDelegate> _worldCaptionLensDelegateHandler;
    SCLazy *_lensesUIController;
    SCCameraLensesInteractor *_cameraLensesInteractor;
    SCCameraLensReadyLogger *_lensReadyLogger;
    FBKVOController *_kvoController;
    SCEffectViewportManager *_effectViewportManager;
    SCChatAndDiscoverBadgeAwareLensSideButtonUpdateProvider *_lensSideButtonUpdateProvider;
    id <SCLensStateWorkflow> _lensStateWorkflow;
    id <SCLensInfoCardPresentation> _lensInfoCardPresenter;
}

@property(retain, nonatomic) id <SCLensInfoCardPresentation> lensInfoCardPresenter; // @synthesize lensInfoCardPresenter=_lensInfoCardPresenter;
@property(retain, nonatomic) id <SCLensStateWorkflow> lensStateWorkflow; // @synthesize lensStateWorkflow=_lensStateWorkflow;
@property(nonatomic) _Bool isListeningSnapRecordingComponent; // @synthesize isListeningSnapRecordingComponent=_isListeningSnapRecordingComponent;
@property(nonatomic) _Bool hasSetupLensProcessorDependants; // @synthesize hasSetupLensProcessorDependants=_hasSetupLensProcessorDependants;
@property(retain, nonatomic) SCChatAndDiscoverBadgeAwareLensSideButtonUpdateProvider *lensSideButtonUpdateProvider; // @synthesize lensSideButtonUpdateProvider=_lensSideButtonUpdateProvider;
@property(retain, nonatomic) SCEffectViewportManager *effectViewportManager; // @synthesize effectViewportManager=_effectViewportManager;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SCCameraLensReadyLogger *lensReadyLogger; // @synthesize lensReadyLogger=_lensReadyLogger;
@property(retain, nonatomic) SCCameraLensesInteractor *cameraLensesInteractor; // @synthesize cameraLensesInteractor=_cameraLensesInteractor;
@property(retain, nonatomic) SCLazy *lensesUIController; // @synthesize lensesUIController=_lensesUIController;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCFeatureWorldCaptionLensButtonDelegate> worldCaptionLensDelegateHandler; // @synthesize worldCaptionLensDelegateHandler=_worldCaptionLensDelegateHandler;
@property(readonly, nonatomic) id <SCFeatureSceneIntelligenceLensDelegate> sceneIntelligenceLensDelegateHandler; // @synthesize sceneIntelligenceLensDelegateHandler=_sceneIntelligenceLensDelegateHandler;
@property(readonly, nonatomic) id <SCFeatureLensCloseButtonDelegate> lensCloseButtonDelegateHandler; // @synthesize lensCloseButtonDelegateHandler=_lensCloseButtonDelegateHandler;
@property(readonly, nonatomic) id <SCFeatureARBarDelegate> arBarDelegateHandler; // @synthesize arBarDelegateHandler=_arBarDelegateHandler;
@property(readonly, nonatomic) id <SCFeatureLensCarouselActivatorDelegate> lensActivatorDelegateHandler; // @synthesize lensActivatorDelegateHandler=_lensActivatorDelegateHandler;
@property(readonly, nonatomic) id <SCBundledLensProvider> bundledLensProvider; // @synthesize bundledLensProvider=_bundledLensProvider;
@property(readonly, nonatomic) id <SCFeatureLensFeedDelegate> lensFeedDelegateHandler; // @synthesize lensFeedDelegateHandler=_lensFeedDelegateHandler;
- (id)lazyScanCardActionHandler;
@property(readonly, nonatomic) id <SCLensScanCardActionProtocol> scanCardActionHandler;
- (id)initWithUserSession:(id)arg1 cameraViewController:(id)arg2 shazam:(id)arg3 sceneIntelligence:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

