//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGtqNetworkRequestManaging.h"
#import "SCRetriableRequestManagerDelegate.h"
#import "SCUserSessionScoped.h"

@class NSString, SCRetriableRequestManager, SCSessionRequestManager, SCUserSession;

@interface SCGtqNetworkController : NSObject <SCUserSessionScoped, SCRetriableRequestManagerDelegate, SCGtqNetworkRequestManaging>
{
    SCUserSession *_userSession;
    SCRetriableRequestManager *_retriableRequestManager;
    SCRetriableRequestManager *_retriableViewRequestManager;
    SCRetriableRequestManager *_retriableCreationRequestManager;
    SCSessionRequestManager *_sessionRequestManager;
    NSString *_host;
    NSString *_serveUnlockablesPath;
    NSString *_viewAdTrackProxyEndpoint;
    NSString *_creationAdTrackProxyEndpoint;
    id <SCUnlockablesAuthProvider> _authProvider;
}

- (void).cxx_destruct;
- (void)submitRetryRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)invalidate;
- (void)_submitRequest:(id)arg1 performer:(id)arg2 latencyMeasure:(id)arg3 failureMeasure:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6 requestType:(long long)arg7;
- (id)_getTrackCreationPath;
- (id)_getTrackViewPath;
- (id)_getServePath;
- (id)_getHost;
- (void)submitServeNetworkRequest:(id)arg1 completionPerformer:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fireGtqCreationAdTrackProxyRequest:(id)arg1 performer:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fireGtqAdTrackProxyRequest:(id)arg1 performer:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)fetchServeUnlockablesRequest:(id)arg1 performer:(id)arg2 referenceId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

