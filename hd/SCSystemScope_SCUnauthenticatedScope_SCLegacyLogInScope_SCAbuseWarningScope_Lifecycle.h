//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUnauthenticatedScope_SCLegacyLogInScope_SCAbuseWarningScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_abuseWarningScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *abuseWarningScopeContainer; // @synthesize abuseWarningScopeContainer=_abuseWarningScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end
