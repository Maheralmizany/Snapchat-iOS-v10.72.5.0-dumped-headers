//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSpectaclesPairingBLEAuthenticatorDelegate.h"
#import "SCSpectaclesPairingBTConnectorDelegate.h"
#import "SCSpectaclesPairingLagunaBTAuthenticatorDelegate.h"
#import "SCSpectaclesPairingScannerDelegate.h"
#import "SCSpectaclesPairingUserAssociatorDelegate.h"
#import "SCSpectaclesPeripheralDelegate.h"

@class NSMutableSet, NSString, SCSpectaclesBabyDevice, SCSpectaclesCBCentralManager, SCSpectaclesPairingBTConnector, SCSpectaclesPairingCandidateCode, SCSpectaclesPairingLagunaBTAuthenticator, SCSpectaclesPairingScanner, SCSpectaclesPairingUserAssociator, SCSpectaclesProfile, SCWeakTimer;

@interface SCSpectaclesPairingManager : NSObject <SCSpectaclesPairingScannerDelegate, SCSpectaclesPairingBLEAuthenticatorDelegate, SCSpectaclesPairingBTConnectorDelegate, SCSpectaclesPairingLagunaBTAuthenticatorDelegate, SCSpectaclesPairingUserAssociatorDelegate, SCSpectaclesPeripheralDelegate>
{
    SCSpectaclesProfile *_spectaclesProfile;
    SCSpectaclesCBCentralManager *_centralManager;
    id <SCPerforming> _performer;
    id <SCSpectaclesEventListener> _listener;
    unsigned long long _state;
    id <SCSpectaclesDeviceStore> _deviceStore;
    NSString *_userDisplayName;
    SCSpectaclesPairingCandidateCode *_candidateCode;
    SCSpectaclesBabyDevice *_babyDevice;
    SCWeakTimer *_stateTransitionTimeout;
    SCWeakTimer *_watchdogTimer;
    SCSpectaclesPairingScanner *_scanner;
    id <SCSpectaclesPairingBLEAuthenticator> _bleAuthenticator;
    SCSpectaclesPairingBTConnector *_btConnector;
    SCSpectaclesPairingLagunaBTAuthenticator *_btAuthenticator;
    SCSpectaclesPairingUserAssociator *_userAssociator;
    NSMutableSet *_authProviders;
    id <SCSpectaclesTweaksConfigProvider> _tweaksConfigProvider;
}

@property(readonly, nonatomic) id <SCSpectaclesTweaksConfigProvider> tweaksConfigProvider; // @synthesize tweaksConfigProvider=_tweaksConfigProvider;
@property(retain, nonatomic) NSMutableSet *authProviders; // @synthesize authProviders=_authProviders;
@property(retain, nonatomic) SCSpectaclesPairingUserAssociator *userAssociator; // @synthesize userAssociator=_userAssociator;
@property(retain, nonatomic) SCSpectaclesPairingLagunaBTAuthenticator *btAuthenticator; // @synthesize btAuthenticator=_btAuthenticator;
@property(retain, nonatomic) SCSpectaclesPairingBTConnector *btConnector; // @synthesize btConnector=_btConnector;
@property(retain, nonatomic) id <SCSpectaclesPairingBLEAuthenticator> bleAuthenticator; // @synthesize bleAuthenticator=_bleAuthenticator;
@property(retain, nonatomic) SCSpectaclesPairingScanner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) SCWeakTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property(retain, nonatomic) SCWeakTimer *stateTransitionTimeout; // @synthesize stateTransitionTimeout=_stateTransitionTimeout;
@property(retain, nonatomic) SCSpectaclesBabyDevice *babyDevice; // @synthesize babyDevice=_babyDevice;
@property(retain, nonatomic) SCSpectaclesPairingCandidateCode *candidateCode; // @synthesize candidateCode=_candidateCode;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(retain, nonatomic) id <SCSpectaclesDeviceStore> deviceStore; // @synthesize deviceStore=_deviceStore;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SCSpectaclesEventListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCSpectaclesCBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void).cxx_destruct;
- (void)pairingUserAssociatorDidSucceed;
- (void)_pairingBTAuthenticatorDidFailWithoutEaSession:(_Bool)arg1;
- (void)pairingBTAuthenticatorDidFail;
- (void)pairingBTAuthenticatorDidFailWithoutEaSession;
- (void)pairingBTAuthenticatorDidSucceed;
- (void)pairingBTConnectorDidDetectOverload;
- (void)pairingBTConnectorPickerDidFail;
- (void)pairingBTConnectorPickerDidFailKeyMismatch;
- (void)pairingBTConnectorPickerDidCancel;
- (void)pairingBTConnectorDidFindAccessory;
- (void)pairingBTConnectorDidShowPicker;
- (void)pairingBTConnectorDidConnectAccessory:(id)arg1;
- (void)pairingBLEAuthenticatorDidFail;
- (void)pairingBLEAuthenticatorDidExchangeEncryptionKey:(id)arg1;
- (void)peripheral:(id)arg1 didFailWithError:(id)arg2;
- (void)peripheral:(id)arg1 didReceiveEncryptionResponse:(id)arg2;
- (void)peripheral:(id)arg1 didReceiveResponse:(id)arg2;
- (void)peripheralDidOpenStream:(id)arg1;
- (void)peripheralRequiresEncryptionSetup:(id)arg1;
- (id)_activeHandler;
- (void)sendEncryptionRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
- (_Bool)_isDeviceSupportedWithCandidateCode:(id)arg1;
- (_Bool)pairingScannerDidFindBackupPairingWithCandidateCode:(id)arg1;
- (void)pairingScannerDidDisconnectPeripheral:(id)arg1;
- (void)pairingScannerDidConnectPeripheral:(id)arg1 candidateCode:(id)arg2;
- (void)pairingScannerDidUpdateState:(long long)arg1;
- (_Bool)_readyForNameChoosing;
- (id)pairingEmoji;
- (id)pairingDisplayNameWithoutEmoji;
- (void)setPairingDeviceLocationEnabled:(_Bool)arg1;
- (void)setPairingDisplayName:(id)arg1;
- (void)confirmKeepPreviousDevicePaired;
- (void)confirmUnpairPreviousDevice;
- (void)addAuthenticationProvider:(id)arg1;
- (void)cancelSearchForNewDevices;
- (void)startSearchForNewDevicesWithUserDisplayName:(id)arg1;
- (void)_timerKick;
- (void)_startWatchdogTimer;
- (id)_previouslyPairedDevice;
- (_Bool)_deviceStoreHasOtherPairedDevices;
- (void)_transitionToState:(unsigned long long)arg1;
- (id)initWithDeviceStore:(id)arg1 listener:(id)arg2 centralManager:(id)arg3 tweaksConfigProvider:(id)arg4 spectaclesProfile:(id)arg5;
- (void)requirePeripheralName:(id)arg1;
- (void)restrictRSSIForFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

