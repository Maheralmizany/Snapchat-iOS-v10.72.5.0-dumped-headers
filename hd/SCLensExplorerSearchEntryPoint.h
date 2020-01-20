//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCLegacySnapchatterServices, SCLensExplorerSearchScope, SCSnapTokenServices, SCUserSessionScope;

@interface SCLensExplorerSearchEntryPoint : SCEntryPoint
{
    SCLensExplorerSearchScope *_lensExplorerSearchScope;
    SCUserSessionScope *_userSessionScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCSnapTokenServices *_snapTokenServices;
}

@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCLensExplorerSearchScope *lensExplorerSearchScope; // @synthesize lensExplorerSearchScope=_lensExplorerSearchScope;
- (void).cxx_destruct;
- (id)end;
- (void)begin;

@end
