//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLogout;

@interface SCLogoutBusinessLogic : NSObject
{
    SCLogout *_logout;
    id <SCLogoutService> _logoutService;
    id <SCLogoutWorkflowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_logOutRequestFailed;
- (void)_logOutRequestSucceeded;
- (void)begin;
- (id)initWithLogout:(id)arg1 logoutService:(id)arg2 delegate:(id)arg3;

@end

