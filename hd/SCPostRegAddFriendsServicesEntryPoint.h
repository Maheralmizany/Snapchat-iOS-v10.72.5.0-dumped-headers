//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAddFriendsScope, SCServicesExposer, SCSnapchatterServices, SCUserSessionScope;

@interface SCPostRegAddFriendsServicesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCAddFriendsScope *_addFriendsScope;
    SCSnapchatterServices *_snapchatterServices;
    SCServicesExposer *_postRegAddFriendsServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *postRegAddFriendsServicesExposer; // @synthesize postRegAddFriendsServicesExposer=_postRegAddFriendsServicesExposer;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCAddFriendsScope *addFriendsScope; // @synthesize addFriendsScope=_addFriendsScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_createAddFriendsMutator;
- (id)_createAddFriendsTracker;
- (void)begin;

@end

