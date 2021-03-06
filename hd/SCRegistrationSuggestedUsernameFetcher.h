//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTraceEnabled.h"

@class NSString, SCRegistrationUsernameSuggester, SCRegistrationUsernameSuggestionService;

@interface SCRegistrationSuggestedUsernameFetcher : NSObject <SCTraceEnabled>
{
    NSString *_firstName;
    NSString *_lastName;
    SCRegistrationUsernameSuggestionService *_usernameSuggestionService;
    SCRegistrationUsernameSuggester *_usernameSuggester;
}

@property(readonly, nonatomic) SCRegistrationUsernameSuggester *usernameSuggester; // @synthesize usernameSuggester=_usernameSuggester;
- (void).cxx_destruct;
- (void)_didFetchUsernameSuggester:(id)arg1 withRequestedFirstName:(id)arg2 requestedLastName:(id)arg3;
- (void)fetchUsernameSuggestionWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)initWithUsernameSuggestionService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

