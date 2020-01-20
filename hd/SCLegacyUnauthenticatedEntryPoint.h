//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCDeviceCheckServices, SCIdentityLoggerServices, SCLegacyUnauthenticatedWorkflow, SCOneTapLoginServices, SCRegistrationDeviceInfoServices, SCScopeExposer, SCSystemScope, SCUnauthenticatedCrashDetectionServices, SCUnauthenticatedScope;

@interface SCLegacyUnauthenticatedEntryPoint : SCEntryPoint
{
    SCLegacyUnauthenticatedWorkflow *_unauthenticatedWorkflow;
    id <SCUnauthenticatedUserSessionRepository> _unauthenticatedSessionRepository;
    id <SCUnauthenticatedPageRouter> _pageRouter;
    SCSystemScope *_systemScope;
    SCUnauthenticatedScope *_unauthenticatedScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCRegistrationDeviceInfoServices *_registrationDeviceInfoServices;
    SCIdentityLoggerServices *_identityLoggerServices;
    SCDeviceCheckServices *_deviceCheckServices;
    SCOneTapLoginServices *_oneTapLoginServices;
    SCUnauthenticatedCrashDetectionServices *_unauthenticatedCrashDetectionServices;
    SCScopeExposer *_loginScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *loginScopeExposer; // @synthesize loginScopeExposer=_loginScopeExposer;
@property(nonatomic) __weak SCUnauthenticatedCrashDetectionServices *unauthenticatedCrashDetectionServices; // @synthesize unauthenticatedCrashDetectionServices=_unauthenticatedCrashDetectionServices;
@property(nonatomic) __weak SCOneTapLoginServices *oneTapLoginServices; // @synthesize oneTapLoginServices=_oneTapLoginServices;
@property(nonatomic) __weak SCDeviceCheckServices *deviceCheckServices; // @synthesize deviceCheckServices=_deviceCheckServices;
@property(nonatomic) __weak SCIdentityLoggerServices *identityLoggerServices; // @synthesize identityLoggerServices=_identityLoggerServices;
@property(nonatomic) __weak SCRegistrationDeviceInfoServices *registrationDeviceInfoServices; // @synthesize registrationDeviceInfoServices=_registrationDeviceInfoServices;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCUnauthenticatedScope *unauthenticatedScope; // @synthesize unauthenticatedScope=_unauthenticatedScope;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)_invalidateUnverifiedUserSessionIfAbandoned:(id)arg1;
- (void)didLogin:(id)arg1;
- (id)end;
- (void)begin;

@end
