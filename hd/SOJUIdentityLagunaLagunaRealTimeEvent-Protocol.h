//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSNumber, NSString;

@protocol SOJUIdentityLagunaLagunaRealTimeEvent <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *updateDurationInMs;
@property(readonly, copy, nonatomic) NSNumber *downloadDurationInMs;
@property(readonly, copy, nonatomic) NSNumber *transferDurationInMs;
@property(readonly, copy, nonatomic) NSString *failureReason;
@property(readonly, copy, nonatomic) NSString *updateSessionId;
@property(readonly, copy, nonatomic) NSNumber *wifiBootTimeInMs;
@property(readonly, copy, nonatomic) NSNumber *bluetoothBootTimeInMs;
@property(readonly, copy, nonatomic) NSNumber *timeOfTransferEndUtc;
@property(readonly, copy, nonatomic) NSNumber *timeOfTransferStartUtc;
@property(readonly, copy, nonatomic) NSString *transferChannel;
@property(readonly, copy, nonatomic) NSNumber *totalFileSizeTransferred;
@property(readonly, copy, nonatomic) NSNumber *numberOfHdVideoBeingTransferred;
@property(readonly, copy, nonatomic) NSNumber *numberOfSdVideoBeingTransferred;
@property(readonly, copy, nonatomic) NSNumber *dataResponseSize;
@property(readonly, copy, nonatomic) NSString *transferBatchId;
@property(readonly, copy, nonatomic) NSNumber *deviceStorage;
@property(readonly, copy, nonatomic) NSString *buttonPressType;
@property(readonly, copy, nonatomic) NSNumber *nordicTemperature;
@property(readonly, copy, nonatomic) NSNumber *ambaTemperature;
@property(readonly, copy, nonatomic) NSNumber *deviceBatteryAtEnd;
@property(readonly, copy, nonatomic) NSNumber *deviceBatteryAtStart;
@property(readonly, copy, nonatomic) NSNumber *ambientLightIntensity;
@property(readonly, copy, nonatomic) NSString *firmwareVersion;
@property(readonly, copy, nonatomic) NSString *thumbnailFileName;
@property(readonly, copy, nonatomic) NSNumber *thumbnailFileSize;
@property(readonly, copy, nonatomic) NSString *sdVideoFileName;
@property(readonly, copy, nonatomic) NSNumber *sdVideoFileSize;
@property(readonly, copy, nonatomic) NSString *hdVideoFileName;
@property(readonly, copy, nonatomic) NSNumber *hdVideoFileSize;
@property(readonly, copy, nonatomic) NSString *contentName;
@property(readonly, copy, nonatomic) NSNumber *timeOfCapture;
@property(readonly, copy, nonatomic) NSNumber *bleConnected;
@property(readonly, copy, nonatomic) NSString *bleUuid;
@property(readonly, copy, nonatomic) NSNumber *deviceBattery;
@property(readonly, copy, nonatomic) NSString *deviceId;
@property(readonly, copy, nonatomic) NSString *nordicLastBootSession;
@property(readonly, copy, nonatomic) NSNumber *durationInMs;
@property(readonly, copy, nonatomic) NSNumber *otherPairedDeviceCount;
@property(readonly, copy, nonatomic) NSString *pairingType;
@property(readonly, copy, nonatomic) NSString *userInitiationPage;
@property(readonly, copy, nonatomic) NSString *pairingSessionId;
@property(readonly, copy, nonatomic) NSString *sessionId;
@property(readonly, copy, nonatomic) NSString *userId;
@property(readonly, copy, nonatomic) NSString *eventName;
@end

