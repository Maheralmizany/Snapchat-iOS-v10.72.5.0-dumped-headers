//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Media, NSArray, NSData, NSDictionary, NSString, NSURL, SCMediaEndpointParameters;

@protocol MediaDataSource <NSObject>
- (NSArray *)requestContexts;
- (_Bool)needsAuthToFetch;
- (_Bool)encrypt;
- (_Bool)persist;
- (NSDictionary *)encryptionDictionaryForMedia:(Media *)arg1;
- (NSData *)decryptData:(NSData *)arg1 forMedia:(Media *)arg2;
- (NSString *)mediaIdForMedia:(Media *)arg1;

@optional
- (_Bool)isVideoProgressiveDownloadEnabled;
- (_Bool)usingD2SForMedia:(Media *)arg1;
- (_Bool)shouldUnzipMedia:(Media *)arg1;
- (unsigned long long)trackingExpirationInDaysForMedia:(Media *)arg1;
- (NSString *)trackingMediaTypeForMedia:(Media *)arg1;
- (NSString *)trackingTypeForMedia:(Media *)arg1;
- (NSString *)trackingIdForMedia:(Media *)arg1;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (SCMediaEndpointParameters *)endpointParamsForMedia:(Media *)arg1;
- (NSString *)endpointForMedia:(Media *)arg1;
- (NSURL *)URLForMedia:(Media *)arg1;
@end
