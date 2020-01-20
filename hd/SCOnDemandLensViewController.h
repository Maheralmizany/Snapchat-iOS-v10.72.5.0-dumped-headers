//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCameraLiveDisplayCustomer.h"
#import "SCFeatureToggleCameraButtonDelegate.h"
#import "SCLensDataProviderListener.h"
#import "SCLensUIUpdateListener.h"
#import "SCLensUserInterfaceDelegate.h"
#import "SCOnDemandLensDiscoveryViewControllerDelegate.h"
#import "SCOnDemandLensViewControllerProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCCapturerToken, SCLens, SCLongPressGestureRecognizer, SCOnDemandGeofilterPillButton, SCOnDemandLensDataProvider, SCOnDemandLensDiscoveryViewController, SCOnDemandLensUIController, SOJUUnlockablesOndemandTemplateCategory, UITapGestureRecognizer, UIView, UIView<SCCameraTimer>;

@interface SCOnDemandLensViewController : UIViewController <UIGestureRecognizerDelegate, SCLensUserInterfaceDelegate, SCLensUIUpdateListener, SCOnDemandLensDiscoveryViewControllerDelegate, SCLensDataProviderListener, SCFeatureToggleCameraButtonDelegate, SCOnDemandLensViewControllerProtocol, SCCameraLiveDisplayCustomer>
{
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    id <SCOnDemandLensViewControllerDelegate> _delegate;
    SOJUUnlockablesOndemandTemplateCategory *_templateCategory;
    UIView *_carouselParentView;
    id <SCFeatureToggleCameraButton> _toggleCameraButton;
    UIView<SCCameraTimer> *_cameraTimerView;
    SCOnDemandLensUIController *_lensesUIController;
    SCCapturerToken *_token;
    id <SCCapturer> _managedCapturer;
    long long _devicePosition;
    SCOnDemandLensDataProvider *_lensDataProvider;
    SCLens *_selectedLens;
    unsigned long long _mode;
    SCOnDemandLensDiscoveryViewController *_allTimeHitsViewController;
    SCLongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_selectLensButtonTapGestureRecognizer;
    SCOnDemandGeofilterPillButton *_selectLensButton;
    id <SCLensLogger> _lensLogger;
    NSString *_currentLensSessionId;
    NSString *_lensIdToRestore;
}

@property(retain, nonatomic) NSString *lensIdToRestore; // @synthesize lensIdToRestore=_lensIdToRestore;
- (void).cxx_destruct;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)cameraTimer;
- (id)toggleCameraButton;
- (void)abortSnapRecordingIfNeeded;
- (void)didEndDisplayingLens:(id)arg1;
- (void)willDisplayLens:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didHideLenses;
- (void)willShowLenses;
- (void)lensCarouselWasHiddenFromLens;
- (void)lensCarouselWasShownFromLens;
- (void)setAllInterfaceElementsHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setCameraButtonHidden:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setReplyNavigationHidden:(_Bool)arg1;
- (_Bool)shouldShowLensHints;
- (void)didSelectLens;
- (void)onDemandLensDiscoveryViewController:(id)arg1 didSelectLens:(id)arg2;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)_applyCurrentLensWithSender:(id)arg1;
- (void)_setAdditionalElementsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateAdditionalUIElementsBasedOnModeAnimated:(_Bool)arg1;
- (void)_showLensesUI:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateUIBasedOnModeAnimated:(_Bool)arg1;
- (void)_stopCapturing;
- (void)_startCapturing;
- (void)_updateToggleCameraImage;
- (void)_performToggleCameraAction;
- (void)doubleTap:(id)arg1;
- (void)_selectLensButtonTapped:(id)arg1;
- (void)_cameraButtonLongPressed:(id)arg1;
- (void)_cameraButtonTapped:(id)arg1;
- (_Bool)isSelectedObjectInvalid;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)featureToggleCameraButtonDidTap:(id)arg1;
@property(nonatomic) long long devicePosition;
- (id)allTimeHitsViewController;
- (void)_setupLensesControllerAndSupportingUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGeofilterSession:(id)arg1 templateCategory:(id)arg2 carouselParentView:(id)arg3 lensLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

