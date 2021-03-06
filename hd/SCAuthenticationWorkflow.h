//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCDataUnavailableWorkflowDelegate.h"
#import "SCUnauthenticatedWorkflowDelegate.h"
#import "SCUserSessionWorkflowDelegate.h"

@class NSString, SCLazy;

@interface SCAuthenticationWorkflow : NSObject <SCDataUnavailableWorkflowDelegate, SCUnauthenticatedWorkflowDelegate, SCUserSessionWorkflowDelegate>
{
    id <SCApplicationDataChecker> _applicationDataChecker;
    id <SCUserSessionRepository> _userSessionRepository;
    id <SCLegacyAuthFlowProxy> _legacyAuthFlowProxy;
    id <SCAuthenticationRouter> _router;
    SCLazy *_deviceLevelABfetcher;
    id <SCTransitionMomentLogger> _transitionMomentLogger;
}

- (void).cxx_destruct;
- (void)_requestRegisterStudySettings;
- (void)dataUnavailableWorkflowEndedWithDataAvailable;
- (void)userSessionEnded:(id)arg1;
- (void)userCompletedLogInWithUserSession:(id)arg1 logInResponse:(id)arg2;
- (void)userCompletedRegistrationWithUserSession:(id)arg1 registrationResponse:(id)arg2;
- (void)_beginWorkflowWithUserSession:(id)arg1 context:(id)arg2;
- (void)_resumePreviousWorkflowAfterDataUnavailableEnded:(_Bool)arg1;
- (void)beginWorkflow;
- (id)initWithApplicationDataChecker:(id)arg1 userSessionRepository:(id)arg2 legacyAuthFlowProxy:(id)arg3 router:(id)arg4 deviceLevelABfetcher:(id)arg5 transitionMomentLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

