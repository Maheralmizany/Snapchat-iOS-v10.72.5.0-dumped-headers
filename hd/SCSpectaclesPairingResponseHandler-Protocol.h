//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCSpectaclesResponseMessage, VLKEncryptionSetupResponse;

@protocol SCSpectaclesPairingResponseHandler <NSObject>

@optional
- (void)handleEncryptionResponse:(VLKEncryptionSetupResponse *)arg1;
- (void)handleResponse:(SCSpectaclesResponseMessage *)arg1;
@end

