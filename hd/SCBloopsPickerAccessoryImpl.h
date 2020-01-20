//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAudioSessionListener.h"
#import "SCBloopsAPIListener.h"
#import "SCBloopsChatSecondTargetProviderDelegate.h"
#import "SCBloopsConversationCallStateListenerDelegate.h"
#import "SCBloopsFullscreenPresenterDelegate.h"
#import "SCBloopsPickerAccessory.h"
#import "SCBloopsSendBarDelegate.h"

@class NSLayoutConstraint, NSString, SCBloopsChatSecondTargetProvider, SCBloopsConversationCallStateListener, SCBloopsFullscreenPresenter, SCBloopsSendBar, SCCircumstanceEngine, SCCustomVolumeController, SCLazy, SCUserSession;

@interface SCBloopsPickerAccessoryImpl : NSObject <SCBloopsFullscreenPresenterDelegate, SCAudioSessionListener, SCBloopsAPIListener, SCBloopsChatSecondTargetProviderDelegate, SCBloopsSendBarDelegate, SCBloopsConversationCallStateListenerDelegate, SCBloopsPickerAccessory>
{
    id <SCBloopsPickerController> _pickerController;
    SCLazy *_bloopsAPI;
    SCLazy *_onboardingResourcesService;
    SCLazy *_bloopsReenactmentService;
    SCLazy *_bloopsRecentService;
    SCLazy *_previewsResourcesService;
    SCUserSession *_userSession;
    SCLazy *_changeTargetControllerFactory;
    SCLazy *_onboardingControllerFactory;
    id <SCBloopsOnboardingController> _onboardingController;
    id <SCBloopsChangeTargetController> _changeTargetController;
    id <SCBloopsConverterFactory> _bloopsConverterFactory;
    id <SCBloopsFullscreenViewFactory> _bloopsFullscreenViewFactory;
    SCLazy *_exportPresenterFactory;
    id <SCBloopsExportPresenter> _exportPresenter;
    SCBloopsFullscreenPresenter *_fullScreenBloopsPresenter;
    SCBloopsChatSecondTargetProvider *_secondTargetProvider;
    SCLazy *_analyticsService;
    SCLazy *_bloopsResultProviderFactory;
    SCBloopsSendBar *_bloopsSendBar;
    NSLayoutConstraint *_bloopsSendBarBottomConstraint;
    _Bool _isActiveState;
    _Bool _isPickerSpecificResourcesPreloadingScheduled;
    SCCustomVolumeController *_customVolumeController;
    id <SCAudioSession> _audioSession;
    _Bool _overridingMuteSwitch;
    SCBloopsConversationCallStateListener *_conversationCallStateListener;
    SCCircumstanceEngine *_circumstanceEngine;
    _Bool _shouldShowBloopConfirmationAlert;
    id <SCBloopsPickerAccessoryOutput> _output;
}

@property(nonatomic) __weak id <SCBloopsPickerAccessoryOutput> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (id)_selectedBloopID;
- (void)_resetSelection;
- (void)_setSecondBloopsTarget:(id)arg1;
- (void)_showExportError;
- (void)_presentExport;
- (void)_showBloopsActionMenu;
- (void)_startBloopsChangeTarget;
- (id)_fullscreenViewController;
- (void)_sendBloop:(id)arg1 thumbnailImage:(id)arg2 fromFullscreen:(_Bool)arg3;
- (id)_bloopsFullscreenModelsFrom:(id)arg1;
- (void)_openFullScreenBloopsViewerWithBloopsPreviewsView:(id)arg1;
- (void)_schedulePreloadingPickerSpecificResourcesIfNeccessary;
- (void)_showShareBloopConfirmationAlertIfNeeded:(CDUnknownBlockType)arg1;
- (void)_updateShowBloopConfirmationAlertIfNeeded;
- (void)conversationCallStateListenerDidDetectCall:(id)arg1;
- (void)bloopsSendBarDidPressExport:(id)arg1;
- (void)bloopsSendBarDidPressNewSelfie:(id)arg1;
- (void)bloopsSendBarDidPressView:(id)arg1;
- (void)bloopsSendBarDidPressMore:(id)arg1;
- (void)bloopsSendBarDidPressSend:(id)arg1;
- (void)_hideBloopsSendBar;
- (void)_showBloopsSendBar;
- (void)bloopsChatSecondTargetProvider:(id)arg1 didUpdateSecondTarget:(id)arg2;
- (void)operaPresenterDidSendButtonPressedWithBloopsModel:(id)arg1 thumbnailImage:(id)arg2;
- (void)operaPresenterDidOpenPageAtIndex:(unsigned long long)arg1;
- (id)operaPresenterSourceViewAtIndex:(unsigned long long)arg1;
- (void)operaPresenterFinishDismiss:(id)arg1;
- (void)operaPresenterBeginPresent:(id)arg1;
- (void)bloopsAPIDidResetPersonsSource:(id)arg1;
- (void)bloopsAPI:(id)arg1 didChangeBloopsPreviewsResourcesStatus:(_Bool)arg2;
- (void)bloopsAPI:(id)arg1 didChangeBloopsFeatureStatus:(_Bool)arg2;
- (void)audioSession:(id)arg1 didChangeVolume:(double)arg2;
- (void)bloopsPreviews:(id)arg1 willStartPlayScenarioAtIndex:(unsigned long long)arg2;
- (void)bloopsPreviewsDidCancelSelection:(id)arg1;
- (void)bloopsPreviews:(id)arg1 willBeginDragging:(id)arg2;
- (void)bloopsPreviewsSelectedBloopDidEndDisplay:(id)arg1;
- (void)bloopsPreviews:(id)arg1 didDoubleTapBloopAtIndex:(unsigned long long)arg2;
- (void)bloopsPreviews:(id)arg1 didLongTapBloopAtIndex:(unsigned long long)arg2;
- (void)bloopsPreviews:(id)arg1 didSecondTapOnBloopAtIndex:(unsigned long long)arg2;
- (void)bloopsPreviews:(id)arg1 didTapOnBloopAtIndex:(unsigned long long)arg2;
- (void)previewsEmptyCell:(id)arg1 willBeginDragging:(id)arg2;
- (void)bloopsEmptyViewStartAction:(id)arg1;
- (void)bloopsActionMenuViewFullScreenActionWithBloopsPreviewsView:(id)arg1;
- (void)bloopsActionMenuNewSelfieActionWithBloopsPreviewsView:(id)arg1;
- (void)willSuspendActive;
- (void)willResumeActive;
- (_Bool)isBloopsOnboardingAllowedForAdditionalCategories;
- (_Bool)isBloopsAllowedForAdditionalCategories;
- (void)exitActiveState;
- (void)enterActiveStateWithPickerController:(id)arg1 talkManager:(id)arg2;
- (id)initWithBloopsAPI:(id)arg1 onboardingResourcesService:(id)arg2 bloopsReenactmentService:(id)arg3 bloopsRecentService:(id)arg4 userSession:(id)arg5 changeTargetControllerFactory:(id)arg6 onboardingControllerFactory:(id)arg7 bloopsConverterFactory:(id)arg8 bloopsFullscreenViewFactory:(id)arg9 secondTargetProvider:(id)arg10 exportPresenterFactory:(id)arg11 conversationCallStateListener:(id)arg12 analyticsService:(id)arg13 bloopResultProviderFactory:(id)arg14 previewsResourcesService:(id)arg15 circumstanceEngine:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

