//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol SCUnauthenticatedPhoneService
- (void)updatePhoneNumber:(NSString *)arg1 countryCode:(NSString *)arg2 usernameOrEmail:(NSString *)arg3 preAuthToken:(NSString *)arg4 phoneCall:(_Bool)arg5 successBlock:(void (^)(_Bool, NSString *, NSString *, SOJUIdentityVerifyPhoneNumberResponse *))arg6 failureBlock:(void (^)(_Bool, NSString *, NSString *))arg7;
@end

