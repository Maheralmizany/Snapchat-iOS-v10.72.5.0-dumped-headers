//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRegistrationBirthdayDelegate.h"
#import "SCRegistrationDisplayNameDelegate.h"
#import "SCRegistrationPasswordDelegate.h"
#import "SCRegistrationSuggestedUsernameDelegate.h"
#import "SCRegistrationUsernameDelegate.h"

@class NSString, SCDisposableObserverLifecycle, SCFideliusTempDeviceUserInfo, SCLazy, SCObservable, SCRegistrationEventLogger, SCRegistrationState, SCRegistrationUsernameSuggester, SCUnauthenticatedUser, SOJULoginResponse;

@interface SCRegistrationWorkflow : NSObject <SCRegistrationDisplayNameDelegate, SCRegistrationBirthdayDelegate, SCRegistrationUsernameDelegate, SCRegistrationSuggestedUsernameDelegate, SCRegistrationPasswordDelegate>
{
    id <SCRegistrationRouter> _router;
    id <SCRegistrationDelegate> _delegate;
    id <SCRegistrationStateTransition> _stateTransition;
    SCDisposableObserverLifecycle *_subscriptions;
    SCLazy *_suggestedUsernameFetcher;
    SCRegistrationState *_currentState;
    SCUnauthenticatedUser *_unauthenticatedUser;
    SCRegistrationUsernameSuggester *_usernameSuggester;
    SOJULoginResponse *_registrationResponse;
    SCFideliusTempDeviceUserInfo *_fideliusTempidentity;
    SCObservable *_applicationLifecycleEvent;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
    SCRegistrationEventLogger *_registrationEventLogger;
}

- (void).cxx_destruct;
- (void)_logRegistraterDidFailWithErrorResponse:(id)arg1;
- (void)_logRegistraterDidSucceed;
- (void)_appWillResignActive;
- (void)_presentNextScreen;
- (void)suggestedUsernameSwitchToUsernameWithUsernameSuggester:(id)arg1;
- (void)birthdayExitedWithUserUnderageError;
- (void)passwordFailedWithErrorResponse:(id)arg1;
- (void)passwordFinishedWithRegistrationResponse:(id)arg1 fideliusTempIdentity:(id)arg2;
- (void)usernameFinishedWithUsername:(id)arg1;
- (void)displayNameFinishedWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)suggestedUsernameFinishedWithUsername:(id)arg1;
- (void)birthdaySubmitted:(id)arg1;
- (void)subscreenExited;
- (void)beginWorkflow;
- (id)initWithRouter:(id)arg1 delegate:(id)arg2 stateTransition:(id)arg3 suggestedUsernameFetcher:(id)arg4 applicationLifecycleEvents:(id)arg5 transitionMomentLogger:(id)arg6 registrationEventLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

