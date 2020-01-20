//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCActiveUserSessionScope, SCBitmojiFetchServices, SCLocationSharingServices, SCServicesExposer, SCSnapTokenServices, SCStartupCompleteScope;

@interface SCMapStatusServicesEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCActiveUserSessionScope *_activeUserSessionScope;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCLocationSharingServices *_locationSharingServices;
    SCSnapTokenServices *_snapTokenServices;
    SCServicesExposer *_mapStatusServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *mapStatusServicesExposer; // @synthesize mapStatusServicesExposer=_mapStatusServicesExposer;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCLocationSharingServices *locationSharingServices; // @synthesize locationSharingServices=_locationSharingServices;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCActiveUserSessionScope *activeUserSessionScope; // @synthesize activeUserSessionScope=_activeUserSessionScope;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (id)_mapStatusStore;
- (void)begin;

@end

