//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAuthenticationRouter.h"
#import "SCTraceEnabled.h"

@class NSString, SCScopeExposer;

@interface SCAuthenticationSubScopesRouter : NSObject <SCTraceEnabled, SCAuthenticationRouter>
{
    SCScopeExposer *_userSessionScopeExposer;
    SCScopeExposer *_unauthenticatedScopeExposer;
    SCScopeExposer *_dataUnavailableScopeExposer;
}

- (void).cxx_destruct;
- (void)endUserSessionWorkflow:(id)arg1;
- (void)beginUserSessionWorkflowWithUserSession:(id)arg1 userSessionContext:(id)arg2 delegate:(id)arg3;
- (void)endUnauthenticatedWorkflow;
- (void)beginUnauthenticatedWorkflowWithDelegate:(id)arg1;
- (void)endDataUnavailableWorkflow;
- (void)beginDataUnavailableWorkflowWithApplicationDataChecker:(id)arg1 delegate:(id)arg2;
- (id)initWithUserSessionScopeExposer:(id)arg1 unauthenticatedScopeExposer:(id)arg2 dataUnavailableScopeExposer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

