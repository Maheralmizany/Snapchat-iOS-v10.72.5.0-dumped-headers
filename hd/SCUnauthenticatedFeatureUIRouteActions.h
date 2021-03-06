//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnauthenticatedFeatureRouteActions.h"

@class NSString, SCBusinessLogicHarness, SCScopeExposer;

@interface SCUnauthenticatedFeatureUIRouteActions : NSObject <SCUnauthenticatedFeatureRouteActions>
{
    id <SCUIContainer> _unauthenticatedUIContainer;
    SCScopeExposer *_oneTapLoginScopeExposer;
    SCScopeExposer *_preRegistrationScopeExposer;
    SCScopeExposer *_registrationScopeExposer;
    SCScopeExposer *_logInScopeExposer;
    SCScopeExposer *_userVerificationScopeExposer;
    SCBusinessLogicHarness *_oneTapLoginLandingPageBusinessLogicHarness;
}

- (void).cxx_destruct;
- (void)endUserVerification;
- (void)startUserVerificationWithLoginResponse:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)endLogIn;
- (void)startLogIn:(id)arg1 lastLoginUsername:(id)arg2;
- (void)endPreRegistration;
- (void)startPreRegistration:(id)arg1;
- (void)endRegistration;
- (void)startRegistration:(id)arg1;
- (void)endOneTapLogin;
- (void)startOneTapLogin:(id)arg1;
- (id)showUnauthenticatedLandingPage;
- (id)initWithUIContainer:(id)arg1 oneTapLoginScopeExposer:(id)arg2 preRegistrationScopeExposer:(id)arg3 registrationScopeExposer:(id)arg4 logInScopeExposer:(id)arg5 userVerificationScopeExposer:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

