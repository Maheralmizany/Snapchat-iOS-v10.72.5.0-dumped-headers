//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUnauthenticatedScope_SCUserVerificationScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_authenticatedNetworkServicesContainer;
    SCServicesContainer *_friendmojiServicesContainer;
    SCServicesContainer *_userNetworkServicesContainer;
    SCServicesContainer *_userVerificationScopeContainer;
}

@property(readonly, nonatomic) SCServicesContainer *userVerificationScopeContainer; // @synthesize userVerificationScopeContainer=_userVerificationScopeContainer;
@property(readonly, nonatomic) SCServicesContainer *userNetworkServicesContainer; // @synthesize userNetworkServicesContainer=_userNetworkServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *friendmojiServicesContainer; // @synthesize friendmojiServicesContainer=_friendmojiServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *authenticatedNetworkServicesContainer; // @synthesize authenticatedNetworkServicesContainer=_authenticatedNetworkServicesContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end
