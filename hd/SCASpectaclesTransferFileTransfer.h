//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCASpectaclesContentTransferEventBase.h"

@interface SCASpectaclesTransferFileTransfer : SCASpectaclesContentTransferEventBase
{
}

- (void)setWifiTemperature:(long long)arg1;
- (void)setTransferSpeedBps:(long long)arg1;
- (void)setIsCharging:(_Bool)arg1;
- (void)setFileType:(long long)arg1;
- (void)setFileSizeBytes:(long long)arg1;
- (void)setDeviceBattery:(long long)arg1;
- (void)setContentId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
