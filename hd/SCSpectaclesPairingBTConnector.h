//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSpectaclesBluetoothMonitorDelegate.h"
#import "SCSpectaclesPairingResponseHandler.h"

@class NSString, SCQueuePerformer, SCSpectaclesBluetoothMonitor;

@interface SCSpectaclesPairingBTConnector : NSObject <SCSpectaclesBluetoothMonitorDelegate, SCSpectaclesPairingResponseHandler>
{
    NSString *_serialNumber;
    NSString *_displayName;
    SCQueuePerformer *_performer;
    id <SCSpectaclesPairingBTConnectorDelegate> _delegate;
    SCSpectaclesBluetoothMonitor *_monitor;
}

+ (id)_myUUID;
+ (id)_notifType2;
+ (id)_notifType1;
+ (id)_shuffle:(char *)arg1;
- (void).cxx_destruct;
- (void)bluetoothDetectedOverload;
- (void)bluetoothNeedsPicker;
- (void)bluetoothDidDisconnect:(id)arg1;
- (void)bluetoothDidConnect:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)_showBluetoothPicker;
- (void)_handleBluetoothCompletionWithError:(id)arg1;
- (void)_forwardNotifications:(id)arg1;
- (void)startConnecting;
- (id)initWithSerialNumber:(id)arg1 displayName:(id)arg2 performer:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
