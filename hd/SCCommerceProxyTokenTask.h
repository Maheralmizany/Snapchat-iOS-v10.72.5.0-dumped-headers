//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCommerceTokenUpdating.h"

@class SCSessionRequestManager;

@interface SCCommerceProxyTokenTask : NSObject <SCCommerceTokenUpdating>
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)removeCredentials;
- (void)updateCredentialsIfInvalidSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)initWithSessionRequestManager:(id)arg1;

@end

