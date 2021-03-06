//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, SCConfigLRUCache, SCConfigUserAuthentication, SCDocObjectContext, SCExperimentDataListenerAnnouncer, SCGrpcService, SCQueuePerformer;

@interface SCConfigRepository : NSObject
{
    SCQueuePerformer *_performer;
    SCConfigUserAuthentication *_userAuthentication;
    SCDocObjectContext *_docObjectContext;
    NSString *_etag;
    NSDate *_lastUpdateTimestamp;
    SCConfigLRUCache *_configLRUCache;
    _Bool _grpcLibEnabled;
    SCGrpcService *_grpcService;
    SCExperimentDataListenerAnnouncer *_expDataListenerAnnouncer;
    unsigned long long _syncCounter;
}

- (void).cxx_destruct;
- (void)_deleteEtagOrAbortTransactionContext:(id)arg1;
- (_Bool)_k2CofPushToABEnabled;
- (id)_getLRUCache;
- (id)_getLastUpdateTimestamp;
- (id)_getEtag;
- (_Bool)ignoreAssertion;
- (void)_handleExperimentDataWithChecksum:(int)arg1 transactionContext:(id)arg2 abConfigs:(id)arg3 fromUserSession:(_Bool)arg4;
- (void)_handleExperimentDataWithChecksum:(int)arg1 transactionContext:(id)arg2 fromUserSession:(_Bool)arg3;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (void)_updateDBWithCofConfigTargetingResponse:(id)arg1 fromUserSession:(_Bool)arg2 logout:(_Bool)arg3;
- (void)_readEtagFromDB;
- (id)convertFrom:(id)arg1 secondsForNow:(double)arg2;
- (id)_getConfigsFromDBForConfigKey:(id)arg1;
- (void)_refreshConfigsFromServerIfNeeded:(_Bool)arg1 cofTriggerEventType:(int)arg2 appState:(int)arg3 instrumentation:(int)arg4 syncCounter:(unsigned long long)arg5 logout:(_Bool)arg6;
- (_Bool)_isRefreshPreferred;
- (void)_appWillEnterForeground;
- (void)_authenticatedCall:(id)arg1;
- (void)_unauthenticatedCall:(id)arg1 logout:(_Bool)arg2;
- (void)handleFailedHttpRequestWithClientError:(id)arg1 fromUserSession:(_Bool)arg2 requestStartTime:(double)arg3 logout:(_Bool)arg4;
- (void)handleSuccessfulHttpRequest:(id)arg1 response:(id)arg2 data:(id)arg3 fromUserSession:(_Bool)arg4 requestStartTime:(double)arg5 logout:(_Bool)arg6;
- (void)emitSyncRequestSuccess:(_Bool)arg1 fromUserSession:(_Bool)arg2 requestDurationSec:(double)arg3 serverErrorCode:(id)arg4;
- (void)_callCofEngine:(int)arg1 appState:(int)arg2 instrumentation:(int)arg3 syncCounter:(unsigned long long)arg4 logout:(_Bool)arg5;
- (void)_processLoginResponse:(id)arg1;
- (void)_refreshCacheWithUpdateConfigIds:(id)arg1;
- (id)_validateConfigRulesForConfigKey:(id)arg1 configsInDBFormat:(id)arg2;
- (void)_initWithSyncTask;
- (void)findConfigsWithConfigKey:(id)arg1 callbackPerformer:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)findConfigsWithConfigKeySync:(id)arg1 readThroughDBIfCacheMissed:(_Bool)arg2;
- (void)registerUserAuthentication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1;

@end

