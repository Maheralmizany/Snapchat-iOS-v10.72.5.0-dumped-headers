//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLegacyAuthFlowProxy.h"

@class SCAppSession, SCLegacyAuthenticationService;

@interface SCLegacyAuthFlowProxy : NSObject <SCLegacyAuthFlowProxy>
{
    id <SCLegacyUserLifecycle> _legacyUserLifecycle;
    SCLegacyAuthenticationService *_legacyAuthenticationService;
    SCAppSession *_appSession;
}

- (void).cxx_destruct;
- (void)resetRegistrationProgress;
- (void)userVerificationDidSucceedWithResult:(id)arg1 directUserSession:(id)arg2;
- (void)registerDidSucceedWithResponse:(id)arg1 fideliusTempIdentity:(id)arg2 directUserSession:(id)arg3;
- (void)appSessionDidLogout;
- (void)appSessionWillLogin;
- (void)loginDidSucceedWithVerificationNeeded:(id)arg1;
- (void)loginDidSucceedWithResponse:(id)arg1 fideliusTempIdentity:(id)arg2 directUserSession:(id)arg3;
- (void)logout:(id)arg1;
- (void)authenticatedWithActiveUserSession:(id)arg1 isNewRegistration:(_Bool)arg2;
- (id)initWithLegacyUserLifecycle:(id)arg1 legacyAuthenticationService:(id)arg2 appSession:(id)arg3;

@end
