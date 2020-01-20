//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol SCCPSessionDataSource <NSObject>
- (void)updateDNSCache:(NSData *)arg1 expirationTime:(double)arg2;
- (void)updateWithAlternateSCCPServer:(NSDictionary *)arg1;
- (double)cachedIpExpirationTime;
- (unsigned short)sccpPort;
- (NSDictionary *)sccpServerDictionary;
- (_Bool)isDNSCacheValid;
- (NSData *)cachedAddr;
- (NSString *)gatewayServer;
- (NSString *)sccpHost;
- (NSString *)username;
- (NSDictionary *)sccpAuthDictionary;
- (_Bool)isValid;
@end

