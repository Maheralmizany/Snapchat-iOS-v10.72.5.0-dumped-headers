//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCEllipticCurveCrypto, SCFideliusServiceProvider, SCFideliusUserDatabaseManager, SCUserSession;

@protocol SCFideliusDataProvider <NSObject>
- (NSString *)loadingStatus;
- (void)reInitialize;
- (SCFideliusServiceProvider *)services;
- (_Bool)isBetaReady:(NSString *)arg1;
- (_Bool)isReady:(NSString *)arg1;
- (SCEllipticCurveCrypto *)myBeta;
- (SCFideliusUserDatabaseManager *)userDbManager;
- (SCUserSession *)userSession;
@end

