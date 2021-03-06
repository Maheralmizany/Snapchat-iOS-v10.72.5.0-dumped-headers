//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCObservable, SCUserVerificationContext, SOJULoginResponse;

@protocol SCUnauthenticatedFeatureRouteActions <NSObject>
- (void)endUserVerification;
- (void)startUserVerificationWithLoginResponse:(SOJULoginResponse *)arg1 context:(SCUserVerificationContext *)arg2 delegate:(id <SCUserVerificationWorkflowDelegate>)arg3;
- (void)endLogIn;
- (void)startLogIn:(id <SCLogInDelegate>)arg1 lastLoginUsername:(NSString *)arg2;
- (void)endPreRegistration;
- (void)startPreRegistration:(id <SCPreRegistrationDelegate>)arg1;
- (void)endRegistration;
- (void)startRegistration:(id <SCRegistrationDelegate>)arg1;
- (void)endOneTapLogin;
- (void)startOneTapLogin:(id <SCOneTapLoginDelegate>)arg1;
- (SCObservable *)showUnauthenticatedLandingPage;
@end

