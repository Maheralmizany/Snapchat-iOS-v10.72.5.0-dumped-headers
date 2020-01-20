//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNavigationServices, SCNetworkAbusiveInterceptor, SCNetworkUnauthorizedResponseInterceptor, SCRequestManager, SCSnapTokenServices, SCUserNavStartupCompleteScope, SCUserSessionScope;

@interface SCNetworkInterceptorScopeCoordinator : SCEntryPoint
{
    SCNetworkUnauthorizedResponseInterceptor *_networkUnauthorizedInterceptor;
    SCNetworkAbusiveInterceptor *_abusiveInterceptor;
    SCRequestManager *_requestManager;
    SCUserNavStartupCompleteScope *_userNavStartupCompletedScope;
    SCUserSessionScope *_userSessionScope;
    SCNavigationServices *_navigationServices;
    SCSnapTokenServices *_snapTokenServices;
}

@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCNavigationServices *navigationServices; // @synthesize navigationServices=_navigationServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserNavStartupCompleteScope *userNavStartupCompletedScope; // @synthesize userNavStartupCompletedScope=_userNavStartupCompletedScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end

