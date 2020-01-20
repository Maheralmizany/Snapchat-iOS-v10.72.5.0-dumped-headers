//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SCSpectaclesResponseMessage, VLKEncryptionSetupResponse;

@protocol SCSpectaclesPeripheralDelegate <NSObject>
- (void)peripheral:(id <SCSpectaclesPeripheral>)arg1 didFailWithError:(NSError *)arg2;
- (void)peripheral:(id <SCSpectaclesPeripheral>)arg1 didReceiveEncryptionResponse:(VLKEncryptionSetupResponse *)arg2;
- (void)peripheral:(id <SCSpectaclesPeripheral>)arg1 didReceiveResponse:(SCSpectaclesResponseMessage *)arg2;
- (void)peripheralDidOpenStream:(id <SCSpectaclesPeripheral>)arg1;
- (void)peripheralRequiresEncryptionSetup:(id <SCSpectaclesPeripheral>)arg1;
@end
