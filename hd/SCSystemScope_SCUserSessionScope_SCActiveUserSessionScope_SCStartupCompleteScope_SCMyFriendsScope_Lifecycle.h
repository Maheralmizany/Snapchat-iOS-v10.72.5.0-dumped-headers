//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScopeLifecycle.h"

@class SCServicesContainer;

@interface SCSystemScope_SCUserSessionScope_SCActiveUserSessionScope_SCStartupCompleteScope_SCMyFriendsScope_Lifecycle : SCScopeLifecycle
{
    SCServicesContainer *_myFriendsScopeContainer;
    SCServicesContainer *_myFriendsServicesContainer;
}

@property(readonly, nonatomic) SCServicesContainer *myFriendsServicesContainer; // @synthesize myFriendsServicesContainer=_myFriendsServicesContainer;
@property(readonly, nonatomic) SCServicesContainer *myFriendsScopeContainer; // @synthesize myFriendsScopeContainer=_myFriendsScopeContainer;
- (void).cxx_destruct;
- (void)createEntryPoints;
- (id)externallyAccessibleServices;
- (void)createLifecycleServicesContainers;
- (id)rootScopeContainer;

@end
