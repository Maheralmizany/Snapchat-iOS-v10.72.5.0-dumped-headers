//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCUnauthenticatedTwoFAService <NSObject>
- (void)resendTwoFACodeToUsernameOrEmail:(NSString *)arg1 preAuthToken:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSString *))arg4;
@end

