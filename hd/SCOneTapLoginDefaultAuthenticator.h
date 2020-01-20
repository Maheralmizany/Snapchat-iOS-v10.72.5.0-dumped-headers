//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOneTapLoginAuthenticator.h"

@class SCFideliusLoggedOutManager, SCLazy, SCSystemNetworkServices;

@interface SCOneTapLoginDefaultAuthenticator : NSObject <SCOneTapLoginAuthenticator>
{
    id <SCOneTapLoginRepository> _oneTapLoginRepository;
    SCSystemNetworkServices *_networkServices;
    id <SCEndpointDeviceIDManager> _deviceIdManager;
    SCFideliusLoggedOutManager *_fideliusLoggedOutManager;
    SCLazy *_lazyOneTapLoginLogger;
}

- (void).cxx_destruct;
- (void)_logAuthenticationFailureReason:(unsigned long long)arg1;
- (void)_handleLoginSuccess:(id)arg1 tempIdentity:(id)arg2 username:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)authenticateWithConfirmedReactivation:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)removeOneTapLoginToken;
- (void)removeOneTapLogin;
- (void)persistOneTapLoginToken:(id)arg1 expiry:(long long)arg2;
- (id)initWithOneTapLoginRepository:(id)arg1 networkServices:(id)arg2 deviceIdManager:(id)arg3 fideliusLoggedOutManager:(id)arg4 lazyOneTapLoginLogger:(id)arg5;

@end
