//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCTermsOfUseScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_termsOfUseScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *termsOfUseScopeContainer; // @synthesize termsOfUseScopeContainer=_termsOfUseScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end

