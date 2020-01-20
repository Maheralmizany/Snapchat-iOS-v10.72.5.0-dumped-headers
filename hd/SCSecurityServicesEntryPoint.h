//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLegacySnapchatterServices, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope, SCUserStorageServices;

@interface SCSecurityServicesEntryPoint : SCEntryPoint
{
    SCUserStorageServices *_userStorageServices;
    SCUserSessionScope *_userSessionScope;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCServicesExposer *_securityServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *securityServicesExposer; // @synthesize securityServicesExposer=_securityServicesExposer;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
- (void).cxx_destruct;
- (void)begin;

@end

