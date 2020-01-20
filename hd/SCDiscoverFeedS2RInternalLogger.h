//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDiscoverFeedS2RLogging.h"

@class NSString, SCEncryptedCache;

@interface SCDiscoverFeedS2RInternalLogger : NSObject <SCDiscoverFeedS2RLogging>
{
    SCEncryptedCache *_cache;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_prepareLoggingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadCachedNetworkInfos:(CDUnknownBlockType)arg1;
- (void)_saveNetworkInfos:(id)arg1;
- (void)loadLogData:(CDUnknownBlockType)arg1;
- (void)_updateNetworkInfo:(id)arg1 cachedInfos:(id)arg2;
- (void)logNetworkRequestData:(id)arg1 requestId:(id)arg2;
- (void)logNetworkResponseInfo:(id)arg1 requestId:(id)arg2 responseType:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

