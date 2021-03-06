//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGalleryGenericSettingsViewController.h"

#import "SCLagunaAppStatusListener.h"
#import "SCLagunaSettingsDeviceCellDelegate.h"
#import "SCLagunaSettingsPairingHeaderViewDelegate.h"
#import "SCSpectaclesEventListener.h"
#import "TTTAttributedLabelDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableSet, NSString, SCCommerceOperaPresenter, SCLagunaSettingsPairingHeaderView, SCSpectaclesActivateDeviceFlow, SCUserSession, UITableView;

@interface SCLagunaSettingsViewController : SCGalleryGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSpectaclesEventListener, TTTAttributedLabelDelegate, SCLagunaAppStatusListener, SCLagunaSettingsPairingHeaderViewDelegate, SCLagunaSettingsDeviceCellDelegate>
{
    UITableView *_tableView;
    SCUserSession *_userSession;
    NSArray *_devices;
    NSArray *_releaseNotes;
    NSMutableSet *_newReleaseNotes;
    SCLagunaSettingsPairingHeaderView *_pairingHeaderView;
    SCSpectaclesActivateDeviceFlow *_activationFlow;
    SCCommerceOperaPresenter *_commerceOperaPresenter;
    NSArray *_resourcesTags;
    _Bool _shouldCancelPairing;
    _Bool _viewOnScreen;
    id <SCSpectaclesPairingDelegate> _pairingDelegate;
    id <SCSpectaclesAppLogger> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)leftButtonPressed;
- (id)getTitle;
- (void)didPressPairNowButton;
- (void)pairingHeaderViewDidPressActionButton:(id)arg1;
- (void)pairingHeaderViewDidPressInfoButton:(id)arg1;
- (void)deviceCellDidTapConnectButton:(id)arg1;
- (void)_activateDevice:(id)arg1;
- (id)_cellForDevice:(id)arg1;
- (void)_refreshReleaseNotes;
- (void)_refreshPairingHeader;
- (unsigned long long)_currentPairingHeaderState;
- (void)_handleShopButtonPress;
- (long long)_getDeviceStateOfConnectedDevice;
- (id)_dequeueReusableGenericSettingsCell;
- (void)_alertBluetoothOffFallback;
- (void)_updateView;
- (void)_refreshDeviceList;
- (void)_presentPairingWithUnsupportedDevice;
- (void)_presentPairingWithUnsupportedCandidateCode;
- (void)_presentPairingPageWithSource:(unsigned long long)arg1;
- (void)spectaclesDevice:(id)arg1 didUnpairWithReason:(unsigned long long)arg2;
- (void)spectaclesOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(id)arg2;
- (void)spectaclesDevice:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)_expandedStatusDescriptionLabelHeight:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_applicationWillResignActive;
- (void)_applicationDidBecomeActive;
- (id)pageViewName;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 pairingDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

