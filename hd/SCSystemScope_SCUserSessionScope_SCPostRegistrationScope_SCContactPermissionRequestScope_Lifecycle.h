//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCPostRegistrationScope_SCContactPermissionRequestScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_contactPermissionRequestScopeContainer;
    SCServicesContainer *_contactPermissionRequestServicesContainer;
}

@property(readonly, nonatomic) SCServicesContainer *contactPermissionRequestServicesContainer; // @synthesize contactPermissionRequestServicesContainer=_contactPermissionRequestServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *contactPermissionRequestScopeContainer; // @synthesize contactPermissionRequestScopeContainer=_contactPermissionRequestScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end
