//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCUserNavigationScope_SCDiscoverFeedScope_SCDiscoverFeedStartupCompleteScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_discoverFeedMessagingServicesContainer;
    SCServicesContainer *_discoverFeedStartupCompleteScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *discoverFeedStartupCompleteScopeContainer; // @synthesize discoverFeedStartupCompleteScopeContainer=_discoverFeedStartupCompleteScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *discoverFeedMessagingServicesContainer; // @synthesize discoverFeedMessagingServicesContainer=_discoverFeedMessagingServicesContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end

