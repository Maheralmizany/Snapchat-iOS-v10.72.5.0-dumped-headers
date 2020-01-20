//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCApplicationStorageServices, SCServicesExposer, SCUserSessionScope;

@interface SCUserStateInfoEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCServicesExposer *_contactPermissionInfoServiceExposer;
}

@property(retain, nonatomic) SCServicesExposer *contactPermissionInfoServiceExposer; // @synthesize contactPermissionInfoServiceExposer=_contactPermissionInfoServiceExposer;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (void)begin;

@end
