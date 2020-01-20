//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUpdatesResponseListener.h"
#import "SCUserSessionScoped.h"

@class NSString, SCGalleryLagunaWifiController, SCLagunaFirmwareManager, SCLagunaHomeWifiManager, SCLagunaReleaseNoteStore, SCLagunaUsageRecorder, SCSpectaclesActivateDeviceFlow, SCSpectaclesAuxiliaryContentStore, SCSpectaclesContextNotificationManager, SCSpectaclesLogger, SCSpectaclesManager, SCUserSession;

@interface SCLagunaModule : NSObject <SCUpdatesResponseListener, SCUserSessionScoped>
{
    _Bool _scrollingForPairingOnboarding;
    _Bool _isMemoriesV3Enabled;
    id <SCDownloadableContentManaging> _resourceManager;
    id <SCLagunaManiphestAdapter> _maniphestAdapter;
    SCUserSession *_userSession;
    id <SCSpectaclesOnboardingTooltipProvider> _onboardingTooltipProvider;
    SCSpectaclesManager *_spectaclesManager;
    SCLagunaFirmwareManager *_firmwareManager;
    SCGalleryLagunaWifiController *_wifiController;
    SCLagunaHomeWifiManager *_homeWifiManager;
    SCLagunaUsageRecorder *_usageRecorder;
    SCLagunaReleaseNoteStore *_releaseNoteStore;
    SCSpectaclesActivateDeviceFlow *_activateDeviceFlow;
    id <SCSpectaclesCrashLogger> _crashLogger;
    SCSpectaclesLogger *_analyticsLogger;
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    id <SCSpectaclesAuxiliaryContentProvider> _auxiliaryContentProvider;
    id <SCSpectaclesUrlViewControllerFactory> _urlViewControllerFactory;
    SCSpectaclesContextNotificationManager *_contextNotificationManager;
}

@property(retain, nonatomic) SCSpectaclesContextNotificationManager *contextNotificationManager; // @synthesize contextNotificationManager=_contextNotificationManager;
@property(nonatomic) _Bool isMemoriesV3Enabled; // @synthesize isMemoriesV3Enabled=_isMemoriesV3Enabled;
@property(retain, nonatomic) id <SCSpectaclesUrlViewControllerFactory> urlViewControllerFactory; // @synthesize urlViewControllerFactory=_urlViewControllerFactory;
@property(retain, nonatomic) id <SCSpectaclesAuxiliaryContentProvider> auxiliaryContentProvider; // @synthesize auxiliaryContentProvider=_auxiliaryContentProvider;
@property(retain, nonatomic) SCSpectaclesAuxiliaryContentStore *auxiliaryContentStore; // @synthesize auxiliaryContentStore=_auxiliaryContentStore;
@property(retain, nonatomic) SCSpectaclesLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) id <SCSpectaclesCrashLogger> crashLogger; // @synthesize crashLogger=_crashLogger;
@property(retain, nonatomic) SCSpectaclesActivateDeviceFlow *activateDeviceFlow; // @synthesize activateDeviceFlow=_activateDeviceFlow;
@property(retain, nonatomic) SCLagunaReleaseNoteStore *releaseNoteStore; // @synthesize releaseNoteStore=_releaseNoteStore;
@property(retain, nonatomic) SCLagunaUsageRecorder *usageRecorder; // @synthesize usageRecorder=_usageRecorder;
@property(retain, nonatomic) SCLagunaHomeWifiManager *homeWifiManager; // @synthesize homeWifiManager=_homeWifiManager;
@property(retain, nonatomic) SCGalleryLagunaWifiController *wifiController; // @synthesize wifiController=_wifiController;
@property(retain, nonatomic) SCLagunaFirmwareManager *firmwareManager; // @synthesize firmwareManager=_firmwareManager;
@property(retain, nonatomic) SCSpectaclesManager *spectaclesManager; // @synthesize spectaclesManager=_spectaclesManager;
@property(retain, nonatomic) id <SCSpectaclesOnboardingTooltipProvider> onboardingTooltipProvider; // @synthesize onboardingTooltipProvider=_onboardingTooltipProvider;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool scrollingForPairingOnboarding; // @synthesize scrollingForPairingOnboarding=_scrollingForPairingOnboarding;
@property(retain, nonatomic) id <SCLagunaManiphestAdapter> maniphestAdapter; // @synthesize maniphestAdapter=_maniphestAdapter;
@property(retain, nonatomic) id <SCDownloadableContentManaging> resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (id)_deviceListFromServerResponse:(id)arg1;
- (void)didReceiveUpdatesResponse:(id)arg1;
- (id)_newSettingsOnboardingFlow;
- (id)_newPairingOnboardingFlow:(id)arg1;
- (_Bool)_shouldDownloadHomeWifiAssets;
- (void)warmupPairingOnboarding:(id)arg1;
- (void)warmupUpdateOnboarding;
- (void)warmupSettingsOnboarding;
- (void)warmupSettingsIcons;
- (void)warmupContextNotificationAssets;
- (void)warmupHomeWifiAssets;
- (void)warmupPairingAssets;
- (void)warmup;
- (id)newUpdateOnboardingViewController;
- (id)newSettingsOnboardingViewController;
- (_Bool)shouldShowUpdateOnboarding;
- (id)newPairingOnboardingViewController:(id)arg1;
- (_Bool)shouldShowPairingOnboarding:(id)arg1;
- (void)invalidate;
- (id)initWithUserSession:(id)arg1 resourceManager:(id)arg2 maniphestAdapter:(id)arg3 onboardingTooltipProvider:(id)arg4 auxiliaryContentProvider:(id)arg5 urlViewControllerFactory:(id)arg6 isMemoriesV3Enabled:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
