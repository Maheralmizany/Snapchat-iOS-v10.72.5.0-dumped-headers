//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession;

@interface SCTermsOfUseScope : NSObject
{
    SCUserSession *_userSession;
    id <SCTermsOfUseService> _termsOfUseService;
    id <SCPrivacyPolicyService> _privacyPolicyService;
    id <SCTermsOfUseWorkflowDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCTermsOfUseWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <SCPrivacyPolicyService> privacyPolicyService; // @synthesize privacyPolicyService=_privacyPolicyService;
@property(readonly, nonatomic) __weak id <SCTermsOfUseService> termsOfUseService; // @synthesize termsOfUseService=_termsOfUseService;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 termsOfUseService:(id)arg2 privacyPolicyService:(id)arg3 termsOfUseWorkflowDelegate:(id)arg4;

@end

