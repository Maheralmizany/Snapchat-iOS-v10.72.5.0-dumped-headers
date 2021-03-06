//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnauthenticatedPhoneService.h"

@class SCSessionRequestManager, SCUpdatePhoneNumberParser, SCVerifyPhoneNumberParser;

@interface SCUnauthenticatedPhoneService : NSObject <SCUnauthenticatedPhoneService>
{
    SCSessionRequestManager *_requestManager;
    SCUpdatePhoneNumberParser *_updatePhoneNumberParser;
    SCVerifyPhoneNumberParser *_verifyPhoneNumberParser;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)verifyPhoneWithCode:(id)arg1 countryCode:(id)arg2 usernameOrEmail:(id)arg3 preAuthToken:(id)arg4 phoneNumber:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)updatePhoneNumber:(id)arg1 countryCode:(id)arg2 usernameOrEmail:(id)arg3 preAuthToken:(id)arg4 phoneCall:(_Bool)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)initWithRequestManager:(id)arg1;

@end

