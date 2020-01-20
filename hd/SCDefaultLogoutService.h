//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLogoutService.h"

@class SCUserNetworkServices;

@interface SCDefaultLogoutService : NSObject <SCLogoutService>
{
    SCUserNetworkServices *_networkServices;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (void)_logoutRequestCompleted:(unsigned long long)arg1 error:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)performLogoutRequest:(CDUnknownBlockType)arg1;
- (id)initWithNetworkServices:(id)arg1 graphene:(id)arg2;

@end

