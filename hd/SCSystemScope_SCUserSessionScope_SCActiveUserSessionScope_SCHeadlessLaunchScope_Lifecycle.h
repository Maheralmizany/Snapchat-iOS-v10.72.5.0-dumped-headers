//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCHeadlessLaunchScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_headlessLaunchScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *headlessLaunchScopeContainer; // @synthesize headlessLaunchScopeContainer=_headlessLaunchScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end

