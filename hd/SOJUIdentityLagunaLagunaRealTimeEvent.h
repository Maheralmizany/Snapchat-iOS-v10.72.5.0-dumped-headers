//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUIdentityLagunaLagunaRealTimeEvent.h"

@class NSNumber, NSString;

@interface SOJUIdentityLagunaLagunaRealTimeEvent : NSObject <SOJUIdentityLagunaLagunaRealTimeEvent>
{
    NSString *_eventName;
    NSString *_userId;
    NSString *_sessionId;
    NSString *_pairingSessionId;
    NSString *_userInitiationPage;
    NSString *_pairingType;
    NSNumber *_otherPairedDeviceCount;
    NSNumber *_durationInMs;
    NSString *_nordicLastBootSession;
    NSString *_deviceId;
    NSNumber *_deviceBattery;
    NSString *_bleUuid;
    NSNumber *_bleConnected;
    NSNumber *_timeOfCapture;
    NSString *_contentName;
    NSNumber *_hdVideoFileSize;
    NSString *_hdVideoFileName;
    NSNumber *_sdVideoFileSize;
    NSString *_sdVideoFileName;
    NSNumber *_thumbnailFileSize;
    NSString *_thumbnailFileName;
    NSString *_firmwareVersion;
    NSNumber *_ambientLightIntensity;
    NSNumber *_deviceBatteryAtStart;
    NSNumber *_deviceBatteryAtEnd;
    NSNumber *_ambaTemperature;
    NSNumber *_nordicTemperature;
    NSString *_buttonPressType;
    NSNumber *_deviceStorage;
    NSString *_transferBatchId;
    NSNumber *_dataResponseSize;
    NSNumber *_numberOfSdVideoBeingTransferred;
    NSNumber *_numberOfHdVideoBeingTransferred;
    NSNumber *_totalFileSizeTransferred;
    NSString *_transferChannel;
    NSNumber *_timeOfTransferStartUtc;
    NSNumber *_timeOfTransferEndUtc;
    NSNumber *_bluetoothBootTimeInMs;
    NSNumber *_wifiBootTimeInMs;
    NSString *_updateSessionId;
    NSString *_failureReason;
    NSNumber *_transferDurationInMs;
    NSNumber *_downloadDurationInMs;
    NSNumber *_updateDurationInMs;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *updateDurationInMs; // @synthesize updateDurationInMs=_updateDurationInMs;
@property(readonly, copy, nonatomic) NSNumber *downloadDurationInMs; // @synthesize downloadDurationInMs=_downloadDurationInMs;
@property(readonly, copy, nonatomic) NSNumber *transferDurationInMs; // @synthesize transferDurationInMs=_transferDurationInMs;
@property(readonly, copy, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, copy, nonatomic) NSString *updateSessionId; // @synthesize updateSessionId=_updateSessionId;
@property(readonly, copy, nonatomic) NSNumber *wifiBootTimeInMs; // @synthesize wifiBootTimeInMs=_wifiBootTimeInMs;
@property(readonly, copy, nonatomic) NSNumber *bluetoothBootTimeInMs; // @synthesize bluetoothBootTimeInMs=_bluetoothBootTimeInMs;
@property(readonly, copy, nonatomic) NSNumber *timeOfTransferEndUtc; // @synthesize timeOfTransferEndUtc=_timeOfTransferEndUtc;
@property(readonly, copy, nonatomic) NSNumber *timeOfTransferStartUtc; // @synthesize timeOfTransferStartUtc=_timeOfTransferStartUtc;
@property(readonly, copy, nonatomic) NSString *transferChannel; // @synthesize transferChannel=_transferChannel;
@property(readonly, copy, nonatomic) NSNumber *totalFileSizeTransferred; // @synthesize totalFileSizeTransferred=_totalFileSizeTransferred;
@property(readonly, copy, nonatomic) NSNumber *numberOfHdVideoBeingTransferred; // @synthesize numberOfHdVideoBeingTransferred=_numberOfHdVideoBeingTransferred;
@property(readonly, copy, nonatomic) NSNumber *numberOfSdVideoBeingTransferred; // @synthesize numberOfSdVideoBeingTransferred=_numberOfSdVideoBeingTransferred;
@property(readonly, copy, nonatomic) NSNumber *dataResponseSize; // @synthesize dataResponseSize=_dataResponseSize;
@property(readonly, copy, nonatomic) NSString *transferBatchId; // @synthesize transferBatchId=_transferBatchId;
@property(readonly, copy, nonatomic) NSNumber *deviceStorage; // @synthesize deviceStorage=_deviceStorage;
@property(readonly, copy, nonatomic) NSString *buttonPressType; // @synthesize buttonPressType=_buttonPressType;
@property(readonly, copy, nonatomic) NSNumber *nordicTemperature; // @synthesize nordicTemperature=_nordicTemperature;
@property(readonly, copy, nonatomic) NSNumber *ambaTemperature; // @synthesize ambaTemperature=_ambaTemperature;
@property(readonly, copy, nonatomic) NSNumber *deviceBatteryAtEnd; // @synthesize deviceBatteryAtEnd=_deviceBatteryAtEnd;
@property(readonly, copy, nonatomic) NSNumber *deviceBatteryAtStart; // @synthesize deviceBatteryAtStart=_deviceBatteryAtStart;
@property(readonly, copy, nonatomic) NSNumber *ambientLightIntensity; // @synthesize ambientLightIntensity=_ambientLightIntensity;
@property(readonly, copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, copy, nonatomic) NSString *thumbnailFileName; // @synthesize thumbnailFileName=_thumbnailFileName;
@property(readonly, copy, nonatomic) NSNumber *thumbnailFileSize; // @synthesize thumbnailFileSize=_thumbnailFileSize;
@property(readonly, copy, nonatomic) NSString *sdVideoFileName; // @synthesize sdVideoFileName=_sdVideoFileName;
@property(readonly, copy, nonatomic) NSNumber *sdVideoFileSize; // @synthesize sdVideoFileSize=_sdVideoFileSize;
@property(readonly, copy, nonatomic) NSString *hdVideoFileName; // @synthesize hdVideoFileName=_hdVideoFileName;
@property(readonly, copy, nonatomic) NSNumber *hdVideoFileSize; // @synthesize hdVideoFileSize=_hdVideoFileSize;
@property(readonly, copy, nonatomic) NSString *contentName; // @synthesize contentName=_contentName;
@property(readonly, copy, nonatomic) NSNumber *timeOfCapture; // @synthesize timeOfCapture=_timeOfCapture;
@property(readonly, copy, nonatomic) NSNumber *bleConnected; // @synthesize bleConnected=_bleConnected;
@property(readonly, copy, nonatomic) NSString *bleUuid; // @synthesize bleUuid=_bleUuid;
@property(readonly, copy, nonatomic) NSNumber *deviceBattery; // @synthesize deviceBattery=_deviceBattery;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *nordicLastBootSession; // @synthesize nordicLastBootSession=_nordicLastBootSession;
@property(readonly, copy, nonatomic) NSNumber *durationInMs; // @synthesize durationInMs=_durationInMs;
@property(readonly, copy, nonatomic) NSNumber *otherPairedDeviceCount; // @synthesize otherPairedDeviceCount=_otherPairedDeviceCount;
@property(readonly, copy, nonatomic) NSString *pairingType; // @synthesize pairingType=_pairingType;
@property(readonly, copy, nonatomic) NSString *userInitiationPage; // @synthesize userInitiationPage=_userInitiationPage;
@property(readonly, copy, nonatomic) NSString *pairingSessionId; // @synthesize pairingSessionId=_pairingSessionId;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventName:(id)arg1 userId:(id)arg2 sessionId:(id)arg3 pairingSessionId:(id)arg4 userInitiationPage:(id)arg5 pairingType:(id)arg6 otherPairedDeviceCount:(id)arg7 durationInMs:(id)arg8 nordicLastBootSession:(id)arg9 deviceId:(id)arg10 deviceBattery:(id)arg11 bleUuid:(id)arg12 bleConnected:(id)arg13 timeOfCapture:(id)arg14 contentName:(id)arg15 hdVideoFileSize:(id)arg16 hdVideoFileName:(id)arg17 sdVideoFileSize:(id)arg18 sdVideoFileName:(id)arg19 thumbnailFileSize:(id)arg20 thumbnailFileName:(id)arg21 firmwareVersion:(id)arg22 ambientLightIntensity:(id)arg23 deviceBatteryAtStart:(id)arg24 deviceBatteryAtEnd:(id)arg25 ambaTemperature:(id)arg26 nordicTemperature:(id)arg27 buttonPressType:(id)arg28 deviceStorage:(id)arg29 transferBatchId:(id)arg30 dataResponseSize:(id)arg31 numberOfSdVideoBeingTransferred:(id)arg32 numberOfHdVideoBeingTransferred:(id)arg33 totalFileSizeTransferred:(id)arg34 transferChannel:(id)arg35 timeOfTransferStartUtc:(id)arg36 timeOfTransferEndUtc:(id)arg37 bluetoothBootTimeInMs:(id)arg38 wifiBootTimeInMs:(id)arg39 updateSessionId:(id)arg40 failureReason:(id)arg41 transferDurationInMs:(id)arg42 downloadDurationInMs:(id)arg43 updateDurationInMs:(id)arg44;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)updateDurationInMsValue;
- (long long)downloadDurationInMsValue;
- (long long)transferDurationInMsValue;
- (long long)wifiBootTimeInMsValue;
- (long long)bluetoothBootTimeInMsValue;
- (long long)timeOfTransferEndUtcValue;
- (long long)timeOfTransferStartUtcValue;
- (int)totalFileSizeTransferredValue;
- (int)numberOfHdVideoBeingTransferredValue;
- (int)numberOfSdVideoBeingTransferredValue;
- (long long)dataResponseSizeValue;
- (long long)deviceStorageValue;
- (int)nordicTemperatureValue;
- (int)ambaTemperatureValue;
- (long long)deviceBatteryAtEndValue;
- (long long)deviceBatteryAtStartValue;
- (int)ambientLightIntensityValue;
- (long long)thumbnailFileSizeValue;
- (long long)sdVideoFileSizeValue;
- (long long)hdVideoFileSizeValue;
- (long long)timeOfCaptureValue;
- (_Bool)bleConnectedValue;
- (int)deviceBatteryValue;
- (long long)durationInMsValue;
- (int)otherPairedDeviceCountValue;
- (long long)eventNameEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
