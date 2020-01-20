//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCChangePasswordResponseParser, SCPasswordStrengthResponseParser, SCRequestManager;

@interface SCUnauthenticatedPasswordService : NSObject
{
    SCRequestManager *_requestManager;
    SCChangePasswordResponseParser *_changePasswordResponseParser;
    SCPasswordStrengthResponseParser *_passwordStrengthResponseParser;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_submitPostRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_getpasswordStrengthWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getPasswordStrength:(id)arg1 quickCheck:(_Bool)arg2 preAuthToken:(id)arg3 usernameOrEmail:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_changePassword:(id)arg1 preAuthToken:(id)arg2 usernameOrEmail:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)changePassword:(id)arg1 preAuthToken:(id)arg2 usernameOrEmail:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithRequestManager:(id)arg1 changePasswordResponseParser:(id)arg2 passwordStrengthResponseParser:(id)arg3;
- (id)initWithDefaultsAndRequestManager:(id)arg1;

@end

