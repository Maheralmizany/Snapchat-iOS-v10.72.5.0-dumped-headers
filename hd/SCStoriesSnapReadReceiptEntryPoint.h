//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCEntryPointCleanup, SCServicesExposer, SCSnapTokenServices, SCStoriesCircumstanceEngineServices, SCUserSessionScope, SCUserStorageServices;

@interface SCStoriesSnapReadReceiptEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCUserStorageServices *_userStorageServices;
    SCUserSessionScope *_userSessionScope;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCSnapTokenServices *_snapTokenServices;
    SCStoriesCircumstanceEngineServices *_storiesCircumstanceEngineServices;
    SCServicesExposer *_snapReadReceiptServiceExposer;
}

@property(retain, nonatomic) SCServicesExposer *snapReadReceiptServiceExposer; // @synthesize snapReadReceiptServiceExposer=_snapReadReceiptServiceExposer;
@property(nonatomic) __weak SCStoriesCircumstanceEngineServices *storiesCircumstanceEngineServices; // @synthesize storiesCircumstanceEngineServices=_storiesCircumstanceEngineServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
- (void).cxx_destruct;
- (id)_createSnapReadReceiptDataCoordinatorWithLazySnapReadReceiptLogger:(id)arg1;
- (id)end;
- (void)begin;

@end

