//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SCUserSessionRouter
- (void)endPostRegistration;
- (void)beginPostRegistrationWithDelegate:(id <SCPostRegistrationDelegate>)arg1;
- (void)endAbuseWarningWorkflow;
- (void)beginAbuseWarningWorkflowWithId:(NSString *)arg1 message:(NSString *)arg2 delegate:(id <SCAbuseWarningWorkflowDelegate>)arg3;
- (void)endTermsOfUseWorkflow;
- (void)beginTermsOfUseWorkflowWithDelegate:(id <SCTermsOfUseWorkflowDelegate>)arg1;
- (void)endActiveUserSessionWorkflow;
- (void)beginActiveUserSessionWorkflowWithDelegate:(id <SCActiveUserSessionWorkflowDelegate>)arg1;
@end

