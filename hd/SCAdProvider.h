//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUserSessionScoped.h"

@class NSString, SCAdResponseCache, SCUserSession;

@interface SCAdProvider : NSObject <SCUserSessionScoped>
{
    SCAdResponseCache *_adResponseCache;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)cacheUnviewedAdData:(id)arg1;
- (void)_logCacheHit:(_Bool)arg1 adProductType:(unsigned long long)arg2;
- (void)_logMultiAuctionAdResponseMetrics:(id)arg1 adRequestClientIds:(id)arg2 adProductType:(unsigned long long)arg3;
- (void)_handleAdFetchedFailure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleAdFetchedSuccessWithResponses:(id)arg1 targetingParameters:(id)arg2 adRequestClientIds:(id)arg3 adProductType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)adWithTargetingParameters:(id)arg1 adPreferences:(id)arg2 adProductType:(unsigned long long)arg3 loggingContext:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
