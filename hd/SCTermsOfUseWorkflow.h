//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPrivacyPolicyUserInteractionDelegate.h"
#import "SCTermsOfUseUserInteractionDelegate.h"

@class NSString;

@interface SCTermsOfUseWorkflow : NSObject <SCTermsOfUseUserInteractionDelegate, SCPrivacyPolicyUserInteractionDelegate>
{
    id <SCTermsOfUseService> _termsOfUseService;
    id <SCPrivacyPolicyService> _privacyPolicyService;
    id <SCTermsOfUseWorkflowDelegate> _workflowDelegate;
    id <SCTermsOfUsePageRouter> _termsOfUsePageRouter;
    _Bool _isTosV8;
    _Bool _enableTermsOfServiceV8Experience;
}

- (void).cxx_destruct;
- (void)_logGrapheneEvent:(id)arg1 version:(id)arg2;
- (void)userDismissedPrivacyPolicy;
- (void)userTappedLogOut;
- (void)userTappedAccept;
- (void)beginWorkflow;
- (id)initWithTermsOfUseService:(id)arg1 privacyPolicyService:(id)arg2 delegate:(id)arg3 pageRouter:(id)arg4 enableTermsOfServiceV8Experience:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

