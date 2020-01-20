//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSString, SCIdentityLoggerServices, SCLazy, SCRegistrationUsernameSuggester;

@interface SCRegistrationUsernameBusinessLogic : SCBusinessLogic
{
    id <SCRegistrationUsernameDelegate> _delegate;
    SCIdentityLoggerServices *_loggerServices;
    SCLazy *_usernameSuggestionService;
    SCLazy *_usernameValidationService;
    SCRegistrationUsernameSuggester *_suggester;
    unsigned long long _state;
    NSString *_error;
    NSString *_info;
    NSString *_latestUsername;
}

- (void).cxx_destruct;
- (void)_usernameSuggestionDidCompleteWithSuggester:(id)arg1 requestedUsername:(id)arg2 errorMessage:(id)arg3;
- (void)_localValidationDidCompleteWithRequestedUsername:(id)arg1 errorMessage:(id)arg2;
- (void)_checkUsernameValidity:(id)arg1;
- (void)_rotateUsernameSuggestion;
- (_Bool)_canContinue;
- (void)_setState:(unsigned long long)arg1;
- (void)handleAction:(id)arg1;
- (id)viewModel;
- (void)begin;
- (void)setUsernameSuggester:(id)arg1;
- (id)initWithUsername:(id)arg1 delegate:(id)arg2 usernameValidationService:(id)arg3 usernameSuggestionService:(id)arg4 loggerServices:(id)arg5;

@end
