//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCSpectaclesConnectionInfo : NSObject
{
    _Bool _isCharging;
    NSString *_sessionId;
    long long _transferChannel;
    unsigned long long _wifiConnectionStatus;
    NSString *_deviceId;
    NSString *_firmwareVersion;
    NSString *_hardwareVersion;
    long long _deviceColor;
    long long _deviceBattery;
    long long _deviceStorage;
    long long _ambaTemperature;
    long long _nordicTemperature;
    long long _coulombCtrlTemperature;
    long long _wifiTemperature;
    long long _temperatureReportUtc;
}

@property(nonatomic) long long temperatureReportUtc; // @synthesize temperatureReportUtc=_temperatureReportUtc;
@property(nonatomic) long long wifiTemperature; // @synthesize wifiTemperature=_wifiTemperature;
@property(nonatomic) long long coulombCtrlTemperature; // @synthesize coulombCtrlTemperature=_coulombCtrlTemperature;
@property(nonatomic) long long nordicTemperature; // @synthesize nordicTemperature=_nordicTemperature;
@property(nonatomic) long long ambaTemperature; // @synthesize ambaTemperature=_ambaTemperature;
@property(nonatomic) long long deviceStorage; // @synthesize deviceStorage=_deviceStorage;
@property(nonatomic) long long deviceBattery; // @synthesize deviceBattery=_deviceBattery;
@property(nonatomic) _Bool isCharging; // @synthesize isCharging=_isCharging;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) unsigned long long wifiConnectionStatus; // @synthesize wifiConnectionStatus=_wifiConnectionStatus;
@property(nonatomic) long long transferChannel; // @synthesize transferChannel=_transferChannel;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)setDeviceFields:(id)arg1;

@end
