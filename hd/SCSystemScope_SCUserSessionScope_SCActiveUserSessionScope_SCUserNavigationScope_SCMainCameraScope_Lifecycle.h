//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCUserNavigationScope_SCMainCameraScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_mainCameraScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *mainCameraScopeContainer; // @synthesize mainCameraScopeContainer=_mainCameraScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end
