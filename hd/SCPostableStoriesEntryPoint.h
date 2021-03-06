//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCGroupChatStoriesSynchronizerServices, SCServicesExposer, SCUserSessionScope, SCUserStorageServices;

@interface SCPostableStoriesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCGroupChatStoriesSynchronizerServices *_groupChatStoriesSynchronizerService;
    SCServicesExposer *_postableStoriesServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *postableStoriesServicesExposer; // @synthesize postableStoriesServicesExposer=_postableStoriesServicesExposer;
@property(nonatomic) __weak SCGroupChatStoriesSynchronizerServices *groupChatStoriesSynchronizerService; // @synthesize groupChatStoriesSynchronizerService=_groupChatStoriesSynchronizerService;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_createPostableStoriesProvider;
- (id)_createOurStoriesDescriptionDataCoordinator;
- (void)begin;

@end

