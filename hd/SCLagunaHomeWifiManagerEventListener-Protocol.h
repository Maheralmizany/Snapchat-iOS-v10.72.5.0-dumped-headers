//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSpectaclesDevice;

@protocol SCLagunaHomeWifiManagerEventListener <NSObject>

@optional
- (void)lagunaOnWifiAPListUpdate:(SCSpectaclesDevice *)arg1;
- (void)lagunaOnShareWifiCredentialsUpdate:(unsigned long long)arg1 device:(SCSpectaclesDevice *)arg2 wifiSsid:(NSString *)arg3;
@end

