//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCEntryPointCleanup, SCLazy, SCServicesExposer, SCUserSessionScope;

@interface SCUserStorageEntryPoint : SCEntryPoint
{
    SCLazy *_lazyDocObjectContext;
    SCEntryPointCleanup *_cleanup;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_userStorageServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *userStorageServicesExposer; // @synthesize userStorageServicesExposer=_userStorageServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_createPreferences;
- (id)_createDocObjectContext;
- (id)end;
- (void)begin;

@end
