//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSecurityTokenUpdating.h"

@class SCPreferences, SCQueuePerformer;

@interface SCSecurityTokenUpdater : NSObject <SCSecurityTokenUpdating>
{
    id <SCRequestManager> _requestManager;
    SCPreferences *_preferences;
    SCQueuePerformer *_queuePerformer;
}

- (void).cxx_destruct;
- (void)_fetchSecurityProxyCredentialsWithEndpoint:(id)arg1 tokenResponseKeyConfig:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)removeCredentialsWithEndpoint:(id)arg1;
- (void)updateCredentialsIfInvalidEndpoint:(id)arg1 tokenKey:(id)arg2 expirationKey:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithRequestManager:(id)arg1 preferences:(id)arg2;

@end

