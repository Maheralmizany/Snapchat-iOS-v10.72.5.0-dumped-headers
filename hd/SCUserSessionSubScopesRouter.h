//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUserSessionRouter.h"

@class SCScopeExposer, SCSystemScope, SCUserSessionScope;

@interface SCUserSessionSubScopesRouter : NSObject <SCUserSessionRouter>
{
    id <SCUIContainer> _uiContainer;
    id <SCTermsOfUseService> _termsOfUseService;
    id <SCPrivacyPolicyService> _privacyPolicyService;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCScopeExposer *_activeUserSessionScopeExposer;
    SCScopeExposer *_postRegistrationScopeExposer;
    SCScopeExposer *_termsOfUseScopeExposer;
    SCScopeExposer *_abuseWarningScopeExposer;
}

- (void).cxx_destruct;
- (void)endPostRegistration;
- (void)beginPostRegistrationWithDelegate:(id)arg1;
- (void)endAbuseWarningWorkflow;
- (void)beginAbuseWarningWorkflowWithId:(id)arg1 message:(id)arg2 delegate:(id)arg3;
- (void)endTermsOfUseWorkflow;
- (void)beginTermsOfUseWorkflowWithDelegate:(id)arg1;
- (void)endActiveUserSessionWorkflow;
- (void)beginActiveUserSessionWorkflowWithDelegate:(id)arg1;
- (id)initWithSystemScope:(id)arg1 userSessionScope:(id)arg2 activeUserSessionScopeExposer:(id)arg3 postRegistrationScopeExposer:(id)arg4 termsOfUseScopeExposer:(id)arg5 abuseWarningScopeExposer:(id)arg6 UiContainer:(id)arg7 termsOfUseService:(id)arg8 privacyPolicyService:(id)arg9;

@end

